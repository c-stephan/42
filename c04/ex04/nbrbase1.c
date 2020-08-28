 ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 09:37:17 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/20 13:47:09 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char		check_condition(char *base)
{
	int i;
	int c;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		c = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[c])
		{
			if (base[i] == base[c])
				return (0);
			c++;
		}
		i++;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int			size;
	int			result[33];
	int			c;
	long		nb;

	size = 0;
	c = 0;
	if (check_condition(base))
	{
		nb = nbr;
		if (nbr < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (nbr == 0)
			write (1, "0", 1);
		while (base[size])
			size++;
		while (nb)
		{
			result[c++] = nb % size;
			nb = nb / size;
		}
		while (c > 0)
			ft_putchar(base[result[--c]]);
	}
}
#include <stdlib.h>
int main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
}
