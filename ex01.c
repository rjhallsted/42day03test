/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:17:55 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 22:26:13 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex01/ft_ultimate_ft.c"

int main(void)
{
	int a = 15;
	int* b = &a;
	int** c = &b;
	int*** d = &c;
	int**** e = &d;
	int***** f = &e;
	int****** g = &f;
	int******* h = &g;
	int******** i = &h;
	int********* j = &i;

	ft_ultimate_ft(j);

	printf("%d", a);

	return 0;
}
