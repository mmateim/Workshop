/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 12:22:03 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/24 21:04:55 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	char	*s;
	int		i;

	n = (int)(ft_strlen(s1) + ft_strlen(s2));
	n++;
	s = (char*)malloc(sizeof(char) * n);
	if (s == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	s = ft_strcat(s, (char*)s2);
	return (s);
}
