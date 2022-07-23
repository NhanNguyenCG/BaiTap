#include<stdio.h>
#include<stdint.h>
#include<string.h>

int test_strtod(char str[]) {
    int val=0;
   for(int i=0; str[i] != '\0' ;i++){
    if (str[i]>47 && str[i]<58){
        
        val = val*10+(str[i]-48);
    }

  }
    return val;

}
int main(int argc, char const *argv[])
{
    char str[100];
    
    strcpy(str, "hello 01234560789 world ");
 
    printf("%s\n",str);
   
    printf("%d\n",test_strtod(str));
    
    return 0;
}  