/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:44:31 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/02 15:59:42 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_point
{
	int x;
	int y;
} t_point;

void fill(char **tab, t_pooint size, t_point begin, char c)
{
	if(begin.x >= size.x || begin.x < 0 || begin.y >= size.y || begin.y < 0 || tab[begin.y][begin.x] 
			!= c)
		return ;
	tab[begin.y][begin.x] = 'F';
	fill(tab, size, (t_point){begin.x+1, begin.y}, c);
	fill(tab, size, (t_point){begin.x-1, begin.y}, c);
	fill(tab, size, (t_point){begin.x, begin.y+1}, c);
	fill(tab, size, (t_point){begin.x, begin.y-1}, c);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
