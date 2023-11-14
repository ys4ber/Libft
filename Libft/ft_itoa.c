/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:44:09 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/12 17:44:11 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	return_len(long n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*tab;
	long	new;

	new = n;
	len = return_len(new);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (tab != NULL)
	{
		tab[len--] = '\0';
		if (new == 0)
			tab[0] = 48;
		if (new < 0)
		{
			tab[0] = '-';
			new *= -1;
		}
		while (new)
		{
			tab[len--] = new % 10 + 48;
			new /= 10;
		}
	}
	return (tab);
}
