#include "../includes/libft.h"

void    ft_lst_clear(t_list **lst)
{
    t_list *next;

    while(*lst)
    {
        next = (*lst)->next;
        ft_lstdelone(lst, ft_lst_del);
        *lst = next;
    }
}