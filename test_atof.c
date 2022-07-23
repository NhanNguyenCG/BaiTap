//chuyen chuoi ki tu thanh kieu so thuc
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>

float luythua(float a, float b) {
    int result = 1;
    for(int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
 }
 int vitridaucham(char const* string){
    int i;
    for (i = 0; i < strlen(string); i++)
    {
        if(string[i]=='.'){
            //printf("i la %d\n",i);
            break;
        }
    }
    
    return i;
 }

float test_atof(char const* string ){
    float nguyen = 0, thapphan = 0; 
    float mu =1,n=0;
    float mang[sizeof(string)];
    
    for (int i = (vitridaucham(string)+1); i< strlen(string); i++)
    {
        thapphan = thapphan + ((string[i]-48)/luythua(10,mu));
        mu++;
        printf("le la: %f\n",thapphan);
    }
    printf("tong le la: %f\n",thapphan);
    for (int i = ((vitridaucham(string))-1); i>=0; i--){
        nguyen = nguyen + ((string[i]-48)*luythua(10,n));
        n++;
    }
    float kq =nguyen+thapphan;
    printf("tong chan la: %f\n",nguyen);
    return kq;
}
int main(){
    char a[8];
    strcpy(a,"1237.11");
    printf("so la: %f\n",test_atof(a));
    printf("a la: %f\n",(0.555+1));
    //printf("return%d\n",phannguyen(a));

    
}