/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 02:03:57 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 02:41:44 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	x;
// 	int	res;

// 	x = 3;
// 	res = ft_iterative_factorial(x);
// 	printf("%d\n", res	);
// 	return (0);
// }
