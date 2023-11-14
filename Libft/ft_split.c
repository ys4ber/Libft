/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:29:03 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 20:21:17 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cnt);
}

static void	test(char **ret, size_t i, size_t j)
{
	while (j < i)
	{
		free(ret[j]);
		j++;
	}
	free(ret);
}

static int	fill_string(const char *s, char c, char **ret, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			ret[i] = ft_substr(s - len, 0, len);
			j = 0;
			if (!ret[i])
			{
				test(ret, i, 0);
				return (0);
			}
			i++;
		}
		else
			s++;
	}
	ret[i] = 0;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;

	if (!s)
		return (NULL);
	ret = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ret)
		return (NULL);
	if (fill_string(s, c, ret, 0) == 0)
		return (NULL);
	return (ret);
}
// #include <stdio.h>
// int main() {
//     const char *input = "    hello.world.how.aure .yo...   jkh  jkgj.";
//     char delimiter = '.';
//     char **result = ft_split(input, delimiter);
//     if (result) {
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("Token %d: %s\n", i, result[i]);
//             free(result[i]);
//         }
//         free(result);
//     }
//     return 0;
// }
