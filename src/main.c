/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 06:52:22 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 12:31:52 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			main(void)
{
	char		*line;
	t_mapstore	*dimensions;
	t_vlist		*valid;
	t_list		*coord;
	t_dist		*dist;

	alloc(&dimensions, &dist, &coord, &valid);
	init(&dimensions, &dist, &coord, &valid);
	playernumber(&dimensions);
	ft_boardimen(&dimensions);
	while (get_next_line(0, &line))
	{
		if (ft_strstr(line, "01234567"))
			ft_map(line, &dimensions);
		if (ft_strstr(line, "Piece"))
		{
			ft_piecedimen(line, &dimensions);
			ft_piecestore(line, &dimensions);
			piecetrim(&dimensions, &coord);
			vm(&dimensions, &coord, &valid, &dist);
		}
	}
	freeit(&valid, &dimensions, &coord, &line);
	return (0);
}
