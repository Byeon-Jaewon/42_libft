/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 15:53:55 by jbyeon            #+#    #+#             */
/*   Updated: 2021/02/08 22:19:58 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*tmp1;
	char	*tmp2;
	size_t	size;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	size = ft_strlen(tmp1) + ft_strlen(tmp2);
	if (!(str = (char *)malloc(size + 1)))
		return (NULL);
	str[0] = '\0';
	ft_strlcat(str, tmp1, ft_strlen(tmp1) + 1);
	ft_strlcat(str, tmp2, ft_strlen(str) + ft_strlen(tmp2) + 1);
	return (str);
}
