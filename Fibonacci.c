//C program to display Fibonacci sequence.

#include<stdio>
int main()
{
  int a1=0,a2=1,l,n,i;
  printf("Enter no of terms:");
  scanf("%d",&a);

  printf("Fibonacci sequence:");
  for(i=1;i<=n;i++)
  {
    printf("%d\t",a1);
    //print the first number
    l=a1+a2;
    a1=a2;
    a2=l;
}
}
