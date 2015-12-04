/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preEdit_buff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:48:02 by mmatei            #+#    #+#             */
/*   Updated: 2015/12/04 15:14:56 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*string_tolower(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
		i++;
	}
	return (s);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	sf;
	char	*ns;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\n'
				|| s[i] == '\t' || s[i] == ',') && s[i] != '\0')
		i++;
	sf = ft_strlen(s);
	if (sf != 0)
		sf--;
	else
		return ((char*)s);
	while ((s[sf] == ' ' || s[sf] == '\n'
				|| s[sf] == '\t' || s[sf] == ',') && sf >= i)
		sf--;
	ns = ft_strsub(s, i, sf - i + 1);
	if (ns == 0)
		return (0);
	return (ns);
}
