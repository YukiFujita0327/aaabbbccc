/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 09:12:35 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/12 19:27:25 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_put_ex06(int a, int b, int c, int d)
{
	char	w;
	char	x;
	char	y;
	char	z;

	w = a + 48;
	x = b + 48;
	y = c + 48;
	z = d + 48;
	write(1, &w, 1);
	write(1, &x, 1);
	write(1, &" ", 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if ((w == '9' && x == '8') && (y == '9' && z == '9'))
	{
		return (0);
	}
	else
	{
		write(1, &", ", 2);
		return (0);
	}
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_put_ex06(x / 10, x % 10, y / 10, y % 10);
			y++;
		}
		x++;
	}
}
