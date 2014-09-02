//微软面试一百题系列
//NO.017
/* 题目：在一个字符串中找到第一个只出现一次的字符。如输入 abaccdeff，则输出 b。 分析：这道题是 2006 年 google 的一道笔试题。 */

char firstSingle(char *str)
{
	int a[255] ;
	memset(a, 0, 255*sizeof(int));
	char *p = str;
	while(*p != '\0')
	{
		a[*p]++;
		p++;
	}
	p = str;
	while(*p != '\0')
	{
		if(a[*p] == 1) return *p;
	}
	return '\0';
}