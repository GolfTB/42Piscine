/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:44:04 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/21 22:51:59 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "\t";

// 	printf("%d\n",ft_str_is_printable(str1));
// 	printf("%d",ft_str_is_printable(str2));
// }
