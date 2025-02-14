/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:30:21 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 11:30:13 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (res);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	index;

// 	index = 6;
// 	printf("%d\n", ft_fibonacci(index));
// 	return (0);
// }
