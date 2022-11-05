/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <ousama.haddadi@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:47:30 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/11/05 17:24:26 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, void *src, size_t n)
{
	int				i;
	unsigned char	*char_dst;
	unsigned char	*char_src;

	i = 0;
	char_dst = (unsigned char *)dst;
	char_src = (unsigned char *)src;
	if (char_dst == NULL && char_src == NULL)
		return (NULL);
	else if (char_dst > char_src)
	{
		while (n-- > 0)
		{
			*(char_dst + n) = *(char_src + n);
		}
	}
	else
	{
		while (n-- > 0)
		{
			*(char_dst + i) = *(char_src + i);
			i++;
		}
	}
	return (dst);
}
