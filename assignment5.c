#include<stdio.h>

int main(){
    int A[10][10],B[10][10],C[10][10];
    int i,j,r,c,choice;

    printf("enter rows and columns: ");
    scanf("%d %d",&r,&c );

    printf("Enter matrix A:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the matrix B:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&B[i][j]);
        }
    }
    do{
        printf("\n1.Adiition\n2.Saddle Point\n3.Inverse\n4.Magic Square\n5.Exit\n");
        printf("Enter Choice");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            printf("addition\n");
             for(i=0;i<r;i++) {
                for(j=0;j<c;j++) {
                    C[i][j] = A[i][j] + B[i][j];
                    printf("%d ", C[i][j]);
                }
                printf("\n");
             }
            
            case 2:
            printf("saddle point")

            int min,col,count=0;
            
            for(i=0;i<r;i++){
                min=A[i][0];
                col=0;

                for(j=1;j<c;j++){
                    if(A[i][j]<min){
                    min=A[i][j];
                    col=j;
                }
                }
                for(j=0;j<r;j++){
                    if(A[j][col]>min)
                    break;  
                }
                if(j==r){
                    printf("Saddle point: %d\n",min);
                    count++
                }
            }
            if(count==0))
            printf("No saddle point\n");


            case 3:
            printf("magic square\n");
            

                      
        }
    }
}