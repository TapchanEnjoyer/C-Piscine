/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:13:35 by niel              #+#    #+#             */
/*   Updated: 2025/02/16 23:54:44 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char	*ft_strcpy(char *dest, char *src)
// {
// 	char	*original_dest;

// 	original_dest = dest;
// 	while (*src != '\0')
// 	{
// 		*dest = *src;
// 		dest++;
// 		src++;
// 	}
// 	*dest = '\0';
// 	return (original_dest);
// }

// int	ft_strlen(char *str)
// {
// 	int	n;

// 	n = 0;
// 	while (*str != '\0')
// 	{
// 		n++;
// 		str++;
// 	}
// 	return (n);
// }

// char	*ft_strcat(char *dest, char *src)
// {
// 	char	*original_dest;

// 	original_dest = dest;
// 	dest += ft_strlen(dest);
// 	ft_strcpy(dest, src);
// 	return (original_dest);
// }

// char	*ft_strncat(char *dest, char *src, unsigned int nb)
// {


// 	return dest;
// }

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			str1[6] = "Hello";
	char			str2[] = "world";
	unsigned int	n = 2;

	printf(strncat(str1, str2, n));
	return (0);
}
