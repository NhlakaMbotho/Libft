/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 17:24:12 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/26 09:48:16 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "graphics/ft_graphics.h"
# define TRUE 1
# define FALSE 0
# define STR_INT_MIN "2147483648"
# define STR_INT_MAX "2147483647"

typedef char*		t_string;
typedef const char*	t_const;
typedef struct		s_node
{
	t_string		str;
	struct s_node	*next;
}					t_strnode;
typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
int					ft_test_alpha(t_string s);
size_t				ft_strlen(const t_string str);
char				*ft_strdup(const t_string s1);
char				*ft_strcpy(t_string dst, const t_string src);
char				*ft_strncpy(t_string dst, const t_string src, size_t len);
int					ft_strcmp(const t_string s1, const t_string s2);
int					ft_strncmp(const t_string s1, const t_string s2, size_t n);
char				*ft_strcat(t_string s1, const t_string s2);
char				*ft_strncat(t_string s1, const t_string s2, size_t n);
size_t				ft_strlcat(t_string dst, t_string src, size_t size);
char				*ft_strchr(const t_string s, int c);
char				*ft_strrchr(const t_string str, int ch);
char				*ft_strstr(const t_string str, const t_string substr);
int					ft_isascii(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isdigit(int c);
char				*ft_strnstr(const char *big, const char *litle, size_t len);
int					ft_isprint(int c);
int					ft_isalnum(int ch);
int					ft_isalpha(int c);
void				ft_strdel(t_string *s);
int					ft_atoi(const t_string str);
void				*ft_memset(void *dest, int ch, size_t count);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_strclr(t_string s);
void				ft_putstr(const t_string s);
void				ft_putchar(char c);
char				*ft_strjoin(const t_string s1, const t_string s2);
char				*ft_strsub(const t_string s, unsigned int start, size_t n);
int					ft_strequ(const t_string s1, const t_string s2);
int					ft_strnequ(const t_string s1, const t_string s2, size_t n);
void				ft_striter(t_string s, void (*f)(char *));
void				ft_striteri(t_string s, void (*f)(unsigned int, char *));
char				*ft_strmap(const t_string s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strtrim(const t_string s);
void				ft_addstring(t_strnode **list, t_string src);
void				ft_print_list(t_strnode **head);
char				*ft_strcrop(t_string s, size_t start, size_t end);
int					ft_list_count(t_strnode **list);
char				**ft_linkedlist_to_array(t_strnode **list);
t_string			*ft_strsplit(t_string s, char c);
int					ft_get_last_char(char *s, size_t index, char skip);
char				*ft_strnew(size_t size);
char				*ft_itoa(int n);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(const t_string s);
void				ft_putstr_fd(const t_string s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_check_size(char *s, size_t start, size_t end);
int					ft_int_max_min(char *s, char sign, size_t st, size_t e);
void				ft_lstadd_last(t_list **alst, t_list *link);
void				ft_lstadd_first(t_list **alst, t_list *link);
int					ft_lst_count(t_list *list);
t_list				*ft_lstnew(void *content, size_t content_size);
int					ft_lst_contains(t_list *list, void *content);
void				ft_lst_print(t_list *lst); // I HAVE A <STDIO.H>
void				ft_lstdelone(t_list **alst, void(*del)(void*, size_t));
void				ft_lst_del(void *content, size_t content_size);
#endif
