/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csummers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 13:56:04 by csummers          #+#    #+#             */
/*   Updated: 2016/11/02 13:56:06 by csummers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1_ptr;

	s1_ptr = s1 + ft_strlen(s1);
	while (n-- && *s2)
		*s1_ptr++ = *s2++;
	*s1_ptr = '\0';
	return (s1);
}