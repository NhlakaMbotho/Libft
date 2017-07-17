#include "../includes/libft.h"
#include "../includes/files/get_next_line.h"

void    ft_lst_to2darray(t_list **alst, t_string **strlist)
{
    t_string arr[ft_lst_count(*alst)];
    t_list *temp;
    int i;

    i = 0;
    while(*alst)
    {
        temp = (*alst)->next;
        arr[i] = (*alst)->content;
        ft_lstdelone(alst, ft_lst_del);
        *alst = temp;      
        i++;
    }
    *strlist = *arr;
}

t_string *ft_strsplit(t_string s, char c)
{
    int i;
    t_string *strlist;
    t_list *char_list;
    t_list *str_list;

    char_list = NULL;
    str_list = NULL;
    i = 0;
    strlist = NULL;
    while(s[i])
    {
        if(s[i] != c)
            ft_lstadd_last(&char_list, (void *)ft_lstnew(&(s[i]), 1));
        else
        {
            if(ft_lst_count(char_list) > 0)
                ft_lstadd_last(&str_list, ft_lstnew(ft_lst_tostring(&char_list), 1));
        }
        i++;
    }
    ft_lst_to2darray(&str_list, strlist);
    return (strlist);
    }

