/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:42:28 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/23 15:26:53 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	len_d;
	unsigned int	len_s;

	len_d = 0;
	len_s = 0;
	while (dest[len_d] != '\0')
		len_d++;
	while (src[len_s] != '\0')
	{
		dest[len_d + len_s] = src[len_s];
		len_s++;
	}
	dest[len_s + len_d] = '\0';
	return (dest);
}
