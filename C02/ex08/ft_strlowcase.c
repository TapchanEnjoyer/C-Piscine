/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:57:54 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/11 13:00:59 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*original_str;

	original_str = str;
	while (*str != '\0')
	{
		if (*str > 64 && *str < 91)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (original_str);
}
