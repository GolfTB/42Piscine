/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:29:12 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/22 16:03:53 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z' )
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hello123";
// 	char	str3[] = "";

// 	printf("%s -> %d\n", str1, ft_str_is_numeric(str1));
// 	printf("%s -> %d\n", str2, ft_str_is_numeric(str2));		
// 	printf("%s -> %d\n", str3, ft_str_is_numeric(str3));
// 	return (0);
// }
