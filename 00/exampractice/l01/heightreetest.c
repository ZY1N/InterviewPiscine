/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heightreetest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:47:18 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/04 12:49:51 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int height_tree(struct s_node *root)
{
	int curr = 0;
	int height = 0;

	if(!root)
		return - 1;
	for(int i = 0; root->nodes[i]; i++)
	{
		curr = height_tree(root->nodes[i]) + 1;
		if(curr > height)
			height = curr;
	}
	return(height);
}
