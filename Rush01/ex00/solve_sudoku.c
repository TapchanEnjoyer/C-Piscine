/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 04:32:16 by niel              #+#    #+#             */
/*   Updated: 2025/02/16 13:57:46 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

#define SIZE 4

int	is_valid(int row, int col, int num)
{
	int	x;

	x = 0;
	while (x < SIZE)
	{
		if (g_out[row][x] == num || g_out[x][col] == num)
			return (0);
		x++;
		//check_line(row, x) && check_line(x, col)
	}
	return (1);
}

int	solve_sudoku(int row, int col)
{
	int	num;

	if (row == SIZE - 1 && col == SIZE)
		return (1);
	if (col == SIZE)
	{
		row++;
		col = 0;
	}
	if (g_out[row][col] != 0)
		return (solve_sudoku(row, col + 1));
	num = 1;
	while (num <= SIZE)
	{
		if (is_valid(row, col, num))
		{
			g_out[row][col] = num;
			if (solve_sudoku(row, col + 1))
				return (1);
			g_out[row][col] = 0;
		}
		num++;
	}
	return (0);
}
