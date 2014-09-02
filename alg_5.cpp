//微软面试一百题系列
//NO.005
//查找最小的 k  个元素 

void siftup(int a[], int i, int n)
{	
	while(i>0)
	{
		int j=(i&1==0? i-1:i+1);
		int p = (i-1) >>1;
		if(j<n && a[j] < a[i]) i=j;
		if(a[i] < a[p]) swap(a, i, p);
		i=p;
	}
}

void siftdowm(int a[], int i, int n)
{
	while(2*i + 1 < n)
	{
		int l = 2*i + 1;
		if(l+1 < n && a[l+1] < a[l]) l++;
		if( a[l] < a[i])
			swap(a, i, 1);
		i = 1;
	}
}