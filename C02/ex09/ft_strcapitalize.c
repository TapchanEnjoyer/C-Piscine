/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:43:26 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/11 13:52:35 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	first;

	first = 0;
	while (*str != '\n')
	{
		if (first == 0 && *str > 64 && *str < 91)
		{
			*str = *str + 32;
		}
		else if (first == 1 && *str > 96 && *str < 123)
		{
			*str = *str - 32;
			first = 0;
		}
		str++;
	}
}
