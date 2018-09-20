/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piecetrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 14:08:02 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 12:28:34 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	piecetrim(t_mapstore **dimens, t_list **coord)
{
	int	y;
	int	x;

	(*coord)->start_x = (*dimens)->py;
	y = 0;
	while (y < (*dimens)->px && ft_strstr((*dimens)->piece[y], "*") == NULL)
		y++;
	(*coord)->start_y = y;
	while (y < (*dimens)->px && ft_strstr((*dimens)->piece[y], "*"))
		y++;
	(*coord)->end_y = --y;
	while (y >= (*coord)->start_y)
	{
		x = 0;
		while (x <= (*dimens)->py)
		{
			if ((*dimens)->piece[y][x] == '*' && x < (*coord)->start_x)
				(*coord)->start_x = x;
			if ((*dimens)->piece[y][x] == '*' && x > (*coord)->end_x)
				(*coord)->end_x = x;
			x++;
		}
		y--;
	}
}
