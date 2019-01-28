#include<stdio.h>

void main()
{
	int Strlen,Keylen,cols,rows,i,j,key[10],temp,k;
	char s[50][50],c;
	printf("Enter length of string: ");
	scanf("%d",&Strlen);
	printf("Enter length of key: ");
	scanf("%d",&Keylen);
	cols=Keylen;
	printf("Enter key: ");
	for(k=0;k<Keylen;k++)
	{
		scanf("%1d", &key[k]);
	}
	if(Strlen%Keylen==0)
		rows=Strlen/Keylen;
	else rows=(Strlen/Keylen)+1;
	
	printf("Enter a string to be encrypted: ");
	c=getchar();
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			if((c=getchar())!='\n')
			{	
				//if(c!=' ')
					s[i][j]=c;
				//else continue;
			}
			else
			{
				s[i][j]='\0';
			}
		}	
	}
	
	printf("Cipher text: ");
	for(k=0;k<Keylen;k++)
	{
			temp=--key[k];
			for(i=0;i<rows;i++)
			{	
				printf("%c",s[i][temp]);			
			}
		
	}
	printf("\n");
}
