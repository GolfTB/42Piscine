/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:33:25 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/21 21:37:13 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
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

// int     main(void)
// {
//     char    str1[] = "ASFSFSsdad";
//     char    str2[] = "aAspaS";

//     printf("%s \n", ft_strupcase(str1));
//     printf("%s", ft_strupcase(str2));
// }
