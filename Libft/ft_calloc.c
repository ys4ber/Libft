/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:17:54 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 19:04:04 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count != 0 && size != 0 && size > SIZE_MAX / count)
		return (NULL);
	p = malloc(count * size);
	if (p != NULL)
	{
		ft_bzero(p, count * size);
	}
	return (p);
}
