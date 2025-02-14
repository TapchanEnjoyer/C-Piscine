/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 02:21:52 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 02:42:40 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	res = 1;
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	x;
// 	int	res;

// 	x = 3;
// 	res = ft_recursive_factorial(x);
// 	printf("%d\n", res	);
// 	return (0);
// }
