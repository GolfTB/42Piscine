/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:45:25 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/17 16:33:39 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 30;
// 	y = 7;

// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%d", x);
// 	printf("%d", y);
// 	return (0);
// }
