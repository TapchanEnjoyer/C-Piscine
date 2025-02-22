/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niel <niel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 02:24:29 by niel              #+#    #+#             */
/*   Updated: 2025/02/22 01:05:09 by niel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	main(int ac, char *av[])
{
	char	*key;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		key = av[i];
		j = i - 1;
		while (j >= 1 && ft_strcmp(key, av[j]) < 0)
		{
			av[j + 1] = av[j];
			j--;
		}
		av[j + 1] = key;
		i++;
	}
	i = 1;
	while (i < ac)
	{
		write(1, av[i], ft_strlen(av[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
