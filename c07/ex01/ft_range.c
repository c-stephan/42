/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:56:12 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/20 18:39:02 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return ((void *)0);
	if (!(tab = malloc(sizeof(*tab) * (max - min))))
		return ((void *)0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

void	ft_puttab(int *tab)
{
	int i;
	i = 0;
	while (i < 15)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int			main()
{
	ft_puttab(ft_range(15, 30));
}
