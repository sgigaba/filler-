/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placepiece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:38:11 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 15:03:18 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		bestdits(t_dist **bestdist, t_vlist **valid)
{
	int best;
	int besty;
	int bestx;

	bestx = 0;
	besty = 0;
	best = 0;
	while ((*valid)->next != NULL && (*bestdist)->next != NULL)
	{
		if (((*bestdist)->bestdist < best || best == 0))
		{
			best = (*bestdist)->bestdist;
			besty = (*valid)->v1y;
			bestx = (*valid)->v2x;
		}
		(*valid) = (*valid)->next;
		(*bestdist) = (*bestdist)->next;
	}
	ft_putnbr(besty);
	ft_putchar(' ');
	ft_putnbr(bestx);
	ft_putchar('\n');
}

void		enemyco(t_mapstore **dimens)
{
	int y;
	int x;
	int a;

	a = 0;
	y = (*dimens)->x - 1;
	x = (*dimens)->y - 1;
	while (y >= 0)
	{
		x = (*dimens)->y - 1;
		while ((*dimens)->map[y][x])
		{
			if ((*dimens)->map[y][x] == *(*dimens)->opos)
			{
				(*dimens)->ey = y;
				(*dimens)->ex = x;
				a++;
				break ;
			}
			x--;
		}
		if (a > 0)
			break ;
		y--;
	}
}

void		edist(t_mapstore **dimens, t_vlist **valid, t_dist **bestdist)
{
	t_dist	*head;
	t_vlist	*vhead;

	vhead = *valid;
	head = *bestdist;
	while (vhead->next != NULL)
	{
		head->next = (t_dist*)malloc(sizeof(t_dist));
		head->bestdist = distance((*dimens)->ey,
				(*dimens)->ex, vhead->v1y, vhead->v2x);
		head = head->next;
		vhead = vhead->next;
	}
}

void		placepiece(t_vlist **valid, t_mapstore **dimens, t_dist **dist)
{
	enemyco(dimens);
	edist(dimens, valid, dist);
	bestdits(dist, valid);
}
