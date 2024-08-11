#include<stdio.h>
void main()
{
    int n,i,num,a[100],mid,lb,hb,found=0;
    printf("Enter the no. of elements you want in an array:");
    scanf("%d",&n);

    printf("Enter the array elements:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Array elements are:");
    for(i=0; i<n; i++){
    printf("%d\n", a[i]);
    }

    printf("enter the searching number:");
    scanf("%d",&num);
    lb=0;
    hb=n-1;
    mid=(lb+hb)/2;

    for(i=0; i<n; i++){
        if(num==a[mid]){
        found=1;
        printf("%d is found at %d position",num,mid+1);
        break;
        }
        if(num<mid){
            hb=mid-1;
        }
        else if(num>mid){
            lb=mid+1;
        }
       
 mid=(lb+hb)/2;

    }
    if(found==0){
        printf("number is not found.");
    }
}

