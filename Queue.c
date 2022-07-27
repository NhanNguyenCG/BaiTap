#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#define true 1
#define false 0
#define bool uint8_t


bool IsEmpty (int front,int rear){
    if (front == 0 && rear ==0){
        return true;
    }else{
        return false;
    }

}
int front(int mang[],int capacity){
    int val,vt;
    for (int i = 0; i < capacity; i++)
    {
        if(mang[i]!= 0){
            val = mang[i];
           // printf("vi tri dau tien:%d\n",val);
            vt = i;
            break;
        }else{
            vt=0;
        }
    }  
    return vt;
}
int Rear (int mang[],int capacity){
    int val,vt;
    for (int i = capacity-1; i >= 0; i--)
    {
        if(mang[i]!= 0){
            val = mang[i];
            printf("vi tri dau cuoi:%d\n",val);
            vt = i;
            break;
        }else{
            vt = 0;
        }
    }  
    return vt;
}
int EnQueue(int mang[],int capacity,int val){
    int f,r;
    r = Rear(mang,capacity);
    f = front(mang,capacity);

    if(IsEmpty(f,r)==true){
        printf("the string empty");
    }else{
        for (int i = (capacity-1); i >=0; i--)
        {
            if (mang[r]== 0)
            {
                mang[r]= val;
                f++;
                break;
            }       
        }
    }
}
int DeQueue(int mang[],int capacity){
    int f,r;
    r = Rear(mang,capacity);
    f = front(mang,capacity);

    if(IsEmpty(f,r)==true){
        printf("the string empty");
    }else{
        for (int i = 0; i < capacity; i++)
        {
            if (mang[f]!=0)
            {
                mang[f]= 0;
                f++;
                break;
            }       
        }
    }
}
int main(){
    int a[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    DeQueue(a,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }

    printf("vitridautenla:%d\n",a[front(a,10)]);
    

} 
