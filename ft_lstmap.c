/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:11:51 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/30 16:39:19 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
void *multiply_by_two(void *content)
{
    int *number = (int *)content;
    int *result = malloc(sizeof(int));
    if (result)
        *result = (*number) * 2;
    return result;
}

void del(void *content)
{
    free(content);
}

// print element of the list
void print_number(void *content)
{
    int *number = (int *)content;
    printf("%d ", *number);
}

int main()
{
    t_list *lst = NULL;
    t_list *new_lst = NULL;

    // create new list
    for (int i = 1; i <= 5; i++)
    {
        int *num = malloc(sizeof(int));
        if (!num)
        {
            ft_lstclear(&lst, del);
            return 1;
        }
        *num = i;
        ft_lstadd_back(&lst, ft_lstnew(num));
    }

    // show the firts list
    printf("Liste initiale : ");
    ft_lstiter(lst, print_number);
    printf("\n");

    // create second liste + mult X2
    new_lst = ft_lstmap(lst, multiply_by_two, del);

    // show the second list
    printf("Nouvelle liste : ");
    ft_lstiter(new_lst, print_number);
    printf("\n");

    // free all
    ft_lstclear(&lst, del);
    ft_lstclear(&new_lst, del);

    return 0;
}
*/