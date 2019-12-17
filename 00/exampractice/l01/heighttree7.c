/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heighttree7.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:32:50 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/04 12:34:47 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int height_tree(struct s_node *root)
{
	int height = 0;
	int current = 0;

	if(!root)
		return(-1);
	for(int i = 0; root->nodes[i]; i++)
	{
		current = heightree(root->nodes[i]) + 1;
		if(current > height)
			height = current;
	}
	return(height);

}
