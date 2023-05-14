#include<stdio.h>
int main(){
    int score=0,a,b;
    printf("Enter 1 if you wanna play the quiz\n");
    scanf("%d",&a);
    if(a==1){
        printf("Q:1) Who is the most succesful player in IPL?\n\n");
            printf("1)Virat Kohli\n");
            printf("2)MS Dhoni\n");
            printf("3)Rohit Sharma\n");
            printf("4)Shikhar Dhawan\n");
            
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is correct\n");
                score=score+5;
                printf("your score is %d\n\n",score);
            }
            else{
                printf("You are wrong\n");
                printf("Your score is %d\n\n",score);
            }
        
         printf("Q:2) Who is the G.O.A.T. of cricket?\n\n");
            printf("1)Virat Kohli\n");
            printf("2)MS Dhoni\n");
            printf("3)Rohit Sharma\n");
            printf("4)Shikhar Dhawan\n");
            
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is correct\n");
                score=score+5;
                printf("your score is %d\n\n",score);
            }
            else{
                printf("You are wrong\n");
                printf("Your score is %d\n\n",score);
            }
            
         printf("Q:3) Who has the most number of followers on instagram?\n\n");
            printf("1)Virat Kohli\n");
            printf("2)MS Dhoni\n");
            printf("3)Rohit Sharma\n");
            printf("4)Shikhar Dhawan\n");
            
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is correct\n");
                score=score+5;
                printf("your score is %d\n\n",score);
            }
            else{
                printf("You are wrong\n");
                printf("Your score is %d\n\n",score);
            }
            
         printf("Q:4) Who is the king of cricket?\n\n");
            printf("1)Virat Kohli\n");
            printf("2)MS Dhoni\n");
            printf("3)Rohit Sharma\n");
            printf("4)Shikhar Dhawan\n");
            
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is correct\n");
                score=score+5;
                printf("your score is %d\n\n",score);
            }
            else{
                printf("You are wrong\n");
                printf("Your score is %d\n\n",score);
            }
            
         printf("Q:5) Who is called the king of cricket?\n\n");
            printf("1)Virat Kohli\n");
            printf("2)MS Dhoni\n");
            printf("3)Rohit Sharma\n");
            printf("4)Shikhar Dhawan\n");
            
            scanf("%d",&b);
            if(b==1){
                printf("Your answer is correct\n");
                score=score+5;
                printf("your score is %d\n\n",score);
            }
            else{
                printf("You are wrong\n");
                printf("Your score is %d\n\n",score);
            }
        
        printf("You have completed the quiz");
    }
    
    else{
        printf("If you don't want to play then tap enter two times\n");
    }
}
