/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 10:51:16 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/05 12:14:53 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char		*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] += 32;
		c++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	ft_strlowcase(str);
	while (str[c] != '\0')
	{
		if (((str[c - 1] >= 0 && str[c - 1] <= 47) ||
(str[c - 1] >= 58 && str[c - 1] <= 64) ||
(str[c - 1] >= 91 && str[c - 1] <= 96) ||
(str[c - 1] >= 123)) && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
		}
		c++;
	}
	return (str);
}
