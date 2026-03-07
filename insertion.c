# include<stdio.h>
void display(int arr[],int size){
    for (int i = 0; i < size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
 int insertion(int arr[],int size,int element,int index,int capacity){
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 0;
    
 }

int main(){
    int arr[100]={7,8,12,27,33};
    int size=5,element=45,index=3,capacity=100;
    display(arr,size);
    insertion(arr,size,element,index,capacity);
    size+=1;
    display(arr,size);
    return 0;
}