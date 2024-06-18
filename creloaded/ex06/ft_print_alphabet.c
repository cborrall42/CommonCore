/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caborral <caborral@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:30:10 by caborral          #+#    #+#             */
/*   Updated: 2024/06/18 10:29:13 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printf_alphabet(void)
{
	char	a;

	a = 97;
	while (a <= 122)
	{
		ft_putchar(a);
		a++;
	}
}
