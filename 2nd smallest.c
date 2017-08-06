#include<stdio.h>
#include<conio.h>

int main(){
       	
 int a[10],i;
 printf("Enter the numbers: ");
 for(i=0;i<10;i++){
  scanf("%d",&a[i]);
 }
 int first = a[0]; int second = a[1];

 for(i=2;i<10;i++){
  if(a[i]<first){
   second= first;
   first = a[i];
  }
  else if (a[i] > first && a[i]<second)
            second = a[i];
 }

 printf("%d",second);
 getch();
}
