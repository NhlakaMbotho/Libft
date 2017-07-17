#include "../includes/libft.h"

void    ft_lst_del(void *content, size_t content_size)
{
    ft_memdel(&content);
    if(content_size != 0)
        content_size = 0;
}