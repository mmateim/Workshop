/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organized_code.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:23:20 by mmatei            #+#    #+#             */
/*   Updated: 2015/12/04 13:27:09 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*un Makefile + validari */
#include "lib.h"

elev_info	*place_words(char *s)
{
	char			**words_matrix;
	student_info	*current_stud;

	words_matrix = ft_strsplit(s, ';');
	current_stud->first_name = words_matrix[0];
	current_stud->last_name = words_matrix[1];
	current_stud->mail = words_matrix[2];
	current_stud->grade = words_matrix[3];
	current_stud->county = words_matrix[4];
	return (current_stud);
}

int			main()
{
	FILE			*fp;
	char			buff[255];
	student_info	stud_vector[100];
	int 			stud_nr;

	stud_nr = -1;
	fp = fopen("students.csv", "r");
	while (fscanf(fp, "%s", buff) > 0)
	{
		if (info_validation(buff) == 1)
		{
			stud_nr++;
			stud_vector[stud_nr] = place_words(buff);
		}
	}
	check_students_Cluj();
	return (0);
 }
