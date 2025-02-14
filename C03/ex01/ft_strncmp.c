/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 00:01:11 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 00:39:25 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "ABCDEF";
// 	char	str2[] = "ABgDEF";
// 	int		n = 5;
// 	int		d;
// 	int		test;

// 	d = ft_strncmp(str1, str2, n);
// 	test = strncmp(str1, str2, n);
// 	printf("Res: %d\nTest: %d\n", d, test);
// 	return (0);
// }
