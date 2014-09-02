//微软面试一百题系列
//NO.002
/* 2.设计包含 min  函数的栈。 定义栈的数据结构，要求添加一个 min  函数，能够得到栈的最小元素。 要求函数 min、push 以及 pop 的时间复杂度都是 O(1)。 */
//栈顶本身为空
//栈节点的结构
/* 
栈 大小  栈顶  指向栈堆的指针
栈堆 申请栈大小的堆空间
入栈 栈顶的值改变  栈顶加1 最小值改变
出栈 取出栈顶前一项的值 栈顶减一 最小值改变
获取最小值 取出栈顶减一元素中最小值的大小 */

struct MinStackElement {
	int data;	//数据
	int min;	//栈中的最小值
};

//栈的指针
struct MinStack{
	MinStackElement *data;	// 栈的头一个节点
	int size;				// 栈的大小
	int top;				// 栈顶位置
};

//栈的初始化
MinStack MinStackInit(int maxSize)
{
	MinStack stack;
	stack.size = maxSize;
	stack.data = (MinStackElement*)malloc(sizeof(MinStackElement)*maxSize);
	stack.top = 0;
	return stack;
}

//栈的释放
void MinStackFree(MinStack stack)
{
	free(stack.data);
}

void MinStackPush(MinStack stack, int d)
{
	if(stack.top == stack.size) error("out of stack space.");
	//获取栈顶
	MinStackElement* p = stack.data[stack.top];
	//添加数据
	p->data = d;
	// 求出最小值
	p->min = (stack.top == 0 ? d : stack.data[top - 1];
	if(p->min > d) p->min = d;
	// 移动栈顶
	stack.top++;
}

int MinStackPop(MinStack stack)
{
	if(stack.top == 0) error("stack is empty!");
	// 取出栈顶减一数据 栈顶减一
	return stack.data[--stack.top].data;
}

int MinStackMin(MinStack stack)
{
	if(stack.top == 0) error("stack is empty!");
	// 获取栈顶减一的最小数据
	return stack.data[stack.top-1].min;
}