/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:50:04 by niel              #+#    #+#             */
/*   Updated: 2025/02/08 13:08:53 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buf[size];
	int	pos;

	pos = 0;
	while (pos < size)
	{
		buf[pos] = *tab;
		pos++;
		tab++;
	}
	pos = 0;
	while (pos < size)
	{
		*tab = buf[size - pos];
		tab--;
		pos++;
	}
}

int	main(void)
{
	int	array[] = [2,11,5,61,5];

	ft_rev_int_tab(&array, 5);
	return (0);
}
