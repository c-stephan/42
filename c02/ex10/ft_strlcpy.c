/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:17:18 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/16 19:15:33 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	count;

	count = 0;
	c = 0;
	while (src[count] != '\0')
		count++;
	if (size > 0)
	{
		while (src[c] != '\0' && c < size)
		{
			dest[c] = src[c];
			c++;
		}
		if (c == size)
			dest[c - 1] = '\0';
		else
			dest[c] = '\0';
	}
	return (count);
}
