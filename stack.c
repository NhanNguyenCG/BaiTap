#include<stdio.h>
#include<stdlib.h>
#define max 50
struct stack
{
    int top;
    int data[max]
};
typedef struct stack bt;
void init(bt *s){
    s->top = 0;
}
int rong(bt s){
    return(s.top == 0);
}
int day(bt s){
    return(s.top == max);
}
void push(bt *s, int x){
    if(!day(*s)){
        s->top++;
        s->data[s->top]=x;
    }
}
int pop(bt *s, int *x){
    if(!rong(*s)){
        x = s->data[s->top];
        s->top--;
        
    }
    return x;
}
void input(bt *s){
    int n,x;
    do{
        printf("nhap so phan tu stack");
        scanf("%d",&n);
    }
    while (n>max||n<1);
    for (int i = 0; i < n; i++)
    {
        printf("nhap so phan tu thu %d",i);
        scanf("%d",&x);
        push(s,x);
    }        
}
void output(bt s){
    for (int i = s.top; i >0; i--)
    {
        printf("%d\n",s.data[i]);
    }
}
void popk(bt *s){
    bt tg;
    init(&tg);
    int x,i,k;
    printf("vi tri can xoa");
    scanf("%d",k);
    for (int i = s->top; i > k; i--)
    {
        pop(s,x);
        push(&tg,x);
    }
    pop(s,x);
    for ( i = tg.top; i > 0; i--)
    {
        pop(&tg,x);
        push(s,x);
    }
    printf("ngan xep sau khi xoa\n");
    output(*s);
    
}
int main(){
    bt s,tg;
    init(&s);
    input(&s);
    output(s);
    int x;
    printf("nhap pt chen vao stack\n");
    scanf("%d",&x);
    push(&s,x);
    output(s);
    printf("stack sau khi xoa\n");
    pop(&s,x);
    output(s);
    popk(&s);

}
    







