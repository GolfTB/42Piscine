/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:07:22 by paphetpr          #+#    #+#             */
/*   Updated: 2024/08/02 18:35:03 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;
	int	count;

	i = 0;
	count = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (min < max)
	{
		ptr = (int *)malloc(count * sizeof(int));
		while (i != count)
		{
			ptr[i] = min + i;
			i++;
		}
		*range = ptr;
	}
	else
		return (-1);
	return (i);
}
