/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heighttree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:46:42 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/02 13:04:38 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node{
	int value;
	struct s_node **nodes;
};

int height_tree(struct s_node *root)
{
	int height = -1;

	if(!root)
		return -1;
	for(int i = 0; root->s_node[i]; i++)
	{
		count = height_tree(root->s_node[i]) + 1;
	}
}
