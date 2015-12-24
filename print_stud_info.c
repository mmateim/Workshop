/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stud_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 13:32:32 by mmatei            #+#    #+#             */
/*   Updated: 2015/12/04 13:45:11 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	print_stud_info(student_info *v, int s_nr)
{
	int i;

	i = 0;
	while (i <= s_nr)
	{
	printf("- %d",i);	
		printf("%s   %s   %s   %s   %s\n\n\n",v[i].first_name, v[i].last_name, v[i].grade, v[i].mail, v[i].county);
		i++;
	}
printf("-----------------%d",i);
}
