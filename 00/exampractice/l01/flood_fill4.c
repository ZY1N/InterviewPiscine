/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:00:20 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/02 16:10:39 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_point
{
	int x;
	int y;
} t_point;

void floodfill2(char **tab, t_point size, t_point begin, char c)
{
	if(begin.x >= size.x || begin.x < 0 || begin.y >= size.y || begin.y < 0 || tab[begin.y][begin.x] != c)
		return ;

	tab[begin.y][begin.x] = 'F';
	floodfill2(tab, size, (t_point){begin.x+1, begin.y}, c);
	floodfill2(tab, size, (t_point){begin.x-1, begin.y}, c);
	floodfill2(tab, size, (t_point){begin.x, begin.y+1}, c);
	floodfill2(tab, size, (t_point){begin.x, begin.y-1}, c);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	floodfill2(tab, size, begin, tab[begin.y][begin.x]);
}

int main()
{
	return 1;
}
