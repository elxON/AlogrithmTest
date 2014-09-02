//微软面试一百题系列
//NO.007
/* 微软亚院之编程判断俩个链表是否相交 给出俩个单向链表的头指针，比如 h1，h2，判断这俩个链表是否相交。 为了简化问题，我们假设俩个链表均不带环。 问题扩展： 1.如果链表可能有环列? 2.如果需要求出俩个链表相交的第一个节点列?  */

struct Node{
	int data;
	Node *next;
};

int isJoinedSimple(Node * h1, Node * h2)
{
	while(h1->next != NULL)
	{
		h1 = h1->next;
	}
	while(h2->next != NULL)
	{
		h2 = h2->next;
	}
	return h1 == h2;
}

int isJoined(Node * h1, Node * h2)
{
	Node * cylic1 = testCylic(h1);
	Node * cylic2 = testCylic(h2);
	if(cylic1 + cylic2 == 0) 
		return isJoinedSimple(h1, h2);
	if(cylic1 == 0 && cylic2 != 0 || cylic2 == 0 && cylic1 != 0)
		return 0;
	Node *p = cylic1;
	while(1)
	{
		if(p==cylic2 || p->next == cylic2)
			return 1;
		p=p->next->next;
		cylic1 = cylic1->next;
		if(p==cyclic1) return 0;
	}
}

Node* testCylic(Node * h1)
{
	Node * p1 = h1, *p2 = h1;
	while(p2!=NULL && p2->next!=NULL)
	{
		p1=p1->next;
		p2=p2->next->next;
		if(p1==p2)
		{
			return p1;
		}
	}
	return NULL;
}


