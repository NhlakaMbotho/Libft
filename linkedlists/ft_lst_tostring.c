
#include "../includes/libft.h"

char	*ft_lst_tostring(t_list **alst)
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