#include<stdio.h>
#include<conio.h>

int main(){
 int n;
 printf("Enter the size of array: ");
 scanf("%d",&n);
 int a[n],i,count=0,j=0,k=0;
 printf("Enter the numbers: ");
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  if(a[i]%2==0){
   count++;
  }
 }

 int even[count], odd[n-count];
 for(i=0;i<10;i++){
  if(a[i]%2==0){
   even[j]=a[i];
   j++;
  }
  else{
   odd[k]=a[i];
   k++;
  }
 }

 printf("The even numbers are: ");
 for(i=0;i<count;i++){
  printf("%d ",even[i]);
 }
printf("\n");
 printf("The odd numbers are: ");
 for(i=0;i<n-count;i++){
  printf("%d ",odd[i]);
 }
printf("\n");
 getch();
}
