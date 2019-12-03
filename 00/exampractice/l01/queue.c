/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:52:27 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/02 15:05:58 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node
{
	void *content;
	struct s_node *next;
};

struct s_queue{
	struct s_node *first;
	struct s_node *last;
};

//first malloc the thing and then point both pointers to NULL
struct s_queue *init(void)
{
	struct s_queue *abc;

	abc = malloc(sizeof(struct s_queue));
	abc->first = NULL;
	abc->last = NULL;
	return(abc);
}

void enqueue(struct  s_queue *queue, void *content)
{
	struct s_node *n = malloc(sizeof(struct s_node));

	n->content = c;
	n->next = NULL;
	if(!queue ->first)
		queue->first = n;
	if(queue->last)
		queue->last->next = n;
	queue->last = n;
	return ;
}

void *dequeue(struct s_queue *queue)
{
	void *c = NULL;
	struct s_node *n = queue ->first;

	if(queue->first)
	{
		c = n->content;
		queue->first = n->next;
		queue->last = (queue->first ? queue->last : NULL);
		free(n);
	}
	return(c);
}

void *peek(struct s_queue *queue)
{
	void *c = NULL;

	if(queue->first)
		c = queue->first->content;
	return(c);
}

int isEmpty(struct s_queue *queue)
{
	return(!queue->first ? 1 : 0);
}
