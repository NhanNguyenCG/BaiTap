//ìm số lớn nhất, nhỏ nhất trong mảng, sắp sếp mảng theo thứ tự từ bé đến lớn, từ lớn đến bé
#include<stdio.h>

int nhapmang(int mang[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("nhap phan tu mang thu mang[%d]",i);
        scanf("%d",&mang[i]);
    }
    
}
int SNN(int mang[],int n ){
    int min;
    for (int i = 0; i < n; i++)
    {
        if (min>mang[i])
        {
            min = mang[i];
        
        }
        
    }
    
return min;
}
int SLN(int mang[],int n ){
    int max;
    for (int i = 0; i < n; i++)
    {
        if (max<mang[i])
        {
            max = mang[i];
        
        }
        
    }
    
return max;
}
void nhodenlon(int a[], int n){
    int i, j;
    int tam;
    for (i = (n-1); i >= 0; i--) {
        for (j = 1; j <= i; j++){
            if (a[j-1] > a[j]){
                tam = a[j-1];
                a[j-1] = a[j];
                a[j] = tam;
            }
        }
    }
} 
void lontoinho(int a[], int n){
    int i, j;
    int tam;
    for (i = (n-1); i >= 0; i--) {
        for (j = 1; j <= i; j++){
            if (a[j] > a[j-1]){
                tam = a[j-1];
                a[j-1] = a[j];
                a[j] = tam;
            }
        }
    }
}

int main (){
    int b;
    int a[1000];
    printf("nhap so phan tu cua mang\n");
    scanf("%d",&b);
    nhapmang(a,b);
    printf("so nho nhat la %d\n",SNN(a,b));
    printf("so nho nhat la %d\n",SLN(a,b));
    bubbleSort(a,b);
    for (int i = 0; i < b; i++)
    {
        printf("phan tu %d %d\n",i,a[i]);
    }
    lontonho(a,b);
    for (int i = 0; i < b; i++)
    {
        printf("phan tu %d %d\n",i,a[i]);
    }

    return 0;

}
