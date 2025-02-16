/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_squere.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:12:52 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/16 05:19:28 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

// int	ft_assign()

void	ft_rev_int_tab(int *tab, int size);

int	ft_fill(int *a)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		a[i] = i + 1;
		i++;
	}
	return (0);
}

int	ft_fill_row(int type, int place)
{
	int	i;
	int	a[4];
	int	*ptr;

	ptr = &a[0];
	ft_fill(ptr);
	if (type == 1 || type == 3)
		ft_rev_int_tab(ptr, 4);
	i = 0;
	while (i < 4)
	{
		if (type == 3 || type == 2)
		{
			g_out[i][place] = a[i];
		}
		else
		{
			g_out[place][i] = a[i];
		}
		i++;
	}
	return (0);
}

int	ft_first_num(void)
{
	int	type;
	int	place;

	type = 0;
	place = 0;
	while (type < 4)
	{
		while (place < 4)
		{
			if (g_input[type][place] == 4)
			{
				ft_fill_row(type, place);
			}
			place++;
		}
		place = 0;
		type++;
	}
	return (0);
}
