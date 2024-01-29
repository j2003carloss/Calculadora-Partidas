#include <stdio.h>
#include<conio.h>

 int sum( int victory , int defeat) {
        int calculation ;
        calculation = victory - defeat ;

        return calculation;
        
 }

 int main(void)
 
 {
        int victory, defeat,calculation;
        

         printf("Enter your wins:");
         scanf("%d",&victory);
         printf("Enter your defeat:");
         scanf("%d",&defeat);
          
          calculation = sum (victory,defeat);

        if(victory < 10){
                printf("O Herói tem um saldo de %d está no nível de ferro",calculation);
        }else if(victory >= 11 && victory <= 20 ){
                printf("O Herói tem um saldo de %d está no nível de Bronze",calculation);
        }else if( victory >= 21 && victory <= 50 ){
                printf("O Herói tem um saldo de %d está no nível de Prata",calculation);
        }else if(victory >= 51 && victory <= 80){
                printf("O Herói tem um saldo de %d está no nível de Ouro",calculation);
        }else if( victory >= 81 && victory <= 90){
                printf ("O Herói tem um saldo de %d está no nível de Diamante",calculation);
        }else if( victory >= 91 && victory <= 100){
                printf("O Herói tem um saldo de %d está no nível de Lenario\n",calculation);
        }else if( victory > 101){
                printf(" O Herói tem um saldo de %d está no nível de Imortal\n",calculation);
        }



        getch();
        return 0;


}
