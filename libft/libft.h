/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <ousama.haddadi@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:04:52 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/11/05 15:33:03 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
#define _LIBFT_H_

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int				ft_isalpha(int x);
int				ft_isdigit(int x);
int				ft_isalnum(int x);
int				ft_isascii(int x);
int				ft_isprint(int x);
int				ft_toupper(int x);
int				ft_tolower(int x);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
void			*ft_memset(char *str, int c, size_t len);
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dst, void *src, size_t n);
void			*ft_memmove(void *dst, void *src, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);

#endif
