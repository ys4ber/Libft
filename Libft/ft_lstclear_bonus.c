/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:17:42 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 21:02:58 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst)
	{
		while ((*lst) != NULL)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
		*lst = NULL;
	}
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void deleteContent(void *content)
// {
//     free(content);
// }
// int main()
// {
//     t_list *head = malloc(sizeof(t_list));
//     head->content = strdup("Node 1");
//     head->next = malloc(sizeof(t_list));
//     head->next->content = strdup("Node 2");
//     head->next->next = NULL;
//     // Call ft_lstclear to clear the linked list
//     ft_lstclear(&head, deleteContent);
//     // Check if the list has been cleared (head should be NULL)
//     if (head == NULL)
//     {
//         printf("Linked list has been cleared successfully!\n");
//     }
//     return (0);
// }