#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new2;

	new = NULL;
	if (lst)
	{	
		while (lst)
		{
			new2 = ft_lstnew(f(lst->content));
			if (!new2)
			{
				ft_lstclear(&new, del);
				return (NULL);
			}	
			ft_lstadd_back(&new, new2);
			lst = lst->next;
		}
		return (new);
	}	
	else
		return (NULL);
}
