
 #include <stdio.h>
 int main()
 {
     int ara[5];
     int i,j,minimum,min_indx,temp,k=0;

     for (i = 0; i < 5; i++) {
         scanf("%d", &ara[i]);
     }

        for(i=0;i<5;i++){
        minimum=9999;
        for(j=i;j<5;j++){
            if(ara[j]<minimum){
                minimum=ara[j];
                min_indx=j;
            }

        }
        if(min_indx!=k){

         temp=ara[min_indx];
         ara[min_indx]=ara[k];
         ara[k]=temp;

       }
          k++;

 }
  for (i = 0; i < 5; i++) {
         printf("%d\n", ara[i]);
     }
     return 0;
 }

