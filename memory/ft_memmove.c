/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 17:26:33 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:22:52 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	void	ft_move_from_back(char *dst, char *src, int i)
{
	while (i >= 0)
	{
		dst[i] = src[i];
		i--;
	}
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	int			n;
	int			i;
	t_string	dest;
	t_string	source;

	dest = (t_string)dst;
	source = (t_string)src;
	n = len - 1;
	i = 0;
	if (dest > source)
		ft_move_from_back(dest, source, n);
	else if (dest < source)
	{
		while (i <= n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
