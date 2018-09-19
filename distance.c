/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:41:42 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 10:42:16 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			distance(int y, int x, int ey, int ex)
{
	int s1;
	int s2;
	int dist;

	y = abso(y);
	x = abso(x);
	ey = abso(ey);
	ex = abso(ex);
	s1 = (x - ex) * (x - ex);
	s2 = (y - ey) * (y - ey);
	dist = s1 + s2;
	return (dist);
}
