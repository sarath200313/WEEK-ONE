
#include <stdio.h>
#include <ctype.h>
int main()
{
	char a,b;
	printf("Enter the two characters\n");
	scanf("%c %c",&a,&b);
	int ans=0;
	if(isdigit(b))
	{
		int x=b-'0';
		ans+=x;
	}
	else if (b=='A'||b=='B'||b=='C'||b=='D'||b=='E'||b=='F')
	{
		int x=(int)(b);
		ans+=(x-55);
	}
	else
	{
		printf("Error\n");
	}
	if(isdigit(a))
	{
		int y=a-'0';
		ans+=(y*16);
	}
	else if (a=='A'||a=='B'||a=='C'||a=='D'||a=='E'||a=='F')
	{
		int y=(int)(a);
		ans+=((y-55)*16);
	}
	else
	{
		printf("Error\n");
	}
	printf("Decimal value of the Hexa Characters = ");
	printf("%d",ans);
	return 0;
}
