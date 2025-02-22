/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:10:44 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/22 00:14:29 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	if (size <= dest_size)
		return (size + dest_size);
	else if (size > dest_size)
	{
		i = dest_size;
		while (i < size - 1)
		{
			dest[i] = src[i - dest_size];
			i++;
		}
		dest[i] = '\0';
		return (dest_size + ft_strlen(src));
	}
	return (0);
}

// int	main(void)
// {
// 	char			str1[17] = "Hello world";
// 	char			str2[] = "world";
// 	unsigned int	n = 13;

// 	printf("%d\n", ft_strlcat(str1, str2, n));
// 	// printf("%d\n", strlcat(str1, str2, n));
// 	// printf("%d\n", ft_strlen(str1));
// 	printf("%s\n", str1);
// 	return (0);
// }
