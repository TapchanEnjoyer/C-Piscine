/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:10:44 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/19 21:16:47 by dprikhod         ###   ########.fr       */
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
	unsigned int	j;
	unsigned int	i;
	unsigned int	s_s;

	i = ft_strlen(dest);
	s_s = i + ft_strlen(src);
	j = 0;
	while (i < size && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (s_s);
}

// int	main(void)
// {
// 	char			str1[] = "Hello";
// 	char		str2[] = "world";
// 	unsigned int	n = 8;

// 	printf("%d\n", ft_strlcat(str1, str2, n));
// 	// printf("%zu\n", strlcat(str1, str2, n));
// 	return (0);
// }
