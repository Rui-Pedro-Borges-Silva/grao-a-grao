
#include <stdio.h>
int main(){
    int n1 ,n2, comp = 0, seq1 , compM = 1, seq1_compM = 1;

    scanf("%d %d", &n1 ,&n2);

    seq1 = n1;

    while(1){
       

        if ( n2 == n1 + 1 ){
            comp++;
        }

        else {
            if (comp > compM){

                compM = comp;
                seq1_compM = seq1;

            }

            comp = 1;

            if(n2 == 0)
                break;

            seq1 = n2;

        }


        n1 = n2;
        scanf("%d",&n2);


        

    }
    printf("o comprimento e : %d\n" ,compM );
    printf("primeiro numero e : %d\n" ,seq1_compM);

    
   return 0;
}
