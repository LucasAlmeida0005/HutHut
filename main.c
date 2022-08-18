#include <stdio.h>


int main() {

    int T,N,i,j=0;
    int L1, L2, L3, L4, R4, R3 ,R2 ,R1;
    int cont = 0, cont2 = 0, contleft = 0, contright = 0;

    scanf("%d",&T); // tackle médio
    if(T<1 || T>30){
        return 0;
    }

    scanf("%d",&N); // quantidade de leituras fotométricas
    if(N<1 || N>50){
        return 0;
    }

    for(i=0; i<N; i++){

         // leitura do tackle médio dos defensores

           scanf("%d",&L1);
        if(L1<0 || L1>10){
            return 0;
        }
           scanf("%d",&L2);
        if(L2<0 || L2>10){
            return 0;
        }
           scanf("%d",&L3);
        if(L3<0 || L3>10){
            return 0;
        }
           scanf("%d",&L4);
        if(L4<0 || L4>10){
            return 0;
        }
           scanf("%d",&R4);
        if(R4<0 || R4>10){
            return 0;
        }
           scanf("%d",&R3);
        if(R3<0 || R3>10){
            return 0;
        }
           scanf("%d",&R2);
        if(R2<0 || R2>10){
            return 0;
        }
           scanf("%d",&R1);
        if(R1<0 || R1>10){
            return 0;
        }

           j++;

           if (L1 < T) {
               cont++;
           }
           else if (L2 < T) {
               cont++;
           }
           else if (L3 < T) {
               cont++;
           }
           else if (L4 < T) {
               cont++;
           }
           else if (R4 < T) {
               cont2++;
           }
           else if (R3 < T) {
               cont2++;
           }
           else if (R2 < T) {
               cont2++;
           }
           else if (R1 < T) {
               cont2++;
           }


           if(cont >= 3 || cont2 >= 3) {

               if((R1 > L1) && (R2 > L2) && (cont>=3 && cont2>=3) && (R1<T && R2<T)){
                   printf("LEFT SIDE!\n");
               }
               else if (cont2 >= 3 && ((R1 < T) && (R2 < T))) {

                   printf("RIGTH SIDE!\n");
                   contright++;
               }else {
                   if (cont >= 3 && ((L1 < T) && (L2 < T))) {

                       printf("LEFT SIDE!\n");
                       contleft++;
                   } else {
                       printf("NO PERFORM!!!\n");
                   }
               }
           }else{
               printf("NO PERFORM!!!\n");
           }

           cont=0;
           cont2=0;


    }
    if (contleft==0 && contright ==0) {

        printf("WEAK SIDE!!! BOTH SIDE!!!\n");
    }

    if(contleft > contright){
        printf("LEFT SIDE!!! THE STRONG SIDE!!!\n");
    }
    if(contleft < contright){
        printf("RIGTH SIDE!!! THE STRONG SIDE!!!\n");
    }
    return 0;
}




/*

int main() {

    int T,N,i,j;
    int L[4], R[4];
    int cont = 0, cont2 = 0, contleft = 0, contright = 0;

    scanf("%d",&T); // tackle médio
    if(T<1 || T>30){
        return 0;
    }

    scanf("%d",&N); // quantidade de leituras fotométricas
    if(N<1 || N>50){
        return 0;
    }

    for(j=0; j<N; j++){

        // leitura do tackle médio dos defensores

        for(i=0; i<4; i++){
            scanf("%d",&L[i]);
            if(L[i]<0 || L[i]>10){
                return 0;
            }
            else if(L[i]<T) {
                cont++;
            }
        }
        for(i=3;i>=0;i--){
            scanf("%d",&R[i]);
            if(R[i]<0 || R[i]>10){
                return 0;
            }
            if(R[i]<T) {
                cont2++;
            }
        }

        if(cont >= 3 || cont2 >= 3) {

           if(((R[0]<T && R[1]<T) && (R[0] > L[0]) && (R[1] > L[1])) && (cont>=3 && cont2>=3)){
               printf("LEFT SIDE!\n");
           }
            else if (cont2 >= 3 && ((R[0] < T) && (R[1] < T))) {

                printf("RIGTH SIDE!\n");
                contright++;
            }else {
                if (cont >= 3 && ((L[0] < T) && (L[1] < T))) {

                    printf("LEFT SIDE!\n");
                    contleft++;
                } else {
                    printf("NO PERFORM!!!\n");
                }
            }
        }else{
            printf("NO PERFORM!!!\n");
        }

        cont=0;
        cont2=0;


    }
    if (contleft==0 && contright ==0) {

        printf("WEAK SIDE!!! BOTH SIDE!!!\n");
    }

    if(contleft > contright){
        printf("LEFT SIDE!!! THE STRONG SIDE!!!\n");
    }
    if(contleft < contright){
        printf("RIGTH SIDE!!! THE STRONG SIDE!!!\n");
    }
    return 0;
    7 5 8 9 8 9 4 1
    7 8 3 9 9 4 8 1
    9 3 4 2 4 9 6 10
    5 8 2 5 5 6 8 3
    6 8 2 10 1 3 5 10
}
*/