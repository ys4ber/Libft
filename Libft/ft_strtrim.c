/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:27:16 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 11:08:44 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkchar(char a, char const *b)
{
	int	i;

	i = ft_strlen(b);
	while (i >= 0)
	{
		if (b[i] == a)
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && checkchar(s1[i], set))
		i++;
	while (j > 0 && checkchar(s1[j - 1], set))
		j--;
	if (i >= j)
	{
		return (ft_strdup(""));
	}
	str = ft_substr(s1, i, j - i);
	return (str);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s\n",ft_strtrim("123hello123Hello123", "123"));
// }