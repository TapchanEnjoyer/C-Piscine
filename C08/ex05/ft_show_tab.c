/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:27:26 by niel              #+#    #+#             */
/*   Updated: 2025/02/26 15:20:03 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	char	c;

	i = 0;
	while (par[i].str != NULL)
	{
		c = '0' + par[i].size;
		write(1, &c, 1);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		ft_putstr(par[i].copy);
		i++;
	}
}
