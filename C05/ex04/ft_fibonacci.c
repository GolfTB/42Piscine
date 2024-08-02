/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:43:46 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/29 16:49:43 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 0)
	{
		if (index == 1)
			return (1);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (0);
}
