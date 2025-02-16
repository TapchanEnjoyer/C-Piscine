/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:43:49 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/16 22:28:00 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> //for malloc and free
#include <stdio.h>
#include "ft_ft.h"

#define SIZE 5
#define SQSIZE 20

void	ft_print_grid(int grid[SIZE][SIZE])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	solve_sudoku(int sudoku[SIZE][SIZE], int pos, int input[SQSIZE])
{
	int	row;
	int	col;
	int	num;

	row = pos / SIZE;
	col = pos % SIZE;
	num = 1;
	while (num <= SIZE)
	{
		if (is_valid(sudoku, row, col, num))
		{
			sudoku[row][col] = num;
			if (!check_filled_line(sudoku, row, col, input))
			{
				sudoku[row][col] = 0;
				num++;
				continue ;
			}
			if (pos + 1 == SIZE * SIZE || solve_sudoku(sudoku, pos + 1, input))
				return (1);
			sudoku[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	input_handler(char *str, int input[SQSIZE])
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((*str >= '0' && *str <= SIZE + '0') && (i % 2 == 0))
		{
			if (count < SQSIZE)
				input[count++] = str[i] - '0';
			else
				return (0);
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (count != SQSIZE)
		return (0);
	return (1);
}

void	grid_init(int grid[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	input[SQSIZE];
	int	out[SIZE][SIZE];

	if (ac != 2)
	{
		write(1, "Error!\nWrong input\n", 21);
		return (1);
	}
	if (!input_handler(av[1], input))
	{
		write(1, "Error!\nWrong input format\n", 26);
		return (1);
	}
	grid_init(out);
	if (solve_sudoku(out, 0, input))
		ft_print_grid(out);
	else
		write(1, "Error!\nNot solvable!\n", 21);
	return (0);
}
