//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
  int i,a=0,b=0;

  printf("Enter a string\n");
	scanf("%s", str);

  for(i=0;i<strlen(str);i++)
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    a=a+1;
    else
    b=b+1;
  }
  printf("\n The no. of vovels are:%d",a);
return 0;
}
