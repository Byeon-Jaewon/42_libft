/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 19:11:28 by jbyeon            #+#    #+#             */
/*   Updated: 2020/12/22 20:22:26 by jbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = 0;
	while (dest[dst_len] != '\0')
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while (i < size && dest[i])
		i++;
	j = 0;
	while (j < src_len && dst_len + j + 1 < size)
	{
		dest[dst_len + j] = src[j];
		j++;
	}
	dest[dst_len + i] = '\0';
	return (j + src_len);
}
