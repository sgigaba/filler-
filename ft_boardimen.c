/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boardimen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:56:56 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 11:04:27 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_boardimen(t_mapstore **dimens)
{
	char	**dimensions;
	char	*fresh;
	int		size;
	char	*line;

	while (get_next_line(0, &line))
	{
		if (ft_strstr(line, "Plateau"))
		{
			dimensions = (char**)malloc(sizeof(char *) * 3);
			size = ft_strlen(line) - 1;
			fresh = ft_strsub(line, 8, size - 7);
			dimensions = ft_strsplit(fresh, ' ');
			(*dimens)->x = ft_atoi(dimensions[0]);
			(*dimens)->y = ft_atoi(dimensions[1]);
			break ;
		}
	}
}
