/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piecedimen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:19:56 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 10:20:43 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_piecedimen(char *line, t_mapstore **dimens)
{
	char	**dimen;
	char	*fresh;
	int		size;

	dimen = (char**)malloc(sizeof(char*) * (3));
	size = ft_strlen(line) - 1;
	fresh = ft_strsub(line, 6, size - 3);
	dimen = ft_strsplit(fresh, ' ');
	(*dimens)->px = ft_atoi(dimen[0]);
	(*dimens)->py = ft_atoi(dimen[1]);
}
