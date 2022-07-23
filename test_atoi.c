#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>

int luythua(int a, int b) {
    int result = 1;
    for(int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
 }

int test_atoi(char const* string ){
    int val = 0, mu =0;
    int mang[sizeof(string)];
    for (int i = ((strlen(string))-1); i >= 0; i--)
    {
        val = val + ((string[i]-48)*luythua(10,mu));
        mu++;
        
    }
    return val;
}
int main(){
    char a[8];
    strcpy(a,"1234567");
    printf("so la: %d\n",test_atoi(a));
    //printf("a la: %s\n",mang[20]);

    
}