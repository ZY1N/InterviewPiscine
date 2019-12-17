/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:27:11 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/04 12:30:24 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char c;

	c = tab[begin.y][begin.x];
	if(begin.x >= size. x || begin.y >= size.y || begin.x < 0 || begin.y < 0 || tab[begin.y][begin.x] != c)
		return ;
	floodfill
}
