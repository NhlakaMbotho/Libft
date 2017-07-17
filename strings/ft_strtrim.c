/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 14:37:15 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:39:23 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(const t_string s)
{
	size_t	end;
	char	*new;
	size_t	k;
	size_t	start;

	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	k = 0;
	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (start == (end + 1))
		return ("");
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	new = (t_string)malloc(sizeof(char) * (end - start) + 2);
	if (!new)
		return (NULL);
	while (start <= end)
		new[k++] = s[start++];
	new[k] = '\0';
	return (new);
}
