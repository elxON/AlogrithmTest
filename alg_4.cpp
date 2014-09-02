//微软面试一百题系列
//NO.004
//在二元树中找出和为某一值的所有路径 

// 中序遍历 -


struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode *m_pLeft;
	BinaryTreeNode *m_pRight;
};


struct TreeNode{
	int data; 
	TreeNode * left;
	TreeNode * right;
};

void printPaths(TreeNode * root, int sum)
{
	int path[MAX_HEIGHT];
	helper(root, sum, path, 0);
}

void helper(TreeNode * root, int sum, int path[], int top)
{
	path[top++] = root.data;
	sum -= root.data;
	if(root->left == NULL && root->right == NULL)
	{
		if(sum == 0) printParh(path, top);
	}
	else{
		if(root->left != NULL) 			
			hlper(root->left, sum, path, top);
		if(root->right != NULL)
			helper(root->right, sum, path, top);
	}
	top--;
	sum += root.data;
}