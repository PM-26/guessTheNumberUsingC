#include<stdio.h>

int main(){
    int guessed;
    int counter=1;
    srand(time(0));
    int number=rand()%100+1;
    // printf("The number is %d.\n",number);

    do{
        printf("Enter a number between 1-100 only.\n");
        scanf("%d",&guessed);
        if(guessed>number){
            printf("Decrease your number.");
        }
        else if(guessed<number){
            printf("Increase your number.");
        }
        else{
            printf("You guessed the number in %d attempts.\n",counter);
        }
        counter=counter+1;
    }
    while(guessed!=number);
    return 0;
}
