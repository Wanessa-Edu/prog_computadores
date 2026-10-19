#include <stdio.h>

int main ()
{

    for (int i = 0; i <= 5; i++){
        if (i %2 == 0){
            printf("%i eh par\n", i);
        }  else{
            printf("%i eh impar\n", i);
        }
    }

    return 0;
}