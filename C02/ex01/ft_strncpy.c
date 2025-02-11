/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 01:01:57 by niel              #+#    #+#             */
/*   Updated: 2025/02/11 14:18:10 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*These  functions copy non-null bytes from the string pointed to by src into
the array pointed to by dst. If the source has too few non-null bytes to fill
the destination, the functions pad the destination with trailing null bytes.
If the destination buffer, limited by its size, isn't large enough to hold the
copy, the resulting char‐acter sequence is truncated.  For the difference
between the two functions*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pos;
	char			*original_dest;

	pos = 0;
	original_dest = dest;
	while (*src != '\0' && pos < n)
	{
		*dest = *src;
		dest++;
		src++;
		pos++;
	}
	while (pos != n)
	{
		*dest = '\0';
		dest++;
		pos++;
	}
	return (original_dest);
}

/*
char	*strncpy(char *restrict dst, const char *restrict src, size_t dsize)
{
	stpncpy(dst, src, dsize);
	return dst;
}
*/

/*returns dst.*/

// int	main(void)
// {
// 	char	str[] = "322";
// 	char	dest[5];
// 	char	*ptr_str = str;
// 	char	*ptr_dest = dest;
// 	unsigned int	n = 5;

// 	ft_strncpy(ptr_dest, ptr_str, n);
// 	while (n-- != 0)
// 	{
// 		write(1, &dest[n], 1);
// 	}
// 	return (1);
// }
