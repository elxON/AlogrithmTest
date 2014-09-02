//微软面试一百题系列
//NO.009
/* 判断整数序列是不是二元查找树的后序遍历结果 题目：输入一个整数数组，判断该数组是不是某二元查找树的后序遍历的结果。 如果是返回 true，否则返回 false。 例如输入 5、7、6、9、11、10、8，由于这一整数序列是如下树的后序遍历结果： 
			   8
			/     \ 
		   6     10 
		/   \    /   \ 
		5   7   9   11 
因此返回 true。 如果输入7、4、6、5，没有哪棵树的后序遍历的结果是这个序列，因此返回 false。 
*/

int isPostoorderResult(int a[], int n)
{
	return helper(a,0,n-1);
}

int helper(int a[], int s, int e)
{
	if(e == s) return 1;
	int i = e - 1;
	while(a[e]>a[i] && i>=s) i--;
	if(!helper(a, i+1, e-1)
		return 0;
	int k = 1;
	while(a[e]<a[i] && i>=s) i--;
	return helper(a, s, 1);
}