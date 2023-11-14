/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:26:32 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 09:35:29 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd != -1)
		write(fd, &c, 1);
}
// #include <fcntl.h>
// int main()
// {
// 	int fd = open("/dev/ttys002", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
// 		ft_putchar_fd('A', fd);
// }