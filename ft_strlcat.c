/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:15:03 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 10:41:35 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	len = i;
	while (src[i - len] && i + 1 < size)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < size)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}

/*int	main(void)
{
	char	dst[30] = "Hello, ";
	char	src[] = "World!";

	size_t result = ft_strlcat(dst, src, sizeof(dst));
	printf("Concatenated String: %s\n", dst);
	printf("Total Lenght: %zu\n", result);
	return (0);
}*/
