/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:50:04 by niel              #+#    #+#             */
/*   Updated: 2025/02/08 15:52:44 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buf;
	int	pos;

	pos = 1;
	while (pos <= (size / 2))
	{
		buf = *tab;
		*tab = *(tab + (size - pos));
		tab = tab + (size - pos);
		*tab = buf;
		tab = tab - (size - pos);
		pos++;
		tab++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	array[] = {2, 5, 6};
	int	size = 3;

	ft_rev_int_tab(array, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d \n", array[i]);
	}
	return (0);
}
*/
