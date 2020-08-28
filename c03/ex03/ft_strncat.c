/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 08:18:55 by cstephan          #+#    #+#             */
/*   Updated: 2020/07/08 14:09:12 by cstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	unsigned int		c;

	i = 0;
	c = 0;
	while (dest[c])
		c++;
	while (src[i] && i < nb)
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	return (destst);
}
