/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eayasli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:26:35 by eayasli           #+#    #+#             */
/*   Updated: 2021/11/27 23:27:34 by eayasli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num, int maxi)
{
	char	ch_u;
	char	ch_d;

	if (num <= 9)
	{
		ch_u = num + 48;
		ft_putchar2('0', ch_u);
	}
	else if (num <= maxi)
	{
		ch_u = (num % 10) + 48;
		ch_d = (num / 10) + 48;
		ft_putchar2(ch_d, ch_u);
	}
}

void	ft_catint(int first, int second)
{
	ft_putint(first, 98);
	write(1, " ", 1);
	ft_putint(second, 99);
	if (first != 98 || second != 99)
		ft_putchar2(',', ' ');
}

void	ft_print_comb2(void)
{
	int	fi;
	int	se;

	fi = 0;
	while (fi <= 98)
	{
		se = fi + 1;
		while (se <= 99)
		{
			ft_catint(fi, se);
			se++;
		}
		fi++;
	}
}
