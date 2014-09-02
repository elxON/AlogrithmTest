//微软面试一百题系列
//NO.003
/* 3.求子数组的最大和  */
// 1, -2, 3, 10, -4, 7, 2, -5
cur = 0
sum = 1
max = 1

cur = 1
sum = -1;
max = 1;
sum = 0;

cur = 2;
sum = 3;
max = 3;


int maxSubarray (int a[], int size)
{
	if(size <= 0) error("error array size");
	int sum = 0;
	int max = -(1<<31);
	int cur = 0;
	while(cur < size)
	{
		sum += a[cur++];
		if(sum > max){
			max = sum;
		}
		else if(sum < 0)
		{
			sum = 0;
		}
	}
	return max;
}


int maxSubarray(int a[], int size)
{
	if(size <= 0) error("fuck error");
	int sum = 0;
	int max = -(1<<31);
	int cur = 0;
	while( cur < size)
	{
		sum += a[cur++];
		if(sum > max)
		{
			max = sum;
			}
		else if(sum < 0)
		{
			sum = 0;
		}
	}
	return max;
}

int maxSubarray(int a[], int size)
{
	if(size <= 0) error("fuck error");
	int sum = 0;
	int max = -(1<< 31);
	int cur = 0;
	while(cur<size)
	{
		sum += a[cur++];
		if(sum > max)
		{
			max = sum;
		}
		else if(sum < 0)
		{
			sum = 0;
		}
	}
	return max
}
