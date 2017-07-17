
#include "../includes/libft.h"
#include <stdio.h>

void    ft_lst_print(t_list *lst)
{
    t_point *current;
	t_list *next;
    while(lst)
    {
        current = lst->content;
        printf("current point x = %d, y = %d\n", (int)current->x, (int)current->y);
		next = lst->next;
		ft_lstdelone(&lst, ft_lst_del);						//FREE
        lst = next;
    }
}