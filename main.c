#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include"p_header.h"
#define uint8  int

int main()

{

    uint8 student_idd, check_id ,id_entery,id_delete;
uint8 student_yyear;
uint8 courses_ids[3]={0};
uint8 courses_grades[3]={0};
uint8 year=0,cids[3]={0},cgrads[3]={0};
uint8 id_list [i];
    uint8 c,x,z;

do{
   printf("type 1: to add your data\n 2:to delete data\n3:display entry with your id data\n4:to get the size of your entreys\n5:to get ids list\n6:to check if your id exists\n7:to know if data_enteries is full or not\n0:to exit\n");

      scanf("%d",&c);
switch (c){
case 1:
    printf("enetr your id\n");
    scanf("%d",&student_idd);
 printf("enetr your year\n");
    scanf("%d",&student_yyear);
     printf("enetr your coursess_id\n");
    scanf("%d",&courses_ids[0]);
    scanf("%d",&courses_ids[1]);
    scanf("%d",&courses_ids[2]);
    printf("enetr your coursess_grades from(0->100)\n");
    scanf("%d",&courses_grades[0]);
    scanf("%d",&courses_grades[1]);
    scanf("%d",&courses_grades[2]);
       printf ("%d\n",add_entery (student_idd , student_yyear , courses_ids,courses_grades ));
       break;
case 2:
     printf("enetr your id to be deleted\n");
     scanf("%d",&id_delete);
     printf("%d\n",delete_entery( id_delete));

     break;

case 3:
printf("enter the id of your entry to be displayed\n");
scanf("%d",&id_entery);
z=read_entery( id_entery,&year, cids, cgrads );
 printf("%d\n", z);
 printf(" your id =%d\n",id_entery);
 if (z==1){
 printf("here is data of your id\n");
printf(" year:%d\n",year);
for (int k=0 ;k<3;k++){
    printf(" course id(%d): %d\n", (k+1),cids[k]);


}
for (int k=0 ;k<3;k++){

  printf(" courses grade(%d) %d\n",(k+1),cgrads[k]);

} }
else {printf("your id does not exist\n"); }

break;

case 4:
    printf("%d\n",getsize());
   break;
case 5:
    if (i>0){
 get_id_list(&i,id_list) ;
 for (int k=0 ;k<i;k++){

  printf("%d\n",id_list[k]);

} }
else printf("your data entery is empty\n");
break;
case 6:
    printf("enter id to check if it is exist or not\n");
    printf("you will get 1 if exists and 0 if does not exits\n ");
    scanf("%d",&check_id);
    printf("%d\n",is_id_exists(check_id));
break ;
case 7:
    printf("you will get 1 if your data enteries is full and you will get 0 if in is not full\n ");
    printf("%d\n",SDB_isfull());
    break;


}

}while(c!=0);


  return 0;
}
