#include<stdio.h>

int chieudai(char chuoi[]){
    int val=0;
    while(chuoi[val]!=0)
    {
        val ++ ;
    }
    return val;
    
}
 void Equal_string(char chuoi1[], char chuoi2[]){
    int xacnhan=0;
    if (chieudai(chuoi1)==chieudai(chuoi2))
    {
        for (int i = 0; i < chieudai(chuoi1); i++)
        {
            if(chuoi1[i]==chuoi2[i]){
                xacnhan++;       
            }else{
                printf("hai chuoi ko = nhau");
            }
        }
        if (xacnhan==chieudai(chuoi1))
        {
            printf("2 chuoi nay = nhau");
        }
        
    }else{
        printf("hai chuoi ko = nhau");
    }
    
    
    

}
int main(){
    char a[] ="nhan";
    char b[] ="nhann"; 
   Equal_string(a,b);
    
}