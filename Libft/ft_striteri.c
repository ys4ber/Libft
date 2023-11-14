/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:30:45 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/12 16:13:17 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// void print_index_and_char(unsigned int i, char *c) 
// {
// 	i = 1;
// 	*c = *c + i;
// }
// int main()
// {
//     char str[] = "Abcde Efgh";
//     printf("Original string: %s\n", str);
//     ft_striteri(str, &print_index_and_char);
// 	printf("%s\n", str);
//     return 0;
// }
