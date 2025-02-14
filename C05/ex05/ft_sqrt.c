/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:30:44 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 12:08:15 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqr(int nb)
{
	int	res;

	res = nb * nb;
	return (res);
}

int	ft_sqrt(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else
	{
		res = nb / 2;
		while (nb != ft_sqr(res))
		{
			res = (nb / res + res) / 2;
		}
		return (res);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;

// 	nb = 625;
// 	printf("%d\n", ft_sqrt(nb));
// 	return (0);
// }
