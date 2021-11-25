#include<stdio.h>
int count[25];
 
int main(){
    int n,i,j,c=0,k,z;
    scanf("%d", &n);
    int ara[n], prime[100];
    for(i=2, j=0; i<100; i++){
        for(k=2; k<100; k++){
            if(i%k==0){
                break;
            }
        }
        if(i==k){
                prime[j]=i;
                j++;
            }
    }
    for(i=0; i<24; i++){
        if(prime[i]<=n){
            c++;
        }
    }
 
    for(i=0; i<n-1; i++){
        ara[i]=n-i;
    }
 
    for(i=0; i<n-1; i++){
        for(j=0; j<25; j++){
            if(ara[i]%prime[j]==0){
                z=ara[i];
                count[prime[j]]++;
                while(z%prime[j]==0){
                    z=z/prime[j];
                    if(z%2!=0)count[z]++;
                    else{count[prime[j]]++;}
                }
                break;
            }
        }
    }
    printf("%d!= ", n);
    for(i=0; i<c; i++){
        printf("(%d,%d)",prime[i],count[prime[i]]);
        if(i!=c-1)printf(",");
    }
 
 
return 0;
}
 
