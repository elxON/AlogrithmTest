//微软面试一百题系列
//NO.016
/* 输入一颗二元树，从上往下按层打印树的每个结点，同一层中按照从左往右的顺序打印。 
例如输入 
		  8 
		/    \ 
		6     10 
	  / \    /   \ 
	 5   7   9   11 
输出 8 6 10 5 7 9 11。  
*/

struct BSTreeNode
{
	int data;
	BSTreeNode * m_pLeft;
	BSTreeNode * m_pRight;
}
void printTree(BSTreeNode* root)
{
	if(root == NULL) return ;
	printf("%d ", root->data);

	printTree(root->m_pLeft->data);
	printf("%d ", root->m_pRight->data);
	
}