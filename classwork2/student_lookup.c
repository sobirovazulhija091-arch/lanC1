#include <stdio.h>
typedef struct{
   int id;
   char name[100];
   char major[100];
}Students;
int main(void){
     Students student[] = {
        
        {1,"Maryam","AI"} , 
        {2,"Munavara","AI"},
        {3,"Oisha","CyberS"}
    
    };
     int id;
      scanf("%i",&id);
    int takesize = sizeof(student)/sizeof(student[0]);
     for(int i = 0;i<takesize;i++){
        if (student[i].id==id){
        printf("%s %s" , student[i].name , student[i].major);
    };
     };
     return 0;
}
//////////////////////////////////////////
//Buble

