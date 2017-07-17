/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 17:47:22 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:37:03 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	char	*ft_match(size_t i, size_t len, char *substr, char *str)
{
	size_t	k;
	size_t	j;

	k = 0;
	j = i;
	while (str[j] == substr[k] && str[j])
	{
		j++;
		k++;
	}
	if (k == len)
		return (&str[i]);
	else
		return (NULL);
}

char			*ft_strstr(const t_string str, const t_string substr)
{
	size_t	i;
	size_t	k;
	size_t	substr_len;

	substr_len = ft_strlen(substr);
	i = 0;
	k = 0;
	if (substr_len > 0)
	{
		while (str[i])
		{
			if (str[i] == substr[k])
				if (ft_match(i, substr_len, substr, str))
					return (ft_match(i, substr_len, substr, str));
			i++;
		}
	}
	else
		return (&str[i]);
	return (NULL);
}
