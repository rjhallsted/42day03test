/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:37:32 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 22:39:35 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex04/ft_ultimate_div_mod.c"

int		main(void)
{
	int a = 40, b = 15;
	ft_ultimate_div_mod(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}
