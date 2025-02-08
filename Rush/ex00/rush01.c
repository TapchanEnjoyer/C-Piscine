/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:14:27 by zshuo             #+#    #+#             */
/*   Updated: 2025/02/08 19:04:44 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_if_print(int row, int col, int x, int y)
{
	if ((col == 1 && row == 1) || (col == x && row == y && x > 1 && y > 1))
	{
		ft_putchar('/');
	}
	else if ((col == 1 && row == y) || (col == x && row == 1))
	{
		ft_putchar('\\');
	}
	else if ((col == 1 || col == x) || (row == 1 || row == y))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			ft_if_print(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
	ft_putchar('\n');
}
