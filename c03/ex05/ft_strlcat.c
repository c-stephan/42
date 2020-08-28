/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 08:24:10 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/14 11:59:59 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	
	i = 0; 
	if (size != 0)
	{
		while (dest[i] && i < size)
			i++;
		j = 0;
		while (src[j] && j + i < size - 1)
		{
			dest[i + j] = src [j];
			j++;
		}
		if (j + i < size)
			dest[j + i] = '\0';
	}
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + i);
}
