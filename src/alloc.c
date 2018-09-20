/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 09:57:50 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 10:12:25 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		alloc(t_mapstore **dimens, t_dist **dist,
		t_list **coord, t_vlist **valid)
{
	(*dist) = (t_dist*)malloc(sizeof(t_dist));
	(*coord) = (t_list*)malloc(sizeof(t_list));
	(*dimens) = (t_mapstore*)malloc(sizeof(t_mapstore));
	(*valid) = (t_vlist *)malloc(sizeof(t_vlist));
}
