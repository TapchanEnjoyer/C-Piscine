/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:43:49 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/16 05:59:21 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

#define SIZE 4

int	*ft_row2arr(int row)
{
	int	*arr;
	int	col;

	arr = (int *)malloc(SIZE * sizeof(int));
	while (col < SIZE)
	{
		arr[col] = g_input[row][col];
		col++;
	}
	return (arr);
}

void	ft_rev_int_tab(int *tab)
{
	int	i;
	int	temp;

	i = 0;
	while (i < SIZE / 2)
	{
		temp = tab[i];
		tab[i] = tab[SIZE - 1 - i];
		tab[SIZE -1 - i] = temp;
		i++;
	}
}

int	check_line(int *line)
{
	int	i;
	int	ctnmb;
	int	buildings;

	i = 1;
	buildings = 1;
	ctnmb = line[0];
	while (i < SIZE)
	{
		if (line[i] > ctnmb)
		{
			buildings++;
			ctnmb = line[i];
		}
		i++;
	}
	return (buildings);
}

int	compare(void)
{
	int	type;
	int	place;
	int	*arr;

	type = 0;
	place = 0;
	while (type < 4)
	{
		arr = ft_row2arr(type);
		if (type == 1 || type == 3)
			ft_rev_int_tab(arr);
		if (check_line(arr));
			return (1);
		type++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	line[] = {4, 1, 2, 3};
	int	result = 0;
	result = check_line(4, line);
	printf("Number of visible buildings is: %d\n", result);
	return (0);
}
*/
