/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:35:02 by carlos            #+#    #+#             */
/*   Updated: 2024/07/09 13:35:06 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*root;

	ptr = dest;
	root = (unsigned char *)src;
	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	while (n-- != 0)
	{
		if (ptr > root)
			ptr[n] = root[n];
		else
		{
			*ptr = *root;
			ptr++;
			root++;
		}
	}
	return (dest);
}
