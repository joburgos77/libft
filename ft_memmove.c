/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:34 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/09 10:33:05 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	s = (const char *)src;
	d = (char *)dest;
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy (d, s, n);
	}
	return (d);
}

/*int main()
{
    char src[] = "Hello, this is campus 42!";
    char dest[50];
    char overlap_src[] = "1234567890";

    ft_memmove(dest, src, 20);
    printf("Destiny after ft_memmove: %s\n", dest);

    ft_memmove(overlap_src +2, overlap_src, 5);
    printf("Overlap memory: %s\n", overlap_src);

    return (0);
}*/
