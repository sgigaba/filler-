/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piecestore.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 11:04:42 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 11:04:57 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_piecestore(char *line, t_mapstore **dimens)
{
	int			i;
	int			size;

	i = 0;
	(*dimens)->piece = (char**)malloc(sizeof(char*) * (*dimens)->px + 1);
	while (i < (*dimens)->px)
	{
		get_next_line(0, &line);
		size = ft_strlen(line);
		(*dimens)->piece[i] = ft_strsub(line, 0, size);
		i++;
	}
	(*dimens)->piece[i] = NULL;
}
