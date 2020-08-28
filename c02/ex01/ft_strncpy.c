/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:02:20 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/13 10:35:27 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;
	unsigned int count;

	c = 0;
	count = 0;
	while (src[count])
		count++;
	if (size > 0)
	{
		while (src[c] && c < (size - 1))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (count);
}
