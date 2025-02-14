/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 09:54:53 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 10:26:52 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>

// int	main(void)
// {
// 	int	num;
// 	int	pow;

// 	num = 5;
// 	pow = 2;
// 	printf("%d\n", ft_iterative_power(num, pow));
// 	return (0);
// }
