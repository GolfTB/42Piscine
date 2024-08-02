/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:37:43 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/29 16:42:44 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
int main(void)
{
	printf("%d \n", ft_recursive_power(8, 3));
	printf("%d", ft_recursive_power(6, 0));
}