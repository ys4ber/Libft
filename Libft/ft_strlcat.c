/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:31:48 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 18:17:15 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	len = 0;
	i = 0;
	while (dest[len] && len < size)
		len++;
	while (src[i] && size && len + i < size - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	if (len < size)
		dest[len + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (len + i);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	//printf("%zu\n", ft_strlcat(NULL, "das", 3));
// 	printf("%zu\n", strlcat(NULL, "das", 3));
// }