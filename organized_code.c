/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organized_code.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:23:20 by mmatei            #+#    #+#             */
/*   Updated: 2015/12/04 14:29:51 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*un Makefile + validari */
#include "lib.h"

student_info	place_words(char *s)
{
	char			**words_matrix;
	student_info	current_stud;

	words_matrix = ft_strsplit(s, ';');
	ft_strcpy(current_stud.first_name, words_matrix[0]);
	ft_strcpy(current_stud.last_name, words_matrix[1]);
	ft_strcpy(current_stud.mail, words_matrix[2]);
	ft_strcpy(current_stud.grade, words_matrix[3]);
	ft_strcpy(current_stud.county, words_matrix[4]);
	return (current_stud);
}

int				main()
{
	FILE			*fp;
	char			buff[255];
	student_info	stud_vector[100];
	int 			stud_nr;
	int				line_nr;

	stud_nr = 0;
	line_nr = 0;
	fp = fopen("students.csv", "r");
	while (fscanf(fp, "%s", buff) > 0)
	{
		line_nr ++;
		if (buff_validation(buff, ';') == 1)
		{
			stud_vector[stud_nr] = place_words(buff);
			stud_nr++;
		}
		else
			printf("\nline %d has a wrong nr of columns\n", line_nr);
	}
	//check_students_Cluj();
	print_stud_info(stud_vector, stud_nr);
	return (0);
 }
