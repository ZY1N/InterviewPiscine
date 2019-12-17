/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:20:47 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/04 12:25:16 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int findit(int n)
{
	if(n >= 10)
		countnum(n/10, count);
		countnum(n%10 10);
		if(n == 2)
			count += 1;

}

int count_of_2(int n)
{
	int count = 0;

	for(int i = 0; i <= n; i++)
		count += findit(n);
	return(count);
}
