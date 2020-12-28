/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 15:20:06 by jbyeon            #+#    #+#             */
/*   Updated: 2020/12/27 16:08:50 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (s == NULL)
		return (NULL);
	if (!(p = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	return (p);
}
