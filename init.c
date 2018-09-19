/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:30:00 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 16:56:03 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		init(t_mapstore **t_mapstores, t_dist **t_dists,
		t_list **t_lists, t_vlist **t_vlists)
{
	(*t_dists)->bestdist = 0;
	(*t_lists)->start_x = 0;
	(*t_lists)->end_x = 0;
	(*t_lists)->start_y = 0;
	(*t_lists)->end_y = 0;
	(*t_vlists)->v1y = 0;
	(*t_vlists)->v2x = 0;
	(*t_mapstores)->ey = 0;
	(*t_mapstores)->ex = 0;
	(*t_mapstores)->x = 0;
	(*t_mapstores)->y = 0;
	(*t_mapstores)->px = 0;
	(*t_mapstores)->py = 0;
	(*t_mapstores)->piece = 0;
	(*t_mapstores)->map = 0;
	(*t_mapstores)->pos = 0;
	(*t_mapstores)->opos = 0;
}
