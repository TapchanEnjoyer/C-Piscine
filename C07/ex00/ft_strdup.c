/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 02:28:49 by niel              #+#    #+#             */
/*   Updated: 2025/02/20 13:48:31 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <string.h>
#include <stdlib.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

char	*ft_strdup(char *src)
{
	char	*cpy;

	cpy = malloc(ft_strlen(src));
	return (ft_strcpy(cpy, src));
}

// int	main(void)
// {
// 	char	str[] = "Hello world";
// 	char *cpy = ft_strdup(str);

// 	write(1, cpy, ft_strlen(str));
// 	free(cpy);
// 	return (0);
// }
