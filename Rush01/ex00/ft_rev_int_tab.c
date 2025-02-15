/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:30:57 by ljanda            #+#    #+#             */
/*   Updated: 2025/02/12 14:39:38 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//
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
/*
int main()
{
	int	listofnumbers[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i;

	i = 0;
	while (i < size)
	{
	        printf("%d ", listofnumbers[i]);
		i++;
	}
	printf("\n");

        ft_rev_int_tab(listofnumbers, size);

	i = 0;
        while (i < size)
        {
                printf("%d ", listofnumbers[i]);
                i++;
        }
        printf("\n");

}*/
