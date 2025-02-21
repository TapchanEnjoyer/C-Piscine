/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:54:09 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/21 18:58:18 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*ar;
	int	i;

	if (max <= min)
		return (NULL);
	size = max - min;
	ar = malloc(size * sizeof(int));
	if (!ar)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ar[i] = min + i;
		i++;
	}
	return (&ar[0]);
}
