/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:15:09 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 10:34:54 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[count] != '\0' && count < (size -1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	src[] = "Hello World";
	char	dest[20];
	size_t	copied;

	copied = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copied String: %s\n", dest);
	printf("Lenght of the string: %zu\n", copied);
	return (0);
}*/
