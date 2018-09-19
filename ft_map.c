/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 14:00:48 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 09:57:02 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_map(char *line, t_mapstore **dimens)
{
	int	i;
	int	size;

	i = 0;
	(*dimens)->map = malloc(sizeof(char*) * ((*dimens)->x + 1));
	while (i < (*dimens)->x)
	{
		get_next_line(0, &line);
		size = ft_strlen(line);
		(*dimens)->map[i] = ft_strsub(line, 4, size - 4);
		i++;
	}
	(*dimens)->map[i] = NULL;
}
