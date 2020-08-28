/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 19:23:54 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/18 22:16:34 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		s;

	s = *str;
	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}

int		main(void)
{
	printf("%d", ft_strlen("salut cest un test"));
}
