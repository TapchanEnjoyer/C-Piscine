/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:45:47 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/19 21:16:37 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		f = to_find;
		while (*s && *f && *s == *f)
		{
			s++;
			f++;
		}
		if (!*f)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "Hello w world!";
// 	char	sub[] = "";

// 	write(1, ft_strstr(str, sub), strlen(ft_strstr(str, sub)));
// 	// write(1, strstr(str, sub), strlen(ft_strstr(str, sub)));
// 	return (0);
// }
