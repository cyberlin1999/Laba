#include <stdio.h>
#include <malloc.h>
int main()
{
	int a,b=0;
	while(scanf("%d",&a))
	{
	printf("%s","очередное число:");
	printf("%d\n",a);
	if (a==5)
	b+=1;
	printf("%s","колличество 5-ок:");
	printf("%d\n",b);
}
return 0;
}