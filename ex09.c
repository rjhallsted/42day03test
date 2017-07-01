/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 01:35:01 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 01:50:09 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex09/ft_sort_integer_table.c"

int main()
{
	int test1[] = {1,5,4,2,3};
	int size = 5;
	ft_sort_integer_table(test1, size);

	for (int i = 0; i < size; i++)
		printf("%d,", test1[i]);
}
