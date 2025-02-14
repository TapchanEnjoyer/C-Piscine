/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:19:40 by niel              #+#    #+#             */
/*   Updated: 2025/02/14 18:57:42 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		res = 1;
		while (power-- != 0)
		{
			res *= nb;
		}
		return (res);
	}
}

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

int	ft_atoi(char *str)
{

}

int	main(void)
{
	
}
