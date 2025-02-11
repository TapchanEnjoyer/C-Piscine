/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:55:08 by niel              #+#    #+#             */
/*   Updated: 2025/02/11 02:39:11 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

/* This function returns oroginal dest*/

// int	main(void)
// {
// 	char	str[15] = "Cake is a lie!";
// 	char	dest[20];
// 	char	*ptr_str = str;
// 	char	*ptr_dest = dest;

// 	ft_strcpy(ptr_dest, ptr_str);
// 	printf("%s\n", dest);
// 	return (1);
// }
