/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 01:12:46 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 23:16:05 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "../ex08/ft_atoi.c"

int		main(void)
{
	ft_putnbr(ft_atoi("123"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("456789"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-1234"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("2147483647"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-2147483648"));
	ft_putchar('\n');
	printf("%d,%d,%d\n", ft_atoi("15"), ft_atoi("0"), ft_atoi("-25"));

	printf("%d,%d,%d\n", ft_atoi("123f"), ft_atoi("12345?"), ft_atoi("3\n"));
	return (0);	
}
