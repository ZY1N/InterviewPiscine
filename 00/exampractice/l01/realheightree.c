/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realheightree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 13:04:42 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/02 13:21:42 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//the base case for this is when !root in which case we return -1
//our recursive case is when root->nodes == true

int height_tree(struct s_node *root)
{
	int current = 0;
	int height = 0;

	if(!root)
		return(-1);
	for(int i = 0; root->nodes[i]; i++)
	{	
		current = heighttree(root->nodes[i]) + 1;
		if(current > height)
			height = current;
	}
	return(height);
}
