/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playernumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 12:29:44 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 12:29:51 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		playernumber(t_mapstore **dimensions)
{
	char *line;

	if (get_next_line(0, &line))
	{
		if (line[10] == '1')
		{
			(*dimensions)->pos = "O";
			(*dimensions)->opos = "X";
		}
		else if (line[10] == '2')
		{
			(*dimensions)->pos = "X";
			(*dimensions)->opos = "O";
		}
	}
}
