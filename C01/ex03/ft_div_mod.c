/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:28:32 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/17 16:33:16 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	temp_div;
	int	temp_mod;

	temp_div = a / b;
	temp_mod = a % b;
	*div = temp_div;
	*mod = temp_mod;
}
// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	ptr_x;
// 	int	ptr_y;

// 	x = 30;
// 	y = 7;

// 	ft_div_mod(x, y, &ptr_x, &ptr_y);
// 	printf("%d, ", ptr_x);
// 	printf("%d", ptr_y);
// 	return (0);
// }
