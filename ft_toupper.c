/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:42:22 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/10 11:15:53 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	else
		return (c);
}

/*int	main(void)
{
	int		i;
	char	c[] = "hello world!";

	i = 0;
	while (c[i])
	{
		c[i] = ft_toupper(c[i]);
		i++;
	}
	printf("%s", c);
	return (0);
}*/
