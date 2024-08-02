/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:30:52 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/29 17:29:54 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		while (i != 0)
		{
			nb = nb * i;
			i--;
		}
	}
	return (nb);
}
// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(4));
// }
