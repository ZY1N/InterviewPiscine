/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:06:07 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/02 15:19:18 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node
{
	void *content;
	struct s_node *next;
};

struct s_queue
{
	struct s_node *first;
	struct s_node *last;
};

struct s_queue *init()
{
	struct s_queue *q;

	q = malloc(sizeof(struct s_queue));
	q->first = NULL;
	q->last = NULL;
	return(q);
}

void enqueue(struct s_queue *q, void *c)
{
	struct s_node *n;

	n = malloc(sizeof(struct s_node));
	n->content = c;

	if(!q->first)
	{
		q->first = n;
	}
	if(q->last)
	{
		q->last->next = n;
	}
	q->last = n;
}

void *dequeue(struct s_queue *q)
{
	void *c = NULL;
	struct s_node *temp = q->first;


	if(q->first)
	{
		c = temp->content;
		q->first = temp->next;
		queue->last = (queue->first ? queue->last : NULL);
		free(temp);
	}

	return(c);
}

void *peek(struct s_queue *q)
{
	return(q->first ? queue->first->content : NULL);
}

int isEmpty(struct s_queue *q)
{
	return(q->first ? 0 :1);
}
