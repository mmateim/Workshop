/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organized_code.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:23:20 by mmatei            #+#    #+#             */
/*   Updated: 2015/12/04 15:33:41 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*un Makefile + validari */
#include "lib.h"

student_info	place_words(char *s)
{
	char			**words_matrix;
	student_info	current_stud;

	words_matrix = ft_strsplit(s, ';');
	ft_strcpy(current_stud.first_name, ft_strtrim(words_matrix[0]));
	ft_strcpy(current_stud.last_name, ft_strtrim(words_matrix[1]));
	ft_strcpy(current_stud.mail, ft_strtrim(words_matrix[2]));
	ft_strcpy(current_stud.grade, ft_strtrim(words_matrix[3]));
	ft_strcpy(current_stud.county, ft_strtrim(words_matrix[4]));
	return (current_stud);
}//not used

int				main()
{
	student_info	stud_vector[100];
	int fd;
	char buff[2];
	char v_aux[100];
	v_aux[0]='\0';

	int i = 0;
	int r = 0;
	int nr = 0;

	fd = open("students.csv",O_RDONLY);
	while(r = (read(fd,buff,1)))

	{

		buff[r]='\0';

		if((buff[0]==';' || buff[0] == '\n') && v_aux[0] != '\0' )

		{
printf("%d  %d %s\n",i,nr,v_aux);

			if(i==0)

				strcpy(stud_vector[nr].first_name,v_aux);

			if(i==1)

				strcpy(stud_vector[nr].last_name,v_aux);

			if(i==2)

				strcpy(stud_vector[nr].mail,v_aux);

			if(i==3)

				strcpy(stud_vector[nr].grade,v_aux);

			if(i==4)
			{
				ft_strcpy(stud_vector[nr].county, v_aux);
				nr++;
			}

			i=(i+1)%5;

			v_aux[0]='\0';

		}

		else

		{

printf("---%s\n",buff);
			if(buff[0] != ' ' && buff[0] != ';')
				ft_strcat(v_aux,buff);

		}

	}

	if(ft_strlen(v_aux) != 0)

	{

		strcpy(stud_vector[nr].county,v_aux);

		nr++;

	}
	//check_students_Cluj();
	print_stud_info(stud_vector, nr);
	return (0);
}
