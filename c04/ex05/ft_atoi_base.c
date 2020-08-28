/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 11:09:47 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/20 13:39:22 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_checkbase(char *base)
{
	int		count;
	int		count2;

	count = 0;
	while (base[count])
	{
		count2 = count;
		while (base[count2])
		{
			if ((base[count] == base[count2] && count != count2)
					|| base[count2] == '+' || base[count2] == '-'
					|| (base[count2] >= 9 && base[count2] <= 13))
				return (0);
			count2++;
		}
		count++;
	}
	return (count);
}

int			ft_checknumberpos(char c, char *base)
{
	int		count;

	count = 0;
	while (base[count])
	{
		if (base[count] == c)
			return (count);
		count++;
	}
	return (-1);
}

int			ft_atoi_base(char *str, char *base)
{
	int		a;
	int		i;
	int		neg;

	i = 0;
	a = 0;
	neg = 1;
	if (ft_checkbase(base) < 2)
		return (a);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	neg = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_checknumberpos(str[i], base) >= 0)
		a = a * ft_checkbase(base) + ft_checknumberpos(str[i++], base);
	return (a * neg);
}

int		main()
{
	printf("%d", ft_atoi_base("van", "poneyvif"));
}
