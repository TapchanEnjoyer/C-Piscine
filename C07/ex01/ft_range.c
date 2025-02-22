/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:29:58 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/22 02:02:43 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*ar;
	int	i;

	if (max <= min)
		return (NULL);
	size = max - min;
	ar = malloc(size * sizeof(int));
	if (!ar)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ar[i] = min + i;
		i++;
	}
	return (&ar[0]);
}

// #include <stdio.h>

// int main(void)
// {
// 	int *ar;
// 	int i = 0;
// 	int min = 5;
// 	int max = 15;
// 	int size = max - min;

// 	ar = ft_range(min, max);
// 	while (i < size)
// 	{
// 		printf("%d\n", ar[i]);
// 		i++;
// 	}
// 	free(ar);
// 	return (0);
// }
