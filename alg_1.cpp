//΢������һ����ϵ��
//NO.001
// �Ѷ�Ԫ��������������˫������

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
		lt->m_pLeft = root;
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

