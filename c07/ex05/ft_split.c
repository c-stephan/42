/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:31:31 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/22 11:02:24 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_occur(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_get_size(char *str, char *charset)
{
	int		size;

	size = 0;
	while (*str)
	{
		if (ft_occur(*str, charset) == 0)
		{
			size++;
			while (*str && ft_occur(*str, charset) == 0)
				str++;
		}
		str++;
	}
	return (size);
}

void	ft_strcpy(char *dst, char *copy, char *until)
{
	while (copy < until)
		*(dst++) = *(copy++);
	*dst = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**copy;
	int		i;
	char	*from;

	i = 0;
	copy = ((char**)malloc(sizeof(char*) * (ft_get_size(str, charset) + 1)));
	if (!str && !charset)
	{
		copy[0] = 0;
		return (copy);
	}
	while (*str)
	{
		if (ft_occur(*str, charset) == 0)
		{
			from = str;
			while (*str && ft_occur(*str, charset) == 0)
				str++;
			copy[i] = (char*)malloc(str - from + 1);
			ft_strcpy(copy[i++], from, str);
		}
		str++;
	}
	copy[i] = 0;
	return (copy);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main(void)
{
	printf("-10000000000000000000000000000000 ?\n");
	printf("%d\n\n", ft_convert_base("   ---80000000", "0123456789ABCDEF", "01"));
	printf("-42 ? %d\n\n", ft_convert_base("  --+-vn", "poneyvif", "0123456789"));
	printf("a ? %d\n\n", ft_convert_base("z", "0123456789ABCDEF", "ab"));
	printf("b ? %d\n\n", ft_convert_base("", "0123456789ABCDEF", "ba"));
	printf("cool ?\n%d\n\n", ft_convert_base("pool", "vilponey", "geckodual"));
	printf("null ?\n%d\n\n", ft_convert_base("pool", "vilponey", "gecko\ndual"));
	printf("null ?\n%d\n\n", ft_convert_base("pool", "vilponey", "geckoduaal"));
}
