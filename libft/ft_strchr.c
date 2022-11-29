/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <ousama.haddadi@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:38:26 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/11/29 11:38:28 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str[i] == (unsigned char)c)
		return ((char *)str);
	while (str[i++])
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
	return (0);
}
