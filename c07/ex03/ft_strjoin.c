/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:14:11 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/22 16:05:05 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_len_dest(int size, char **strs, char *sep)
{
	int i;
	int len_dest;

	i = 0;
	len_dest = 0;
	while (i < size)
	{
		len_dest += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return (len_dest + 1);
}

char	*ft_cat_join(int size, char **strs, char *sep, char *dest)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			dest[k++] = strs[j][i++];
		}
		if (j < size - 1)
		{
			i = 0;
			while (sep[i])
			{
				dest[k++] = sep[i++];
			}
		}
		j++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *res;

	if (!(res = malloc(sizeof(*res) * (ft_len_dest(size, strs, sep)))))
		return (NULL);
	ft_cat_join(size, strs, sep, res);
	return (res);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *ft_strjoin(int size, char **strs, char *sep);
int		main(void)
{
	char *sep;
	int size;
	char **strs;
	char *ptr;
	sep = "1234";
	size = 4;
	strs = malloc(sizeof(char*) * size);
	*(strs + 0) = "Hello";
	*(strs + 1) = "";
	*(strs + 2) = "World";
	*(strs + 3) = "Again";
	ptr = ft_strjoin(size, strs, sep);
	printf("Hello12341234World1234Again ? %s\n\n", ptr);
}
