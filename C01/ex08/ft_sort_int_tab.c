/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:14:30 by niel              #+#    #+#             */
/*   Updated: 2025/02/22 01:40:55 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	key;

	i = 1;
	while (i < size)
	{
		key = tab[i];
		j = i - 1;
		while (j >= 0 && key < tab[j])
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = key;
		i++;
	}
}

// #include <stdio.h>

// void	print_array(int *arr, int size)
// {
// 	int i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	int	arr[] = {9, 34, 2, 123, 5, 1, 3};
// 	int	size = sizeof(arr) / sizeof(arr[0]);
// 	printf("%d\n", size);
// 	ft_sort_int_tab(arr, size);
// 	print_array(arr, size);
// 	return (0);
// }
