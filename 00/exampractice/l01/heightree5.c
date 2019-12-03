/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heightree5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:41:21 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/02 14:44:23 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int height_tree(struct s_node *root)
{
	int height, current = 0;
	if(!root)
		return -1;

	for(int i = 0; root->node[i]; i++)
	{
		current = height_tree(root->node[i]) + 1;
		if(current > height)
			height = current;
	}
	return (height);

}
