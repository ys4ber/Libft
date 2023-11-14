/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:28:58 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 18:15:43 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
// #include <stdio.h>
// int main()
// {
//     t_list *list = ft_lstnew("hehe");
//     ft_lstadd_back(&list, ft_lstnew("hello"));
//     ft_lstadd_back(&list, ft_lstnew("jaja"));
//     ft_lstadd_back(&list, ft_lstnew("jajaa"));
//     t_list *current = list;
//     while (current != NULL)
//     {
//         printf("%s ", current->content);
//         current = current->next;
//     }
//     current = list;
//     while (current != NULL)
//     {
//         t_list *next = current->next;
//         free(current);
//         current = next;
//     }
// }