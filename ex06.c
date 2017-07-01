/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:52:01 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 23:01:13 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex06/ft_strlen.c"

int		main(void)
{
	printf("%d,%d,%d\n", ft_strlen("asdf"), ft_strlen("qwerty"), ft_strlen("zxc0zxc"));
	printf("%d", ft_strlen(""));
	return 0;
}
