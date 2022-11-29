/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <ousama.haddadi@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:37:59 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/11/29 11:38:01 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*p;

	p = str;
	i = 0;
	while (n--)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
