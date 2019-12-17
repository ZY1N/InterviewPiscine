/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heightree3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 13:18:39 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/05 20:02:09 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int height_tree(struct s_node *root)
{
	int height = 0;
	int current = 0;
	if(!root)
		return(-1);

	for(int i = 0; root->s_node[i]; i++)
	{
		current = height_tree(root->s_node[i]) + 1;
		if(current > height)
			height = current;
	}
	return(height);
}
