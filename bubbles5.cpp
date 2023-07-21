#include<stdio.h>

int main()
{
    int a[10],i,j,k,n,temp;

    printf("\nENTER THE Number of elements : ");
    scanf("%d",&n);

    printf("\nENTER ARRAY NO. : ");
    for(i=1;i<=n;i++)
            scanf("%d",&a[i]);

    printf("elements are : ");
    for(i=1;i<=n;i++)
        printf("\t%d",a[i]);
        
    for(i=1;i<n;i++)
        { 
            
            for(j=0;j<n-i;j++)
                {
                    if(a[j]>a[j+1])
                        {
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;

                        }
                }
        }
            printf("\n\n\n\nelements are : ");
            for(i=1;i<=n;i++){
            printf("\t%d",a[i]);
 			}



    return 0;
}

