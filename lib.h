#ifndef LIB_H
# define LIB_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strcat(char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_strsplit(char const *s, char c);


#endif
