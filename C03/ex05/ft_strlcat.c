/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:27:17 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/24 17:11:27 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && i < size)
	{
		dest_len++;
	}
	while (*src != '\0' && i < size)
	{
		i++;
	}
	if (size > i)
		return (dest_len);
	*dest = '\0';
	return (dest[dest_len]);
}
