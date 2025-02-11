/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:43:26 by dprikhod          #+#    #+#             */
/*   Updated: 2025/02/11 14:42:02 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_condition(char *str)
{
	int	in_word;

	if (*str < 48 || (*str > 57 && *str < 65)
		|| (*str > 90 && *str < 97) || *str > 122)
	{
		in_word = 0;
	}
	else
	{
		in_word = 1;
	}
	return (in_word);
}

char	*ft_strcapitalize(char *str)
{
	int		in_word;
	char	*original_str;

	original_str = str;
	in_word = 0;
	while (*str != '\0')
	{
		if (in_word == 1 && *str > 64 && *str < 91)
		{
			*str = *str + 32;
		}
		else if (in_word == 0 && *str > 96 && *str < 123)
		{
			*str = *str - 32;
		}
		in_word = ft_condition(str);
		str++;
	}
	return (original_str);
}
