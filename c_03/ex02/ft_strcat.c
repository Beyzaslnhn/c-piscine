/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:01:01 by baslanha          #+#    #+#             */
/*   Updated: 2021/12/09 12:01:03 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	a;

	n = 0;
	a = 0;
	while (dest[n])
		n++;
	while (src[a])
		dest[n++] = src[a++];
	dest[n] = '\0';
	return (dest);
}
