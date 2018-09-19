/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:39:00 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 10:36:11 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		freeit(t_vlist **valid, t_mapstore **dimensions,
		t_list **coord, char **line)
{
	free((*line));
	free((*coord));
	free((*valid));
	free((*dimensions)->piece);
	free((*dimensions)->map);
}
