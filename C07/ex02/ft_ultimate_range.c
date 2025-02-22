/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:54:09 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/22 02:02:50 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (max <= min)
	{
		*range = NULL;
		return (-1);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>

// int main(void)
// {
// 	int *range;
// 	int i = 0;
// 	int min = 5;
// 	int max = 15;
// 	int size;

// 	size = ft_ultimate_range(&range, min, max);
// 	while (i < size)
// 	{
// 		printf("%d\n", range[i]);
// 		i++;
// 	}
// 	free(range);
// 	return (0);
// }
