/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:15:22 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/12 19:00:18 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n -1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*int	main(void)
{
	const char	*str1 = "Hello";
    const char	*str2 = "Helium";
    size_t 		n = 3;

    int result = ft_strncmp(str1, str2, n);
    printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", str1, str2, n, result);

    return 0;
}*/