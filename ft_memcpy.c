/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:28 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/09 10:35:12 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*int main()
{
    char src[] = "Hello, this is campus 42!";
    char dest[50];

    ft_memcpy(dest, src, 20);
    printf("Source: %s\n", src);
    printf("Destination after memcpy: %s\n", dest);

    return (0); 
}*/