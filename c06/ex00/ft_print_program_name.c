/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 18:25:21 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/13 19:49:45 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int			main(int argc, char **argv)
{
	(void)argc;
	if (argv[0])
	{
		putstr(argv[0]);
		putstr("\n");
	}
	return (0);
}
