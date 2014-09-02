int joseph(int n, int m)
{
	int fn = 0;
	for(int i=2; i<=n; i++){
		fn = (fn+m)%i;
	}
	return fn;
}