/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:27:33 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/13 17:56:08 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str;
	long	nb;

	if (fd != -1)
	{
		nb = (long)n;
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr_fd(nb / 10, fd);
			str = '0' + nb % 10;
		}
		else
			str = '0' + nb;
		write(fd, &str, 1);
	}
}
// #include <fcntl.h>
// int main()
// {
// 	int fd = open("/Path/to/file", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
// 	ft_putnbr_fd(-123, fd);
// }
