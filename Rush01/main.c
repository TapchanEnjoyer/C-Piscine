/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:43:49 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/15 19:10:45 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>	//for malloc and free
#include <stdio.h>

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
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			char c = grid[row][col] + '0';
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

int	main(int num, char **arg)
{
	char	*str;
	int		size;
	int		i;

	if (num != 2)
		return (1);
	str = arg[1];
	size = ft_strlen(str);
	if (size != 32)
		return (1);
	i = 0;
	printf("%c\n", '5');
	while (str[i] < size)
	{
		if (((i % 2 == 0) && !(*str >= '0' && *str <= '4'))
			|| ((i % 2 == 1) && !(*str != ' ')))
			return (1);
		i++;
	}
	//transform to int matrix
int matrix[4][4];
int row = 0;
int col = 0;

i = 0;
printf("%c\n", str[i]);
while (i < size)
{
	printf("%c\n", '5');
	matrix[row][col] = str[i] - '0';
	printf("%d\n", matrix[row][col]);

	col++;
	if (col == 4)
	{
		col = 0;
		row++;
	}
	i += 2;
}
printf("%d\n", matrix[row][col]);
//ft_print_grid(matrix);
return (0);
}
