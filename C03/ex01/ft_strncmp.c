/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:25:42 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/30 16:40:02 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char	s1[] = "abcd";
// 	char	s2[] = "abcd";
// 	char	s3[] = "aasaw";

// 	printf("%d\n", ft_strncmp(s1, s2, 2));
// 	printf("%d", ft_strncmp(s1, s3, 3));

// }

