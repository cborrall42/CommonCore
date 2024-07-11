/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:26:59 by carlos            #+#    #+#             */
/*   Updated: 2024/07/09 13:27:03 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (!size)
		return (srclen);
	while (src[i] && destlen + i < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	if (destlen > size)
		return (size + srclen);
	dest[destlen + i] = 0;
	return (srclen + destlen);
}
/*
int	main()
{
	char	str[20] = "Hola\0";
	ft_strlcat(str, "Adios", 12);
	printf("%s\n", str);
}
*/
