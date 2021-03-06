#ifndef LIB_H
# define LIB_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct  student
{
	char        first_name[40];
	char        last_name[40];
	char        mail[50];
	char        grade[7];
	char        county[20];
}               student_info;

char	*ft_strtrim(char const *s);
char	*string_tolower(char *s);
int		nr_of_words(char const *s, char c);
void	ft_strcpy(char *dst, char *src);
char	*ft_strnew(size_t size);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strcat(char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_strsplit(char const *s, char c);
int		buff_validation(char *s, char c);
void	print_stud_info(student_info *v, int nr);

#endif
