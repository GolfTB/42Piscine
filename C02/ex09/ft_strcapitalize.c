/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:42:12 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/21 22:49:32 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	ft_strupcase(str);
	while (str[i] != '\0')
	{
		if (str[i] == str[0])
			if (str[i] >= 97 && str[i] <= 122)
				str[0] -= 32;
		if ((str[i] >= 0 && str[i] <= 47)
			|| (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 127))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
// int     main(void)
// {
//     char    str1[] = "salut, comment tu vas ?
//     42mots quarante-deux; cinquante+et+un";

//     printf("%s \n", ft_strcaptilize(str1));
// }
