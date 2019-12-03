/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:28:26 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/02 13:02:09 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_point
{
 int x;
 int y;
}		t_point;

/*
 *first we begin with creating a char which is filled with whatever the begin is:
 	- in this case we go into the tab[begin.y][begin.x]
	- It is y and then x because holding y constant will allow x to move accross, and vice versa

 *next we go to the tab and set the beginning y and x == 'F'
 	- tab[begin.y][begin.x] = 'F'

 *next begin.y is incremented by 1
 
 *if the newly incremented begin.y is within bounds of the size and the tab[begin.y][begin.x == point]
 	- call floodfill on the new begin point

	*subtract begin.y by 2


 * */

void flood_fill(char **tab, t_point size, t_point begin)
{
	char point = tab[begin.y][begin.x];

	tab[begin.y][begin.x] = 'F';
	begin.y += 1;
	if(begin.y < size.y && tab[begin.y][begin.x]  == point)
		flood_fill(tab, size, begin);
	begin.y -= 2;
	if(begin.y >= 0 && tab[begin.y][begin.x] == point)
		flood_fill(tab, size, begin);
	begin.y+= 1;
	begin.x+= 1;
	if(begin.x < size.x && tab[begin.y][begin.x] == point)
		flood_fill(tab, size, begin);
	begin.x -= 2;
	if (begin.x >= 0 && tab[begin.y][begin.x] == point)
		flood_fill(tab, size, begin);
	return ;
}
