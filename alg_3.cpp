//微软面试一百题系列
//NO.003
/* 3.求子数组的最大和  */
// 1, -2, 3, 10, -4, 7, 2, -5

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
