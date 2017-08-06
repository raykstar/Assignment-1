#include<stdio.h>
int insert(int a[],int no,int pos,int size);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    int i, arr[size+1];
    printf("Enter the elements: ");
    for(i=0;i<size;i++){
     scanf("%d",&arr[i]);   
    }
    
    int pos, no;
    printf("Enter the element you want to enter and the position: ");
    scanf("%d %d",&no,&pos);
    
    if(pos>size+1){
        printf("Error.\n");
        return 1;
    }
    
    insert(arr,no,pos,size);
    }
    
int insert(int a[],int no,int pos,int size){
int i;    
 for(i=size+1;i>=0;i--){
     if(i>pos-1){
         a[i]=a[i-1];
     }
     else if(i==pos-1){
      a[i]=no;   
     }
     
     }
printf("The updated array is: ");
for(i=0;i<size+1;i++){
    printf("%d   ",a[i]);
}
printf("\n");
     return 0;
}
 
