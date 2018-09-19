/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:59:48 by sgigaba           #+#    #+#             */
/*   Updated: 2018/08/13 17:00:14 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include <fcntl.h>

typedef struct					s_list
{
	int							start_x;
	int							end_x;
	int							start_y;
	int							end_y;
}								t_list;

typedef struct					s_dist
{
	int							bestdist;
	struct s_dist				*next;
}								t_dist;

typedef struct					s_vlist
{
	int							v1y;
	int							v2x;
	struct s_vlist				*next;
}								t_vlist;

typedef struct					s_mapstore
{
	int							x;
	int							y;
	int							px;
	int							py;
	char						**piece;
	char						**map;
	char						*pos;
	char						*opos;
	int							ey;
	int							ex;
}								t_mapstore;

void							ft_piecedimen(char *line, t_mapstore **dimens);
void							ft_boardimen(t_mapstore **dimens);
void							ft_map(char *line, t_mapstore **dimens);
void							ft_piecestore(char *line, t_mapstore **dimens);
void							piecetrim(t_mapstore **piece, t_list **coord);
void							init(t_mapstore **t_mapstores, t_dist **t_dists,
		t_list **t_lists, t_vlist **t_vlists);
void							vm(t_mapstore **dimens, t_list **coord, t_vlist
		**valid, t_dist **dist);
int								vc(int my, int mx, t_mapstore **dimens);
void							placepiece(t_vlist **valid,
		t_mapstore **dimens, t_dist **dist);
void							sortdist(t_mapstore **dimens,
		t_vlist **valid, int fd);
int								abso(int n);
int								distance(int y, int x, int ey, int ex);
void							enemydist(t_mapstore **dimens, t_dist **dist,
		t_vlist **valid);
int								enemycount(t_mapstore **dimens);
void							bestdits(t_dist **dist, t_vlist **valid);
void							enemyco(t_mapstore **dimens);
void							edist(t_mapstore **dimens, t_vlist **valid,
		t_dist **bestdist);
void							playernumber(t_mapstore **dimension);
void							alloc(t_mapstore **dimens, t_dist **dist,
		t_list **coord, t_vlist **valid);
void							freeit(t_vlist **valid, t_mapstore **dimensions,
		t_list **coord, char **line);
void							inc(int y, int x, int my, int mx);

#endif
