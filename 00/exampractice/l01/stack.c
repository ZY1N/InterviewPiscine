/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:19:46 by yinzhang          #+#    #+#             */
/*   Updated: 2019/12/04 12:39:11 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node{
	void *content;
	struct s_node *next;
};

struct s_stack{
	struct s_node *top;
};


struct s_stack *init()
{
	struct s_stack *abc;

	abc = malloc(sizeof(struct s_stack));

	abc->top = NULL;
	return(abc);
}

void *pop(struct s_stack *stack)
{
	void *c = NULL;
	struct s_node *d;

	if(stack->top)
	{
		d = stack->top;
		c = stack->top->content;
		stack->top = d->next;
		free(d);
	}
	return(c);
}

void push(struct s_stack *stack, void *content)
{
	struct s_node *abc;

	abc = malloc(sizeof(struct s_node));
	abc ->content = content;
	abc->next = stack->top;
	stack->top = abc;
	return ;
}

void *peek(struct s_stack *stack)
{
	return(stack->top ? stack->top->content : NULL);
}

int isEmpty(struct s_stack *stack)
{
	return(!stack->top ? 1: 0);
}
