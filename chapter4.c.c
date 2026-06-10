#include <stdio.h>
//loop control instructions
int main() {
    //print happy birthday 1 lakh times
    int i = 0;
    while(i < 100000){
        printf("Happy Birthday\n");
        i = i + 1;
    }
    return 0;
}

//While loop
#include <stdio.h>

int main() {
    int i = 0;
    while(i<4){
        printf("Happy Birthday!\n");//prints this statement 4 times as 0123 is less than 4
        
        i = i + 1;
    }
    return 0;
}

//While values
#include <stdio.h>

int main() {
    int i = 0;
    while(i<10){
    printf("The value of i is %d\n",i);
    i ++;//prints i first and then increments i (post-increment operator)
    }
    return 0;
}
//infinite loop
#include <stdio.h>

int main() {
    int i = 0;
    while(2<10){
    printf("The value of i is %d\n",i);
    i++;//this is also an infinte loop as condition is true
    }
    return 0;
}
//This is an infinite loop 

/*Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
/**/
#include <stdio.h>

int main() {
    int i = 0;

    while(i <= 20) {
        if(i >= 10) {
            printf("The value of i is %d\n", i);
        }
        i++;
    }

    return 0;
}
//Increment Decrement operator

#include <stdio.h>

int main() {
    int i = 5;
    printf("The Value of i is %d\n",i);

    i = i + 5;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n", i++);//10
    printf("The value of i is %d\n", i);//11
    i += 2;//as same as i = i + 2
    printf("The value of i is %d\n", i);//13
    i -= 3;//same as i = i - 3
    printf("The value of i is %d\n", i);
    //i++ prints i first and then Increments i (Post increment operator)
    //++i increments i  first and then prints i (Post increment operator)
        return 0;
}
/*| Operator | Example   | Meaning      |
| -------- | --------- | ------------ |
| `=`      | `a = 5;`  | Assign value |
| `+=`     | `a += 3;` | `a = a + 3`  |
| `-=`     | `a -= 3;` | `a = a - 3`  |
| `*=`     | `a *= 3;` | `a = a * 3`  |
| `/=`     | `a /= 3;` | `a = a / 3`  |
| `%=`     | `a %= 3;` | `a = a % 3`  |
*/
//
//Do while loop

#include <stdio.h>
int main() {
    int i = 0;
    do {
        printf("The value of i is %d\n", i);
        i++;
    } while (i < 4);
    return 0;
}

//QUIZ-2
#include <stdio.h>
int main() {
    int  n,i = 1;
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
        } while (i <= n);
    
    
    return 0;
}

//For loop
#include <stdio.h>
//For loop syntax
//for(initialization; condition; updation){
//    //body of loop
int main() {
    int n = 6;
    for (int i = 1; i < n; i++) {
        printf("The value of i is %d\n", i);
    }
    return 0;
}

//QUIZ-3
#include <stdio.h>

int main() {
    int n = 12;
    for(int i = 1; i <= n; i++){
        printf("%d\n",i);
    }
    return 0;
}

//Decrementing For loop
#include <stdio.h>

int main() {
    int n = 12;
    for(int i = n; i > 0; i--){
        printf("%d\n",i);
    }
    return 0;
}

//Break statement & Continue statements
#include <stdio.h>

int main() {
    for(int i = 0; i < 15; i++){
         if(i == 5){
    // continue;//skips the current iteration and moves to the next iteration
    //break;// breaks exit the loop now!
    }
    printf("i is %d\n",i);
    }
    printf("Loop ended\n");
   return 0;
}