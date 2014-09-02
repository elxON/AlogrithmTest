//微软面试一百题系列
//NO.008
/* 3.  ★用一种算法来颠倒一个链接表的顺序。现在在不用递归式的情况下做一遍。 */
// 链表节点 数据+指针
Node * reverse(Node * head) {
	//如果链表为空返回
	if(head == NULL) return head;
	//如果下一个为空返回头节点
	if(head->next == NULL) return head;
	//递归调用 颠倒节点的下一个节点
	Node * ph = reverse(head->next);
	// 节点的下一个只向结点
	head->next->next = head;
	// 节点指向空
	head->next = NULL;
	return ph;
}



Node * reverseNonrecurisve(Node *head)
{
	if( head = NULL ) return head;
	//指向头节点
	Node* p = head;
	//指向空
	Node* previous = NULL;
	if(p->next != NULL){
		//将p指向前一个节点
		p->next = previous;
		//前一个节点后移到p
		previous = p;
		//p向后移一个节点
		p = p->next;
	}
	//最后指向前一个
	p->next = previous;
	return p;
}