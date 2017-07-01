/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:40:20 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 22:56:29 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex05/ft_putstr.c"
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	ft_putstr("hello world!");
	ft_putchar('\n');
	ft_putstr("test1\n");
	ft_putstr("test2\n");
	ft_putstr("test3\n");
	ft_putstr("");
	ft_putstr("");
	ft_putstr("");
	return 0;
}
