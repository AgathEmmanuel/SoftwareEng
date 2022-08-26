#include<bits\stdc++.h>
using namespace std;

void exchange(int *a,int *b){
    int e;
    e=*a;
    *a=*b;
    *b=e;
}

int main(){
    int f,g,h,i;
    scanf("%d %d %d %d",&f,&g,&h,&i);
    for(int x=1;x<=4;x++){
        if(f<g){exchange(&f,&g);}
        if(g<h){exchange(&g,&h);}
        if(h<i){exchange(&h,&i);}}
    printf("%d %d %d %d",f,g,h,i);
    return 0;
        
    
}
