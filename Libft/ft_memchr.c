/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:21:47 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 16:22:24 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	const char *s = "abcdefghijkl";
// 	printf("%s\n",ft_memchr(s, 'e', 6));
// }