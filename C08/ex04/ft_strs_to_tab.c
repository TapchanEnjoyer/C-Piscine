/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:30:08 by niel              #+#    #+#             */
/*   Updated: 2025/02/24 01:50:03 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s_s;
	int	i;

	if (ac <=0)
		return (NULL);
	s_s = malloc(ac * sizeof(struct s_stock_str));
	i = 0;
	while (i < ac)
	{
		s_s[i].size = ft_strlen(av[i]);
		s_s[i].str = malloc((s_s[i].size + 1) * sizeof(char));
		s_s[i].copy = malloc((s_s[i].size + 1) * sizeof(char));
		ft_strcpy(s_s[i].str, av[i]);
		ft_strcpy(s_s[i].copy, av[i]);
		i++;
	}
	s_s[i].str = NULL;
	return (s_s);
}

// int	main(void)
// {
// 	char	*av[] = {"Hello", "world"};
// 	int		ac = 2;

// 	ft_show_tab(ft_strs_to_tab(ac, av));
// 	return (0);
// }
