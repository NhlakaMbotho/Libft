/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 14:12:14 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:39:08 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(const t_string s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	k;

	if (!s)
		return (NULL);
	substr = (t_string)malloc(sizeof(char) * (len + 1));
	i = start;
	k = 0;
	if (!substr)
		return (NULL);
	while (i <= (start + len) - 1)
	{
		substr[k] = s[i];
		i++;
		k++;
	}
	substr[k] = '\0';
	return (substr);
}
