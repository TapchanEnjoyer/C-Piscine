/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:36:23 by niel              #+#    #+#             */
/*   Updated: 2025/02/16 16:10:26 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	temp;

	temp = 2;
	while (temp < nb)
	{
		if (nb % temp == 0)
		{
			return (0);
		}
		temp++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	nb = 5;
// 	int	is_prime;

// 	is_prime = 0;
// 	is_prime = ft_is_prime(nb);
// 	printf("%d\n", is_prime);
// 	return 0;
// }
