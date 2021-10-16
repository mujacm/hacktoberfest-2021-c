#include<stdio.h>
#include<string.h>
#include<conio.h> 
  int main() { 
  char quest [5][100];
  char optionl [3][20],option2 [3][20], 
  option3 [3][20],option4 [3][20], 
  option5 [3][20]; 
  int response[5], correct_ans[5], option,i, marks;  
   
  strcpy(quest[0], "Name the capital of India");  
  strcpy (optionl [0],"1. Mumbai");  
  strcpy(optionl[1] ,"2. New Delhi");  
  strcpy(optionl[2] ,"3. Chennai");  
  correct_ans[0] = 1;  
  strcpy(quest[1], "Name the national bird of India");  
  strcpy(option2 [0],"1. Peacock");  
  strcpy(option2[1], "2. Sparrow");  
  strcpy(option2[2],"3. Parrot");  
  correct_ans[1]=0;  
  strcpy(quest[2], "Name the First Prime minister of India");  
  strcpy(option3 [0],"1. M D Gandi");  
  strcpy(option3[1] ,"2. S D Sharma");  
  strcpy(option3 [2],"3. J L Nehru");  
  correct_ans[2]=2;  
  strcpy(quest[3], "Name the first female president of India");  
  strcpy(option4 [0],"l. Pratibha Patil");  
  strcpy(option4[1] ,"2. Sonia Gandhi");  
  strcpy(option4[2] ,"3. Indira Gandhi");  
  correct_ans[3] = 0;  
  strcpy(quest[4], "Name the youngest prime minister of India");  
  strcpy(option5[0],"l. Rajiv Gandhi");  
  strcpy(option5[1], "2. Sanjay Gandhi");  
  strcpy(option5[2],"3. Rahul Gandhi");  
  correct_ans[4] = 0; 
  do {  
    printf("\n\n\n\n QUIZ PROGRAM"); 
    printf("\n*******************");  
    printf("\n 1. Display Questions");  
    printf("\n 2. Display Correct Answers");  
    printf("\n 3. Display Result");  
    printf("\n 4. EXIT");  
    printf ("\n *************************");  
    printf("\n\n\n Enter your option: ");  
    scanf("%d", &option);  
    switch(option)  {  
       case 1:    
           printf ("\n %s \n", quest [0]);   
           for(i=0;i<3;i++)   {   
              printf("\n %s", optionl[i]);   
           }   
           printf ("\n\n Enter your answer number: ");   
           scanf("%d", &response[0]);   
           printf ("\n %s \n", quest [1]);   
           for (i=0;i<3;i++)   {   
             printf("\n %s", option2[i]);   
           }   
           printf("\n\n Enter your answer number: ");   
           scanf("%d", &response[1]);   
           printf("\n %s \n", quest[2]);  
           for(i=0;i<3;i++)  {   
             printf("\n %s", option3[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [2]);   
           printf("\n %s \n", quest[3]);  
           for (i=0;i<3;i++)  {   
              printf("\n %s", option4[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [3]);   
           printf("\n %s \n", quest[4]);  
           for (i=0;i<3;i++)  {   
               printf("\n %s", option5[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [4] );   
           break;  
       case 2:   
           printf("\n\n CHECK THE CORRECT ANSWERS");   
           printf("\n ************************");   
           printf("\n %s \n %s",quest[0] ,optionl[correct_ans[0]]);   
           printf("\n\n %s \n%s",quest[1] ,option2[correct_ans[1]]);   
           printf("\n\n %s \n%s",quest[2] ,option3[correct_ans[2]]);   
           printf("\n\n %s \n%s",quest[3] ,option4[correct_ans[3]]);   
           printf("\n\n %s \n%s",quest[4] ,option5[correct_ans[4]]);   
           break;  
       case 3:   
           marks = 0;  
           for(i = 0;i <= 4;i++)  {   
             if(correct_ans[i]+1==response[i])   {   
                marks++;   
             }  
           }   
           printf ("\n Out of 5 you score %d",marks);   
           break;  
    }  
  }  
      while(option!=4);  
      getch();  
      return 0; 
}
