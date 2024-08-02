/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:42:35 by paphetpr          #+#    #+#             */
/*   Updated: 2024/08/02 18:33:34 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	count;

	count = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		ptr = (int *)malloc(count * sizeof(int));
		while (i != count)
		{
			ptr[i] = min + i;
			i++;
		}
	}
	return (ptr);
}
// #include <stdio.h>

// int main(void)
// {
// 	int *ptr;

// 	ptr = ft_range(10, 20);
// }
