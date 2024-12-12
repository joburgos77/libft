/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:40 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 09:29:38 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * La función rellena una cantidad determinada de bytes a un valor específico.
 * Devuelve un puntero al área de memoria.
 */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	value;

	i = 0;
	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (i < n)
	{
		ptr[i++] = value;
	}
	return (s);
}

/*int main()
{
    char str[10] = "Hola mundo";
    printf("Before de ft_memset: %s\n", str);
    ft_memset(str, 'X', 5);
    printf("After the ft_memset: %s\n", str);
    return (0);
}*/