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
    exit(0);
j=2*(((n-m)/2)+m);
a=m-1;              //a is length of first part of input string
b=n;                //b is length of given input string
reverse(i,m,a);
reverse(m,j,b-1);
reverse(i,n,b-1);
printf("Output is %s\n",s);
printf("Number of swaps is %d\n",count);
}
