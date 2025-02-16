/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:59:23 by niel              #+#    #+#             */
/*   Updated: 2025/02/16 03:41:12 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "globals.h"

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
		g_input[row][col] = str[i] - '0';
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
