/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <ousama.haddadi@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:58:07 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/10/16 21:44:03 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char dst[40] = "";
char src[10] = "";

int	main()
{
	printf("%s\n",dst);
	memcpy(dst,src,3);
	printf("%s\n",dst);

	printf("****************\n");

	char dst[40] = "";
	printf("%s\n",dst);
	ft_memcpy(dst,src,3);
	printf("%s\n",dst);
}

