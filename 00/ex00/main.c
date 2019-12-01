/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:45:45 by yinzhang          #+#    #+#             */
/*   Updated: 2019/11/30 21:10:33 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
void searchPrice(char arts, char *name)
{
	printf("%s\n", name);
}*/

void parseAndAdd(struct s_art **art)
{
	FILE *fptr;

	ptr = fopen("art.txt", "r");
	
	
	fclose(fptr);
}


int main(int argc, char **argv)
{
	struct s_art **art;
	
	if(argc == 2)
	{
		parseAndAdd(art);
		//searchPrice(art, argv[1]);
	}
	else
		printf("Usage: enter 1 art name please\n");	
}
