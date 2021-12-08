/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 16:33:24 by jbyeon            #+#    #+#             */
/*   Updated: 2021/12/08 16:23:11 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != 0)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end]) != 0)
		end--;
	end++;
	p = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!(p))
		return (NULL);
	ft_strlcpy(p, s1 + start, end - start + 1);
	return (p);
}
