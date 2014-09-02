//微软面试一百题系列
//NO.008
/* ★用一种算法使通用字符串相匹配。 ANSWER: What is “Tongyongzifuchuan”... a string with “*” and “?”? If so, here is the code. */

int match(char *str, char *ptn){
	if(*ptn == '\0') return 1;
	if(*ptn == '*')
	{
		do{
			if(match(str++, ptn+1)) 	
				return 1;
		}while(*str != '\0');
		return 0;
	}
	if(*str == '\0') return 0;
	if(*str == *ptn || *ptn == '?')
	{	
		return match(str+1, ptn+1);
	}
	return 0;
}


/* ★颠倒一个字符串。优化速度。优化空间。  */

void reverse(char *str){
	reverseFixlen(str, strlen(str));
}

void reverseFixlen(char *str, int n);
{
	char *p = str+n-1;
	while(str < p)
	{
		char c = *str;
		*str = *p;
		*p = c;
	}
}

/* ★颠倒一个句子中的词的顺序，比如将“我叫克丽丝”转换为“克丽丝叫我”， 实现速度最快，移动最少。  */
丝丽克  克丽丝
void reverseWordsInSentence(char * sen, c)
{
	int len = strlen(sen);
	reverseFixlen(sen, len);
	char * p = str;
	while(*p != '\0')
	{
		while(*p == ' ' && *p != '\0')
			p++;
		str = p;
		while(*p != ' ' && *p != '\0') 
			p++;
		reverseFixlen(str, p-str);
	}
}

/* 找到一个子字符串。优化速度。优化空间。 */


int bm_strstr(char *str, char *sub)
{
	int len = strlen(sub);
	int i;
	int aux[256];
	memset(aux, sizeof(int), 256, len+1);
	for(i=0; i<len; i++)
	{
		aux[sub[i]] =  len -i;
	}
	int n = strlen(str);
	i = len -1;
	while(i<n){
		int j=i, k=len-1;
		while(k>=0&&str[j--] == sub[k--]);
		
	}
}
