#include <stdio.h>
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=5,y=10;
    printf("before swaping :\n ");
    printf("x=%d,y=%d \n",x,y);
    swap(&x,&y);
    printf("after swap \n");
    printf("x=%d,y=%d \n",x,y);
}