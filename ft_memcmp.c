/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:14:23 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/13 15:18:13 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((*str1 == *str2) && n - 1 > 0)
	{
		str1++;
		str2++;
		n--;
	}
	return ((int)(*str1 - *str2));
}

/*int	main(void)
{
    // Test case 1: Comparing the first 5 characters of two identical strings
    const char str1[] = "abCdef";
    const char str2[] = "abcdef";
    size_t n = 5;
    int result = ft_memcmp(str1, str2, n);
    printf("ft_memcmp(\"%s\", \"%s\", %zu) = %d\n", str1, str2, n, result);
    
    // Test case 2: Comparing the first 6 characters of two similar strings
    const char str3[] = "abcdef";
    const char str4[] = "abcdef";
    n = 6;
    result = ft_memcmp(str3, str4, n);
    printf("ft_memcmp(\"%s\", \"%s\", %zu) = %d\n", str3, str4, n, result);

    // Test case 3: Comparing the first 3 characters of two different strings
    const char str5[] = "hello";
    const char str6[] = "world";
    n = 3;
    result = ft_memcmp(str5, str6, n);
    printf("ft_memcmp(\"%s\", \"%s\", %zu) = %d\n", str5, str6, n, result);

    // Test case 4: Comparing empty strings (n = 0)
    const char str7[] = "";
    const char str8[] = "";
    n = 0;
    result = ft_memcmp(str7, str8, n);
    printf("ft_memcmp(\"%s\", \"%s\", %zu) = %d\n", str7, str8, n, result);
    
    return 0;
}*/
