
#include"STD_TYPES.h"
#include"struct_Global.h"

/*
1-Add Patient
Description: This function is used by the admin to add a new patient to the record of the clinic

*Name  :    This pointer used for storing strings in array when passing name to it then it starts to copy each character and save in array and use this array as a name of patient  
 Age   :    This variable take a number and store it ,so admin can operate with this number as an age of patient 
*Gender:    This pointer used for storing strings in array when passing Gender(Male or Female) to it it starts to copy each character and save in array and use this array as a gender of patient  
id     :    This variable take a number and store it ,so admin can operate with this number as an ID of patient 
so     :    This variable take a number and store it ,so admin can operate with this number as an reservation of patient 

*/

void add_patient(u8 *Name,u32 Age,u8 *Gender, u32 id,u32 so);
/*
2-id_ckeck

Description: To check id,if any patient has same id the patient that admin added right now all information will be deleted 

*/
void id_ckeck(u32 id);
/*
3-id_exist

Description: To check id,if this any patient has same id that admin entered it give permission to admin to edit this id information 

*/
void id_exist(u32 id1);
/*
4-id_ckeck_slot

Description: To show admin avialble reservation and admin choose Suitable reservation for patient

*/
void id_ckeck_slot(u32 id2);
/*
5-id_ckeck3

Description: This function used for check for id and cancel reservation of this id  
*/
void id_ckeck3(u32 id);
/*
6-print
Description: This function to allow user to enter id then bring all inforamtion
*/
void print(u32 idu);
/*
7-delete
This function used to delete any information of patient.

*/
void delete();