/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:50:04 by niel              #+#    #+#             */
/*   Updated: 2025/02/08 19:56:02 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buf;
	int	pos;

	pos = 0;
	while (pos < size / 2)
	{
		buf = *(tab + pos);
		*(tab + pos) = *(tab + size - pos - 1);
		*(tab + size - pos - 1) = buf;
		pos++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	array[] = {2, 5, 22, 6};
// 	int	size = 4;

// 	ft_rev_int_tab(array, size);
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d \n", array[i]);
// 	}
// 	return (0);
// }
