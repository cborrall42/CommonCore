/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:35:54 by carlos            #+#    #+#             */
/*   Updated: 2024/06/18 10:37:53 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	if (!nb || nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	temp = nb;
	while (temp > 1)
	{
		nb *= temp - 1;
		temp--;
	}
	return (nb);
}
