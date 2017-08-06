#include<stdio.h>
#include<conio.h>

int main(){
 int n;
 printf("Enter the size of array: ");
 scanf("%d",&n);

 int a[n],i;
 printf("Enter the numbers: ");
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
 }

 int l=a[0],s=a[0];

 for(i=1;i<n;i++){
  if(a[i]>l){
   l=a[i];
  }
  if(a[i]<s){
   s=a[i];
  }
 }

 printf("\nThe largest number is %d and the smallest number is %d\n",l,s);

 getch();
}
