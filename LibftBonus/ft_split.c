/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:42:19 by carlos            #+#    #+#             */
/*   Updated: 2024/07/11 22:00:48 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_numwords(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			word_count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word_count);
}

static size_t	ft_longitud(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	ft_rellenar(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

char	*ft_free(size_t j, char **str)
{
	if (!str[j])
	{
		while (j > 0)
			free (str[--j]);
		free (str);
		return (NULL);
	}
	return (str[j]);
}

char	**ft_split(char const *s, char c)
{
	size_t		x;
	size_t		j;
	size_t		i;
	char		**split;

	x = ft_numwords(s, c);
	split = (char **)malloc(sizeof(char *) * (x + 1));
	j = 0;
	i = 0;
	if (!s || !split)
		return (NULL);
	while (j < x)
	{
		while (s[i] && s[i] == c)
			i++;
		split[j] = (char *)malloc(sizeof(char) * (ft_longitud(&s[i], c) + 1));
		split[j] = ft_free(j, split);
		if (split[j] == NULL)
			return (NULL);
		ft_rellenar(split[j], &s[i], ft_longitud(&s[i], c));
		i += ft_longitud(&s[i], c);
		j++;
	}
	split[j] = NULL;
	return (split);
}
/*
int	main()
{
	size_t	x = 0;
	char 	**str;
	size_t	i = ft_numwords("Hola buenos dias", ' ');

	str = ft_split("Hola buenos dias", ' ');
	while (x <= i)
	{
		printf("%s\n", str[x]);
		free(str[x]);
		x++;
	}
	free(str);
	return (0);
}
*/
