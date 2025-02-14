/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumberi <mgumberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:44:44 by mgumberi          #+#    #+#             */
/*   Updated: 2025/02/14 11:58:09 by mgumberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;

	k = 0;
	if (size != 0)
	{
		while (k < size - 1 && src[k] != '\0')
		{
			dest[k] = src[k];
			k++;
		}
	}
	dest[k] = '\0';
	while (src[k] != '\0')
	{
		k++;
	}
	return (k);
}
