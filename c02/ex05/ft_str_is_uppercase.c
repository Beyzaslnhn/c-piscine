/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:15:18 by baslanha          #+#    #+#             */
/*   Updated: 2021/12/06 10:15:20 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fT_str_is_uppercase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A' || (str[c] > 'Z'))
				return (0);
				c++;

	}
	return (1);
}

