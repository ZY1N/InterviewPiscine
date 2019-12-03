/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 13:22:13 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/02 13:40:16 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void flood_fill2(char **tab, t_point size, t_point begin, char c)
{
	if(begin.y > size.y || begin.x > size.x || begin.y < 0 || begin.x < 0 || tab[begin.x][begin.y] != c)
		return ;
	tab[begin.x][begin.y] = 'F';
	flood_fill2(tab, size, (t_point){begin.x+1, begin.y}, c);
	flood_fill2(tab, size, (t_point){begin.x, begin.y+1}, c);
	flood_fill2(tab, size, (t_point)begin{begin.x-1, begin.y}, c);
	flood_fill2(tab, size, (t_point)begin{begin.x, begin.y-1}, c);
	
}

void flood_fill(char **tab, t_point size, t_point begin, char c)
{

	flood_fill2(tab, size, begin, tab[begin.y][begin.x]);
}
