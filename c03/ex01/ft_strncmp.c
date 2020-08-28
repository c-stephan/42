/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:51:29 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/08 17:37:51 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (s2[c] == s1[c])
	{
		if (s1[c] == '\0' || c > n)
			return (0);
		c++;
	}
	if ((s1[c] - s2[c]) == 0)
		return (0);
	if ((s1[c] - s2[c]) < 0)
		return (-1);
	if ((s1[c] - s2[c]) > 0)
		return (1);
}
