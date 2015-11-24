/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organized_code.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:23:20 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/24 21:37:23 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

typedef struct	student
{
	char		first_name[40];
	char		last_name[40];
	char		mail[30];
	char		grade[6];
	char		county[20];
}				student_info;

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
	student_info	

	fp = fopen("students.csv", "r");
	while (fscanf(fp, "%s", buff) > 0)
	{
		place_words(buff);
	}
	return (0);
}
