/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 13:06:38 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:37:40 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	char	*ft_nmatch(int i, int n, char *big, char *little)
{
	size_t		k;
	int		j;
	t_string	haystack;
	t_string	needle;

	haystack = (char *)big;
	needle = (char *)little;
	k = 0;
	j = i;
	while (haystack[j] == needle[k] && j <= n && haystack[j])
	{
		j++;
		k++;
	}
	if (k == ft_strlen(needle))
		return (&haystack[i]);
	else
		return (NULL);
}

char			*ft_strnstr(const char *big, const char *little, size_t size)
{
	int		i;
	int		k;
	int		n;
	char		*haystack;

	haystack = (char *)big;
	n = (int)size - 1;
	i = 0;
	k = 0;
	if ((int)ft_strlen((char *)little) > 0)
	{
		while (i <= n)
		{
			if (big[i] == little[k])
				if (ft_nmatch(i, n, (char*)big, (char*)little))
					return (ft_nmatch(i, n, (char*)big, (char*)little));
			i++;
		}
	}
	else
		return (&haystack[i]);
	return (NULL);
}
