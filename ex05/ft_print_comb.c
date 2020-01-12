/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 04:10:38 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/12 20:52:42 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar_test05(char fst, char scnd, char thd)
{
	write(1, &fst, 1);
	write(1, &scnd, 1);
	write(1, &thd, 1);
	if (fst != '7')
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
}

void	ft_print_comb(void)
{
	char	fst;
	char	scnd;
	char	thd;

	fst = '0';
	while (fst <= '7')
	{
		scnd = fst + 1;
		while (scnd <= '8')
		{
			thd = scnd + 1;
			while (thd <= '9')
			{
				putchar_test05(fst, scnd, thd);
				thd++;
			}
			scnd++;
		}
		fst++;
	}
}
