/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heightree8.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:05:09 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/04 15:07:47 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int height_tree(struct s_node *root)
{
	int curr;
	int height;

	for(int i = 0; root->s_node[i]; i++)
	{
		current = height_tree(root->snode) + 1;
		if(current > height)
			height = current;

	}
	return(height);
}
