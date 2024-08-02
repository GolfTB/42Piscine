/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:12:56 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/21 21:29:50 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z' )
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