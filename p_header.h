#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "p_source.c"
#ifndef HEADER_PROJECT_H_INCLUDED
#define HEADER_PROJECT_H_INCLUDED


_Bool SDB_isfull(void);

int getsize(void);

bool add_entery ( uint8 student_id2 ,uint8 student_year2 ,uint8* courseid,uint8* coursegrade );
_Bool delete_entery(  uint8 student2_id);
_Bool read_entery( uint8 id ,uint8*year, uint8*courseid, uint8*coursegrade  );

void get_id_list (uint8*num_list, uint8 *id_list );

_Bool is_id_exists(uint8 id );



#endif // HEADER_PROJECT_H_INCLUDED
