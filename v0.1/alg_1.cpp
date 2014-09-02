//微软面试一百题系列
//NO.001
// 把二元查找树变成排序的双向链表
/* 10
head NULL tail NULL
->l 6 head lt
		->l 4 head lt ->4
		->r 8 rh tail(lt) ->8
-> 6  4=6=8 head->4 lt->8
->r 14 rh tail
		->l 12 head(rh) lt ->12
		->r 18 rh tail->18
-> 14 12=14=18 rh->12 tail->18 */


//树的节点结构
struct BSTreeNode
{
	int m_nValue;
	BSTreeNode *m_pLeft;
	BSTreeNode *m_pRight;
};

//树变成双向链表
BSTreeNode* treeToLinkedList(BSTreeNode * root)
{
	BSTreeNode *head, *tail;
	helper(header, tail, root);
	return head;
}

//实际树转换成双向链表的函数
void helper(BSTreeNode *& head, BSTreeNode *& tail, BSTreeNode root)
{

	//左节点 和 右节点
	BSTreeNode *lt, *rh;
	if(root == NULL)
	{
		head = NULL;
		tail = NULL;
		return ;
	}
	//左右子树递归
	helper(head, lt, root->m_pLeft);
	helper(rh, tail, root->m_pRight);
	if(lt != NULL)
	{
		lt->m_pRight = root;
		root->m_pLeft = lt;
	}
	else
	{
		head = root;
	}
	if( rh != NULL)
	{
		root->m_pRight = rh;
		rh->m_pLeft = root;
	}
	else
	{
		tail = root;
	}
}



