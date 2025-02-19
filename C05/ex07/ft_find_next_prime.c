/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:12:12 by niel              #+#    #+#             */
/*   Updated: 2025/02/19 16:59:21 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	temp;

	if (nb <= 1)
		return (0);
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// int	main(void)
// {
// 	int	nb = 6;
// 	char	str;

// 	nb = ft_find_next_prime(nb);
// 	str = nb + '0';
// 	write(1, &str, sizeof(str));
// 	return (0);
// }
