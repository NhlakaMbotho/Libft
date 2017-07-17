/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 17:16:11 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:33:01 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(t_string dst, t_string src, size_t size)
{
	int i;
	int dst_len;
	int append_len;

	i = 0;
	dst_len = (int)ft_strlen(dst);
	append_len = (int)size - dst_len - 1;
	if ((int)size < dst_len)
		return (ft_strlen(src) + size);
	while (i < (append_len))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + (int)ft_strlen(src));
}
