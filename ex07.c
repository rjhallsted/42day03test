/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 15:54:20 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 23:03:25 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putchar.c"
#include "../ex05/ft_putstr.c"
#include "../ex07/ft_strrev.c"

int		main(void)
{
	char str1[] = "test string";
	char str2[] = "Hell Yeah, Fucking Right";
	char str3[] = "I dialed the wrong number.";
	char empty[] = "";

	ft_putstr(ft_strrev(str1));
	ft_putchar('\n');
	ft_putstr(ft_strrev(str2));
	ft_putchar('\n');
	ft_putstr(ft_strrev(str3));
	ft_putchar('\n');
	ft_putstr(ft_strrev(empty));
	ft_putchar('|');
	ft_putchar('\n');
	char test1[] = "asdf";
	printf("%s\n", ft_strrev(test1));
	char test2[] = "qwert";
	printf("%s\n", ft_strrev(test2));
	char test3[] = "z";
	printf("%s\n", ft_strrev(test3));
	char test4[] = "bc";
	printf("%s\n", ft_strrev(test4));
	char test[] = "";
	printf("%s", ft_strrev(test));
	return (0);
}
