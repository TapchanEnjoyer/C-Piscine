/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:40:52 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/08 19:19:52 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_on_x(int x, char corner, char fill)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
		{
			ft_putchar(corner);
		}
		else
		{
			ft_putchar(fill);
		}
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 2;
	ft_print_on_x(x, 'o', '-');
	while (row < y)
	{
		ft_print_on_x(x, '|', ' ');
		row++;
	}
	if (y > 1)
	{
		ft_print_on_x(x, 'o', '-');
	}
}
