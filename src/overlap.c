/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overlap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:24:56 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 14:05:18 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	inc(int y, int x, int my, int mx)
{
	while ((mx + x) < 0)
		x++;
	while ((my + y) < 0)
		y++;
}

int		vc(int my, int mx, t_mapstore **dimens)
{
	int x;
	int y;
	int o;

	y = -1;
	o = 0;
	inc(1 + y, (x = 0), my, mx);
	while (++y < (*dimens)->px)
	{
		x = 0;
		while ((*dimens)->piece[y][x])
		{
			if (((mx + x) >= (*dimens)->y || (my + y) >= (*dimens)->x)
					&& (*dimens)->piece[y][x] == '*')
				return (-1);
			if ((*dimens)->piece[y][x] == '*' && (*dimens)->map[my + y][mx + x]
					== *(*dimens)->opos)
				return (-1);
			if ((*dimens)->piece[y][x] == '*' && (*dimens)->map[my + y][mx + x]
					== *(*dimens)->pos)
				o++;
			x++;
		}
	}
	return ((o != 1) ? -1 : 0);
}
