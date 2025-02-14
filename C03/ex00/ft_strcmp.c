/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 22:26:56 by niel              #+#    #+#             */
/*   Updated: 2025/02/13 23:31:42 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "Ad";
// 	char	str2[] = "ABC";
// 	int		d;
// 	int		test;

// 	d = ft_strcmp(str1, str2);
// 	test = strcmp(str1, str2);
// 	printf("Res: %d\nTest: %d\n", d, test);
// 	return (0);
// }
