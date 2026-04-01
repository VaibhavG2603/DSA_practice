# include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,4,2,5,6,1,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=6;
    int index = linearsearch(arr,size, element);
    printf("The element is found %d at index %d\n",element,index);
    return 0;
}