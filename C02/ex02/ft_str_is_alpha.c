/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:08:57 by niel              #+#    #+#             */
/*   Updated: 2025/02/11 02:37:58 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str <= 64 || (91 <= *str && *str <= 96) || *str >= 123)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a;
// 	char	str[100];
// 	char	*ptr_str = str;

// 	printf("Enter a string: ");
// 	scanf("%99s\n", str);
// 	a = ft_str_is_alpha(ptr_str);
// 	printf("%d", a);
// 	return (0);
// }
