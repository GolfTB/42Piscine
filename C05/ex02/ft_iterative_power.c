/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:12:33 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/29 16:36:45 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	unsigned int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power >= 1)
	{
		while (power > 1)
		{
			nb *= i;
			power--;
		}
	}
	return (nb);
}
