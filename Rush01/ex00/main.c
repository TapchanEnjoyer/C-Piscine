/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:43:49 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/15 23:40:35 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>	//for malloc and free
#include <stdio.h>

int		g_matrix[4][4];

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

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

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 	{
// 		write(1, str, 1);
// 		str++;
// 	}
// }

void	ft_char_to_matrix(char *str)
{
	int	row;
	int	col;
	int	i;
	int	size;

	i = 0;
	col = 0;
	row = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		g_matrix[row][col] = str[i] - '0';
		col++;
		if (col == 4)
		{
			col = 0;
			row++;
		}
		i += 2;
	}
}

int	ft_input_handler(int argc, char *argv[])
{
	int		size;
	int		i;
	char	*str;
	int		ret;

	if (argc != 2)
		ret = 1;
	str = argv[1];
	size = ft_strlen(str);
	if (size != 31)
		ret = 1;
	i = 0;
	while (str[i] < size)
	{
		if (((i % 2 == 0) && !(*str >= '0' && *str <= '4'))
			|| ((i % 2 == 1) && !(*str != ' ')))
			ret = 1;
		i++;
	}
	if (ret == 1)
		write(1, "Error!\n", 7);
	else
		ft_char_to_matrix(str);
	return (ret);
}

int	main(int argc, char *argv[])
{
	if (ft_input_handler(argc, argv))
		return (1);
	ft_print_grid(g_matrix);
	return (0);
}
