/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 10:23:15 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 18:25:18 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/files/get_next_line.h"

int		ft_get_next_line(int fd, t_string *line)
{
	static	char	buffer[BUFF_SIZE];
	int				result;
	t_list			*char_list;

	result = 0;
	char_list = NULL;
	if (BUFF_SIZE < 1)
		return (-1);
	if ((fd < 0) || (fd == 99) || (fd == 1))
		return (-1);
	if (!line)
		return (1);
	if (buffer[0])
		result = ft_readbuffer(fd, line, &char_list, buffer);
	else
		result = ft_readfile(fd, line, &char_list, buffer);
	return (result);
}

int		ft_readfile(int fd, char **line, t_list **char_list, char *buffer)
{
	int ret;

	ret = 0;
	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		if (ret < 1)
			return (ret);
		while (buffer[0])
		{
			if (buffer[0] == '\n')
			{
				ft_memmove(buffer, &((buffer)[1]), ft_strlen(buffer));
				*line = ft_list_to_string(char_list);
				return (1);
			}
			ft_lstadd_last(char_list, ft_lstnew(ft_new(buffer[0]), 1));
			ft_memmove(buffer, &((buffer)[1]), ft_strlen(buffer));
		}
	}
	if (ret == 0 && buffer[0] == '\0' && ft_lst_count(*char_list) > 0)
	{
		*line = ft_list_to_string(char_list);
		return (1);
	}
	return (0);
}

int		ft_readbuffer(int fd, char **line, t_list **char_list, char *buffer)
{
	while (buffer[0])
	{
		if (buffer[0] == '\n')
		{
			ft_memmove(buffer, &((buffer)[1]), ft_strlen(buffer));
			*line = ft_list_to_string(char_list);
			return (1);
		}
		ft_lstadd_last(char_list, ft_lstnew(ft_new((buffer)[0]), 1));
		ft_memmove(buffer, &((buffer)[1]), ft_strlen(buffer));
	}
	return (ft_readfile(fd, line, char_list, buffer));
}

char	*ft_list_to_string(t_list **alst)
{
	int		i;
	char	*new_str;
	size_t	size;
	t_list	*temp;

	i = 0;
	new_str = NULL;
	size = ft_lst_count(*alst);
	new_str = ft_strnew(size);
	while (*alst)
	{
		new_str[i] = *((int*)(*alst)->content);
		temp = (*alst)->next;
		free((*alst)->content);
		free(*alst);
		*alst = temp;
		i++;
	}
	free(*alst);
	alst = NULL;
	new_str[i] = '\0';
	return (new_str);
}

void	*ft_new(char content)
{
	char	*cont;

	cont = malloc(sizeof(char));
	*cont = content;
	return (void *)cont;
}
