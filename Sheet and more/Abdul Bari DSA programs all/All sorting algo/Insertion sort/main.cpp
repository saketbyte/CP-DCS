#include<stdio.h>
int main(){
    int i, j, count, temp;

    scanf("%d",&count);
    int number[count];
    for(i=0;i<count;i++)
        scanf("%d",&number[i]);

    // you pick up the element and insert it at the position where it is supposed to be and then use the while loop for shifting
    // of the elements.
    for(i=1;i<count;i++){
        temp=number[i];
        j=i-1;
        while((temp<number[j])&&(j>=0)){
            number[j+1]=number[j];
            j=j-1;
        }
        number[j+1]=temp;
    }
    for(i=0;i<count;i++)
        printf("%d",number[i]);

    return 0;
}