/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:43:49 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/15 19:40:33 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line(int size, int *line)  // return number of visible buildings
{
	int	i = 1;
	int	ctnmb = line[0];
	int	buildings = 1;

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
