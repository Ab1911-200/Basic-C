#include<stdio.h>
void main(){
    int A[30],n,search,i,flag=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d numbers",n);
        for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        printf("Enter the search data:");
        scanf("%d",&search);
        for(i=0;i<n;i++)
        {
            if(A[i]==search)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            printf("Search data not found");
            else
                printf("Search data found at index %d",i);

}
