/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:10:52 by carlos            #+#    #+#             */
/*   Updated: 2024/07/09 14:11:26 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*str;
	unsigned char	chr;

	i = ft_strlen(s);
	str = (char *)s;
	chr = (unsigned char)c;
	while (i != 0)
	{
		if (str[i] == chr)
			return (&str[i]);
		i--;
	}
	if (i == 0 && str[i] != chr)
		return (NULL);
	return (&str[i]);
}
