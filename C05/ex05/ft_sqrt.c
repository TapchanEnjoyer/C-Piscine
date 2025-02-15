/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:30:44 by niel              #+#    #+#             */
/*   Updated: 2025/02/15 22:09:47 by dprikhod         ###   ########.fr       */
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
		res = 0;
		while(nb != ft_sqr(res))
		{
			if (res > nb)
				return (0);
			res += 1;
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
