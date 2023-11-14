/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:25:37 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 17:54:56 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *) b)[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// int main()
// {
// 	int str[3] = {1 , 2, 4};
// 	char *s
// 	ft_memset(str, 0, 8);
// 	printf("%d   %d   %d", str[0], str[1], str[2]);
// }

// #include <stdio.h>
// int main(){
// 	int arr[2] = {0, 0};
// 	ft_memset(arr, 2, 5);
// 	//0000010 0000010 0000010 0000010 | 0000000 0000000 0000000 0000000
// 	char* arr_c = (char*)arr;
// 	ft_memset(arr_c + 7, 2, 4);
// 	//0000010 0000010 0000010 0000010 | 0000000 0000000 0000000 0000010
// 	for (int i =0; i < 2; i++)
// 		printf("%d\n", arr[i]);
// }