/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 15:49:29 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:11:43 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalnum(int ch)
{
	if (ch >= 48 && ch <= 57)
		return (TRUE);
	else if (ch >= 65 && ch <= 90)
		return (TRUE);
	else if (ch >= 97 && ch <= 122)
		return (TRUE);
	else
		return (FALSE);
}
