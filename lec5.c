#include <stdio.h>

int main(){

    int num=2456;
    int sum=0;
    while (num>0)
    { int lastDigit=num%10;
       sum=sum+lastDigit;
       num=num/10;
          
    }
    printf("%d",sum);
    

    // int i=0;
    // while (i<2)
    // {
    //    printf("hello");
    //    i++;
    // }
    



    //  int num=256;

    // printf("hello");
    // printf("hello");
    // printf("hello");
@@ -32,16 +56,44 @@ int main(){
    //     i++;
    //     /* code */
    // }
    int num=123;
    int sum=0;
    while (num>0)
    {
       int lastDigit=num%10;
       sum=sum+lastDigit;
       num=num/10;
    // int num=123;
    // int sum=0;
    // while (num>0)
    // {
    //    int lastDigit=num%10;
    //    sum=sum+lastDigit;
    //    num=num/10;
    // }
    // printf("%d",sum);
    // loop

    // printf("hello");
    // printf("hello");
    // printf("hello");
//    int sum=0;
//     for(int i=1;i<5;i++){
//         sum=sum+i;
       

        // printf("%d\n",i);

        // printf("hello\n");
        // printf("%d\n",i*2);
        // if(i%2==1){
        //     printf("%d\n",i);
        // }

    }
    printf("%d",sum);
    //  printf("%d",sum);
}
}