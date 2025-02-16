/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:43:49 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/16 05:06:29 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> //for malloc and free
#include "globals.h"

int	g_out[4][4] = {0};
int	g_input[4][4];

int	solve_sudoku(int row, int col);

void	ft_print_grid(int grid[4][4])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
		col = 0;
	}
}

int	ft_first_num(void);

int	ft_input_handler(int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	if (ft_input_handler(argc, argv))
		return (1);
	ft_first_num();
	if (solve_sudoku(0, 0))
		ft_print_grid(g_out);
	else
		write(1, "error!", 6);
	return (0);
}
