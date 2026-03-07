# include<stdio.h>
void display(int arr[],int size){
    for (int i = 0; i < size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
 int insertion(int arr[],int size,int element,int index,int capacity){
    if (size>=capacity)
    {
        return -1;
    }
       arr[index]=element;
       return 1;
    
 }

int main(){
    int arr[100]={10,20,30,40,50};
    int size=5,element=60,index=5,capacity=100;
    display(arr,size);
    int result=insertion(arr,size,element,index,capacity);
   
    if (result==1)
    {
        size+=1;
        display(arr,size);
    }
    else{
        printf("Insertion Failed...");
    }
    
    return 0;
}