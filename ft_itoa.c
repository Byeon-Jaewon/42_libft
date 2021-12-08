/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:05:53 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/08 16:00:53 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	intlen(int n)
{
	int		len;

	if (n < 0)
		len = 1;
	else
		len = 0;
	if (n == 0)
		len = 1;
	else
	{
		while (n != 0)
		{
			n = n / 10;
			len++;
		}
	}
	return (len);
}

char	*is_zero(char *p)
{
	p[0] = '0';
	return (p);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*p;
	unsigned int	tmp;

	len = intlen(n);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!(p))
		return (NULL);
	p[len--] = '\0';
	tmp = n;
	if (n == 0)
		return (is_zero(p));
	if (n < 0)
	{
		tmp = n * (-1);
		p[0] = '-';
	}
	while (tmp > 0)
	{
		p[len--] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	return (p);
}
