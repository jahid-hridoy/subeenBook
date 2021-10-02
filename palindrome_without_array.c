#include<stdio.h>
#include<string.h>

int main(){

 char ar[80];
 int i,j,len,flag=0;

 gets(ar);
 len=strlen(ar);
for(i=0;i<len/2;i++){
    if(ar[i]!=ar[len-1-i]){
        flag=1;
    }
}

if(flag==1){
    printf("not");
}
else{
    printf("yes");
}
}
