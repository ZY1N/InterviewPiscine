/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countof2-2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:39:26 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/04 12:43:09 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void gocount(int n, int *count)
{
	if(n >= 10)
	{
		gocount(n/10, count);
		gocount(n%2, count);
	}
	if(n == 2)
		*count++;
}

int count_of_2(int n)
{
	int count = 0;
	for(int i = 0; i <= n; i++)
	{
		gocount(i, &count);
	}
	return(count);
}
