/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 14:04:44 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/16 19:16:14 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(unsigned char nb)
{
	char *hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[nb / 16]);
	ft_putchar(hexa[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 32 && str[c] <= 126))
		{
			ft_putchar('\\');
			ft_hexa(str[c]);
		}
		else
			ft_putchar(str[c]);
		c++;
	}
}
