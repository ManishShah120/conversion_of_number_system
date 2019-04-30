//WAP to convert decimal to Binary,octal,hexadecimal,base4?
#include<stdio.h>
#include<stdlib.h>
int dec_Bin(int);
int dec_Oct(int);
int dec_Hex(int);
int dec_Base4(int);
void drawline(void);
int main()
{
	int n,decimal;
	
	printf("Decimal to Binary,octal,Hexadecimal Converter\n");
	
	printf("Which conversion you want to Do:-");
	drawline();
	printf("\n1.Decimal to Binary");
	printf("\n2.Decimal to Octal");
	printf("\n3.Decimal to Hexadecimal");
	printf("\n4.Decimal to Base4");
	drawline();
	printf("\nEnter your choice:-");
	scanf("%d", &n);
	
	printf("Enter any number in decimal:-");
	scanf("%d", &decimal);
	
	switch(n)
	{
		case 1:
			dec_Bin(decimal);
			break;
		case 2:
			dec_Oct(decimal);
			break;
		case 3:
			dec_Hex(decimal);
			break;
		case 4:
			dec_Base4(decimal);
			break;	
		default:
			printf("Please choose the right choice");			
	}
	getch();
}
int dec_Bin(int decimal)
{
		
	int arr1[100],rem,i,temp;
	temp=decimal;	
	for(i=0;decimal>0;i++)
	{
		arr1[i]=decimal%2;
		decimal=decimal/2;
	}
	printf("%d in Binary = ",temp);
	for(i=i-1;i>=0;i--)
	{
		printf("%d",arr1[i]);
	}
	drawline();
}
int dec_Oct(int decimal)
{
			
	int arr1[100],rem,i,temp;
	temp=decimal;	
	for(i=0;decimal>0;i++)
	{
		arr1[i]=decimal%8;
		decimal=decimal/8;
	}
	printf("%d in Octal = ",temp);
	for(i=i-1;i>=0;i--)
	{
		printf("%d",arr1[i]);
	}
	drawline();
}
int dec_Hex(int decimal)
{
	
}
int dec_Base4(decimal)
{
	
	int arr1[100],rem,i,temp;
	temp=decimal;	
	for(i=0;decimal>0;i++)
	{
		arr1[i]=decimal%4;
		decimal=decimal/4;
	}
	printf("%d in Base4 = ",temp);
	for(i=i-1;i>=0;i--)
	{
		printf("%d",arr1[i]);
	}
	drawline();	
}
void drawline(void)
{
	printf("\n-----------------------------------");
}
