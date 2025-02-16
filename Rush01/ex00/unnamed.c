/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unnamed.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:56:16 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/16 14:57:20 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

#define SIZE 4

int	*ft_row2arr(int *arr, int row)
{
	int	col;

	col = 0;
	while (col < SIZE)
	{
		arr[col] = g_out[row][col];
		col++;
	}
	return (arr);
}

int	*ft_col2arr(int *arr, int col)
{
	int	row;

	row = 0;
	while (row < SIZE)
	{
		arr[row] = g_out[row][col];
		row++;
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
	int	control_nb;
	int	buildings;

	i = 1;
	buildings = 1;
	control_nb = line[0];
	while (i < SIZE)
	{
		if (line[i] > control_nb)
		{
			buildings++;
			control_nb = line[i];
		}
		i++;
	}
	return (buildings);
}

int	check_direction(int *arr, int col, int row, int type)
{
	int	index;

	if (type < 2)
	{
		ft_col2arr(arr, col);
		index = col;
	}
	else
	{
		ft_row2arr(arr, row);
		index = row;
	}
	if (type % 2 == 1)
		ft_rev_int_tab(arr);
	return (check_line(arr) == g_input[type][index]);
}
