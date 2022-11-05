/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <ousama.haddadi@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:24:31 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/11/05 17:24:49 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int slen;

	slen = (ft_strlen(s));
	if (*(s) == (char) c)
		return ((char *)s);
	while (slen > 0)
	{
		if (*(s + slen) == (char )c)
			return ((char *)(s + slen));
		slen--;
	}
	if (c == '\0')
		return ((char *)(s +slen));
	return (NULL);
}
