#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

int i,decimal,len,dec=0,k,z;
scanf("%d",&decimal);

for(i=0;pow(2,i)<=decimal;i++){
len=i;
}


k=len;
int binary[100];


for(i=0;i<=k;i++){

    z= dec+=pow(2,len);

      if(z<=decimal){
      binary[i]=1;
      len--;
}

else{
     binary[i]=0;
     dec-=pow(2,len);
     len--;

}

}

for(i=0;i<=k;i++){
   printf("%d",binary[i]);
}

return 0;
}



