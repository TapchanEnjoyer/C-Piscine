/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:20:06 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 10:27:10 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		res = nb * ft_recursive_power(nb, power - 1);
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
// 	printf("%d", ft_recursive_power(num, pow));
// 	return (0);
// }
