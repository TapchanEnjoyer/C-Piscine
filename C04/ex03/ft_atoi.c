/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:19:40 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 19:57:28 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		res = 1;
		while (power-- != 0)
		{
			res *= nb;
		}
		return (res);
	}
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while ((*str > 47 && *str < 58))
	{
		n++;
		str++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int		neg;
	int		res;
	int		i;
	int		size;

	neg = 1;
	i = 0;
	while (*str == '-' || *str == '+' || *str == ' ')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	size = ft_strlen(str);
	res = 0;
	while (i < size)
	{
		res += (str[i] - 48) * ft_iterative_power(10, size - i - 1);
		i++;
	}
	res *= neg;
	return (res);
}

// int	main(void)
// {
// 	char	str[] = "+ + +14";
// 	int		res;
// 	char	*ptr = str;

// 	res = ft_atoi(ptr);
// 	printf("%d\n", res);
// 	return (0);
// }
