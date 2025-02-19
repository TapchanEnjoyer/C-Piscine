/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:13:35 by niel              #+#    #+#             */
/*   Updated: 2025/02/19 21:15:59 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strncat(char *dest, const char *src, size_t n)
//            {
//                size_t dest_len = strlen(dest);
//                size_t i;

//                for (i = 0 ; i < n && src[i] != '\0' ; i++)
//                    dest[dest_len + i] = src[i];
//                dest[dest_len + i] = '\0';

//                return dest;
//            }

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_size;

	dest_size = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			str1[8] = "Hello";
// 	char			str2[] = "world";
// 	unsigned int	n = 3;

// 	// printf("%s\n", ft_strncat(str1, str2, n));
// 	printf("%s\n", strncat(str1, str2, n));
// 	return (0);
// }
