/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <ousama.haddadi@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:22:36 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/11/01 11:06:02 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dst_size)
{
	unsigned int	srclen;
	unsigned int	dstlen;
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	if (dest == NULL)
		return (0);
	if (dst_size == 0)
		return (srclen);
	if (dst_size < dstlen)
		return (srclen + dst_size);
	if (dst_size > 0)
	{
		while (src[j] != '\0' && i < (dst_size - 1))
		{
			dest[i++] = src[j++];
		}
	}
	dest[i] = '\0';
	return (srclen + dstlen);
}

int	main(void)
{
	char dest[10]="";
	char src[10]="ggg";
	printf ("%zu\n", ft_strlcat(NULL, src, 0));
	printf("%s\n",dest);
	char dest2[10]="";
	char src2[10]="ggg";
	printf ("%zu\n", strlcat(NULL, src2, 0));
	printf("%s",dest2);
}
