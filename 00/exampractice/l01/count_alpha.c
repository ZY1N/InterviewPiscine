/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:10:44 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/04 12:45:55 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *tolowerft(char *s)
{
	for(int i = 0; s[i]; i++)
	{
		if(s[i] >= 65 && s[i] <= 90)
			s[i] = s[i] - 'A' + 'a';
	}
	return s;
}

void countalpha(char *s)
{
	int ary[26] = {0};

	char *slower = (tolowerft(s));
	
	//printf("%s\n%s", s, slower);

	for(int i = 0; slower[i]; i++)
	{
		if(slower[i] >= 'a' && slower[i] <= 'z')
			ary[slower[i] - 'a']++;
	}

	int flag = 0;

	for(int i = 0; i < 26; i++)
	{
		if(ary[i] > 0)
		{
			if(flag == 1)
				printf(", ");
			printf("%d%c", ary[i], i +'a');
			flag = 1;
		}
	}	

}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		countalpha(argv[1]);
	}
	printf("\n");
}
