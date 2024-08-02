/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:11:17 by paphetpr          #+#    #+#             */
/*   Updated: 2024/07/22 15:32:04 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char src[] = "Hello";
// 	char src1[] = "H\t1";
// 	char dest[6];
// 	char dest1[6];

// 	ft_strcpy(dest, src);
// 	printf("%s\n", src );
// 	printf("%s\n", dest);

// 	ft_strcpy(dest1, src1);
// 	printf("%s\n", src1 );
// 	printf("%s\n", dest1);
// 	return (0);
// }