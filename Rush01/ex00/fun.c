/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:43:49 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/16 22:33:07 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"
#include <stdlib.h>

int	is_valid(int sudoku[SIZE][SIZE], int row, int col, int num)
{
	int	x;

	x = 0;
	while (x < SIZE)
	{
		if (sudoku[row][x] == num || sudoku[x][col] == num)
			return (0);
		x++;
	}
	return (1);
}

int	check_visible_line(int line[SIZE], int input)
{
	int	i;
	int	sk_scr;
	int	cont_nb;

	i = 0;
	sk_scr = 0;
	cont_nb = 0;
	while (i < SIZE)
	{
		if (line[i] > cont_nb)
		{
			cont_nb = line[i];
			sk_scr++;
		}
		i++;
	}
	return (sk_scr == input);
}

int	check_visible_line_rev(int line[SIZE], int input)
{
	int	i;
	int	sk_scr;
	int	cont_nb;

	i = SIZE - 1;
	sk_scr = 0;
	cont_nb = 0;
	while (i >= 0)
	{
		if (line[i] > cont_nb)
		{
			cont_nb = line[i];
			sk_scr++;
		}
		i--;
	}
	return (sk_scr == input);
}

int	check_filled_line(
		int sudoku[SIZE][SIZE], int row, int col, int input[SQSIZE])
{
	int	i;
	int	pillar[SIZE];

	if (col == SIZE - 1 && (
			!check_visible_line(sudoku[row], input[row + 2 * SIZE])
			|| !check_visible_line_rev(sudoku[row], input[row + 3 * SIZE])))
		return (0);
	if (row == SIZE - 1)
	{
		i = 0;
		while (i < SIZE)
		{
			pillar[i] = sudoku[i][col];
			i++;
		}
		if (!check_visible_line(pillar, input[col])
			|| !check_visible_line_rev(pillar, input[col + SIZE]))
			return (0);
	}
	return (1);
}
