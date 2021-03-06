/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 23:40:27 by baslanha          #+#    #+#             */
/*   Updated: 2021/12/05 23:40:29 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a') || (str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}
