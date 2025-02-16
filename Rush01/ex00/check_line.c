/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:43:49 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/16 14:57:50 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"
#include <stdlib.h>

#define SIZE 4

int	check_direction(int *arr, int col, int row, int type);

int	compare(int row, int col)
{
	int	type;
	int	*arr;

	arr = (int *)malloc(SIZE * sizeof(int));
	type = 0;
	while (type < 4)
	{
		if (!check_direction(arr, col, row, type))
		{
			free(arr);
			return (0);
		}
		type++;
	}
	free(arr);
	return (1);
}
