/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:02:32 by prerfil           #+#    #+#             */
/*   Updated: 2024/12/12 13:43:48 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big [i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && (i + j) < len && big [i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const	char	big[] ="Hello, welcome to 42!";
	const	char	little1[] ="welcome";
	const	char	little2[] ="42";
	const	char	little3[] ="world";
	size_t	len = 20;

	char   	*result1 = ft_strnstr(big, little1, len);
	char	*result2 = ft_strnstr(big, little2, len);
	char	*result3 = ft_strnstr(big, little3, len);

	if (result1)
		printf("Found '%s' in '%s' within first %zu characters: %s\n", little1, big, len, result1);
	else
		printf("'%s' not in '%s' within first %zu characters.\n", little1, big, len);
	if (result2)
		printf("Found '%s' in '%s' within first %zu characters: %s\n", little2, big, len, result2);
	else
		printf("'%s' not in '%s' within first %zu characters.\n", little2, big, len);
	if (result3)
		printf("Found '%s' in '%s' within first %zu characters: %s\n", little3, big, len, result3);
	else
		printf("'%s' not in '%s' within the first %zu characters.\n", little3, big, len);
	return (0);
}*/
