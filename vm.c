/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:21:46 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 10:24:13 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		vm(t_mapstore **dimens, t_list **trim,
		t_vlist **valid, t_dist **dist)
{
	int		x;
	int		y;
	t_vlist	*head;

	head = *valid;
	x = 0;
	y = 0;
	while (y < (*dimens)->x)
	{
		x = 0;
		while ((*dimens)->map[y][x])
		{
			if (vc(y - (*trim)->start_y, x - (*trim)->start_x, dimens) == 0)
			{
				head->next = (t_vlist*)malloc(sizeof(t_vlist));
				head->v1y = (y - (*trim)->start_y);
				head->v2x = (x - (*trim)->start_x);
				head = head->next;
			}
			x++;
		}
		y++;
	}
	head->next = NULL;
	placepiece(valid, dimens, dist);
}
