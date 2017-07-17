/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 10:07:52 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 18:35:39 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 20
# include "../libft.h"

typedef	struct	s_file
{
	int			fd;
	char		*buffer;
	int			status;
}				t_file;

int				ft_get_next_line(const int fd, t_string *line);
int				ft_readbuffer(int fd, char **line, t_list **list, char *buf);
int				ft_readfile(int fd, char **line, t_list **list, char *buf);
char			*ft_list_to_string(t_list **lst);
void			*ft_new(char content);
#endif
