#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *s,ch;
int i=0,j,n,m,count=0,b,a;
char* reverse(int i,int m,int a) 
{
 if(i>=m/2)
 return s;
 ch=s[i];
 s[i]=s[a];
 s[a]=ch;
 count++;            //Here counts calculate the number of swaps 
 return reverse(i+1,m,a-1);
}
int main(int argc,char *argv[])
{
 int x=1;
 n=strlen(argv[x]);
 s=(char*)malloc(n*sizeof(char));
 s=argv[x];
 printf(" Input is %s\n",s);
 m=atoi(argv[++x]);
 if(m>n)
{
 printf("enter the valid 'm'value");
 exit(0);
}
 j=2*(((n-m)/2)+m);
 a=m-1;            //a is length of first part of input string
 b=n;              //b is length of given input string
 reverse(i,m,a);   //This function reverse the first part of the string
 reverse(m,j,b-1); //This function reverse the second part of the string
 reverse(i,n,b-1); //This function reverse the entire string
 printf("Output is %s\n",s);
 printf("Number of swaps is %d\n",count);
}
