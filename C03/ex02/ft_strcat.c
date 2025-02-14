/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 00:43:04 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 01:30:01 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	dest += ft_strlen(dest);
	ft_strcpy(dest, src);
	return (original_dest);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "is a lie";
// 	char	dest[] = "Cake";

// 	ft_strcat(dest, str1);
// 	printf("%s\n",dest);
// 	return (0);
// }
