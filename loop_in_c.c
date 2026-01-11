#include<stdio.h>
int main(){
    //Attendence counter
int totalstudents, attendence;
int presentcount=0;
float percentage;

printf("Enter total number of students in a class:");
scanf("%d", &totalstudents);

for(int i=1; i<=totalstudents; i++){
    printf("Enter attendence for students %d(1 = present, 0 = absent):", i);
    scanf("%d", &attendence);

    if(attendence == 1)
    presentcount++;
    }

    percentage = (presentcount * 100) / totalstudents;

    printf("\nTotal students: %d", totalstudents);
    printf("\nPresent students: %d", presentcount);
    printf("\nAttendance percentage: %.2f", percentage);
    
//Mini Voting system
   int vote;
   int countA=0, countB=0, countC=0;

   do{
   printf("\nEnter your vote (1 for candidate A, 2 for candidate B, 3 for candidate C and 0 to exit):");
   scanf("%d", &vote);

   if(vote == 1){
    countA++;
   }
   if(vote == 2){
    countB++;
   } 
   if(vote == 3){
    countC++;
   }
}while(vote != 0);

if(countA > countB && countA > countC){
    printf("\nWinner is A");
}

else if(countB > countA && countB > countC){
    printf("\nWinner is B");
}

else{
    printf("\nWinner is C");
}
    return 0;
}
