/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:12:11 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/17 16:32:19 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 10;
// 	y = 20;

// 	printf("%d, ", x);
// 	printf("%d\n", y);	
// 	ft_swap(&x, &y);
// 	printf("%d, ", x);
// 	printf("%d", y);
// 	return (0);
// }
