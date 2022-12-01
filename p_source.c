#include<stdbool.h>
#define uint8  int
uint8 i=0;
typedef struct simpledp{
uint8 student_id ;
uint8 student_year;
uint8 courses_id[3] ;
uint8 courses_grade[3];

} simppl;
 simppl arr [11];

bool SDB_isfull(void){

if(i>=10){return 1;}
  else {return 0;}

}
int getsize(void){
    return i;
}
bool add_entery ( uint8 student_id2 ,uint8 student_year2 ,uint8* courseid,uint8* coursegrade )
{  if (i>=10)  {  printf("your data entyries is full\n");
return 0;} //array is full
else {
//ptr=&arr;
//int x=0;
simppl *ptr=arr ;
(ptr+i)->student_id = student_id2;
(ptr+i)->student_year = student_year2;
(ptr+i)->courses_id[0]=courseid[0];
(ptr+i)->courses_id[1]=courseid [1];
(ptr+i)->courses_id[2]=courseid[2];
(ptr+i)->courses_grade[0]=coursegrade[0];
(ptr+i)->courses_grade[1]=coursegrade[1];
(ptr+i)->courses_grade[2]=coursegrade[2];



i++;

return 1;

}
}
bool delete_entery(  uint8 student2_id){
int x;
if (i<0) return 0; //array is empty
else{
   for ( int m =0 ;m<i;m++){
    if (arr[m].student_id==student2_id)
    x=m;

   }

for (int j =x ; j<10;j++){
  arr[j].student_id = arr[j+1].student_id;
arr[j].student_year = arr[j+1].student_year;
arr[j].courses_id[0]=arr[j+1].courses_id[0];
arr[j].courses_id[1]=arr[j+1].courses_id[1];
arr[j].courses_id[2]=arr[j+1].courses_id[2];
arr[j].courses_grade[0]=arr[j+1].courses_grade[0];
arr[j].courses_grade[1]=arr[j+1].courses_grade[1];
arr[j].courses_grade[2]= arr[j+1].courses_grade[2];

}
i--;
return 1;

}


}
bool read_entery( uint8 id ,uint8*year, uint8*courseid, uint8*coursegrade  ){
int x,m;
   for ( m =0 ;m<i;m++)
   {
    if (arr[m].student_id==id)
        {
x=m;
*year =arr[x].student_year;
for(int j =0 ;j<3;j++){
 *(courseid+j) =arr[x].courses_id[j] ;
 *(coursegrade+j) =arr[x].courses_grade[j] ;
}

return 1;

}

}


for ( int m =0 ;m<i;m++){
    if (arr[m].student_id!=id)
   return 0;
   }



}

void get_id_list (uint8*num_list, uint8 *id_list ){

for (int k =0;k<(*num_list );k++){
id_list[k]=arr[k].student_id;

}

}
bool is_id_exists(uint8 id ){
  for ( int m =0 ;m<i;m++){
    if (arr[m].student_id==id)
   return 1;
}
for ( int m =0 ;m<i;m++){
    if (arr[m].student_id!=id)
   return 0;
   }


}
