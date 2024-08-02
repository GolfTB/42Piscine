/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:42:03 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/21 22:54:18 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

// int     main(void)
// {
//     char    str1[] = "asdadsdad";
//     char    str2[] = "aAspaS";

//     printf("%s \n", ft_strupcase(str1));
//     printf("%s", ft_strupcase(str2));
// }
