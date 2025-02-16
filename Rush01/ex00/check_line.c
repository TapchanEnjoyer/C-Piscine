/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:43:49 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/16 05:21:53 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = temp;
		i++;
	}
}

int	check_line(int size, int *line)
{
	int	i;
	int	ctnmb;
	int	buildings;

	i = 1;
	buildings = 1;
	ctnmb = line[0];
	while (i < size)
	{
		if (line[i] > ctnmb)
		{
			buildings++;
			ctnmb = line[i];
		}
		i++;
	}
	return (buildings);
}

int	compare(void)
{
	
}

/*
#include <stdio.h>

int	main(void)
{
	int	line[] = {4, 1, 2, 3};
	int	result = 0;
	result = check_line(4, line);
	printf("Number of visible buildings is: %d\n", result);
	return (0);
}
*/
