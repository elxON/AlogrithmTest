//΢������һ����ϵ��
//NO.001
// �Ѷ�Ԫ��������������˫������
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


//���Ľڵ�ṹ
struct BSTreeNode
{
	int m_nValue;
	BSTreeNode *m_pLeft;
	BSTreeNode *m_pRight;
};

//�����˫������
BSTreeNode* treeToLinkedList(BSTreeNode * root)
{
	BSTreeNode *head, *tail;
	helper(header, tail, root);
	return head;
}

//ʵ����ת����˫������ĺ���
void helper(BSTreeNode *& head, BSTreeNode *& tail, BSTreeNode root)
{

	//��ڵ� �� �ҽڵ�
	BSTreeNode *lt, *rh;
	if(root == NULL)
	{
		head = NULL;
		tail = NULL;
		return ;
	}
	//���������ݹ�
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



