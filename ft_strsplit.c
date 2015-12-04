/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 15:37:32 by mmatei            #+#    #+#             */
/*   Updated: 2015/12/04 15:33:17 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int				nr_of_words(char const *s, char c)
{
	int i;
	int nr;
	
	i = 0;
	nr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			nr++;
		i++;
	}
	return (nr);
}

static char		*f_mkstring(char c)
{
	char *p;

	p = (char*)malloc(sizeof(char) * 2);
	p[0] = c;
	p[1] = '\0';
	return (p);
}

static char		**ft_split2(char const *s, char c, int i, int j)
{
	char	**p;
	int		start;
	int		end;
	char	*h;

	p = (char**)malloc(sizeof(char*) * (nr_of_words(s, c) + 1));
	start = 0;
	h = ft_strjoin(s, f_mkstring(c));
	end = 0;
	while (h[i] != '\0')
	{
		if (h[i] == c || h[i] == '\0')
		{
			end = i - 1;
			if (end >= start)
			{
				p[j] = ft_strsub(h, start, end - start + 1);
				j++;
			}
			start = i + 1;
		}
		i++;
	}
	p[j] = 0;
	return (p);
}

char			**ft_strsplit(char const *s, char c)
{
	return (ft_split2(s, c, 0, 0));
}
