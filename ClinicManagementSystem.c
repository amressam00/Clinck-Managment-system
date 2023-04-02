#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include"STD_TYPES.h"
#include"Function.h"

/*
 *  Created on: January 9, 2023
 *  Author: Amr Essam Ali
*/

typedef struct patient
{
	u8 name[20];
   u32 age;
    u8 gender[20];
   u32 ID;
   u32 slot;
   struct patient *next;
}patient;
patient *head;
u32 a=0,aa;
u32 b=0,bb;
u32 d=0,dd;
u32 e=0,ee;
u32 f=0,ff;
u32 c,w;
u32 so,id2,z=0;
void main ()
{
u32 x,n,y,z=0;
u32 co,pass,id1;
	printf("\n-------------------------------------------Welcome To Clinic Management System------------------------------------------\n");
////////////////////////////////Admin//////////////////////////////
do
{
	began:
printf("For Admin enter (1)\nFor User  enter (2)\nTo exit press   (3)\n");
scanf("%d",&n);
patient pt;
////////////////////////////////////admin/////////////////////////////////////////////////////////////
	        if(n==1)
			{
				printf("----------------------\n");
				printf("please enter password:");
				scanf("%d",&pass);
			while(pass!=1234&&z!=2)
				{
					printf("Wrong password please enter password again :\n");
					scanf("%d",&pass);
					z++;
				}
			if(z==2&&pass!=1234)
				{
					printf("You entered wrong password 3 times programme will stop (~_~)");
				}
			else if(pass==1234)/*--------->when password is true*/								  
				{	began2:														  							
					printf("---------------------------------------------\n");
					printf("To add new patient record enter         --1--\n");
					printf("To edit patient record enter            --2--\n");
					printf("To reserve a slot with the doctor enter --3--\n");
					printf("To cancel reservation enter             --4--\n");
					printf("Back Main Menu                          --5--\n");
					scanf("%d",&x);											  
					printf("---------------------------------------------\n");
		//1-To add new patient record//
			if(x==1)
				{ 
					printf("Please enter Name : ");
					scanf("%s",&pt.name);
					printf("Please enter Age : ");
					scanf("%d",&pt.age);
					printf("Please enter Gender : ");
					scanf("%s",&pt.gender);
					printf("Please enter ID : ");
					scanf("%d",&pt.ID);
					printf("slot : \n");
					add_patient(pt.name,pt.age,pt.gender,pt.ID,pt.slot);
					id_ckeck(pt.ID);
				  printf("---------------------------------------------\n");goto began2;
				}
		 //2-To edit patient record enter //
			else if(x==2)
				{
					printf("Please enter ID : ");
					scanf("%d",&id1);
					 id_exist( id1);
					 if(z==0)
					 {
						 printf("This ID does not exist\n---------------------------------------------\n");
					 }
					 z=0;goto began2;
				}
		 //3-To reserve a slot with the doctor  //
			else if(x==3)
				{
					printf("please enter id : ");
					scanf("%d",&pt.ID);
					id_ckeck_slot(pt.ID);
					printf("---------------------------------------------\n");goto began2;
				}
		//4-Cancel reservation  //
			else if(x==4)
				{				
				printf("Enter ID to Cancel reservation  : ");
				scanf("%d",&pt.ID);
				id_ckeck3(pt.ID);goto began2;;
				}
				else if(x==5)
				{goto began;}
			}
			}
////////////////////User////////////////////
         else if(n==2)
		 {
			 printf("Enter 1 to view patient record\nEnter 2 for view today reservations\n");
			 scanf("%d",&w);
			 printf("---------------------------------------------\n");
			 if(w==1)
			 {	 printf("Please enter ID : ");
					scanf("%d",&pt.ID);
		       print(pt.ID);
			   printf("---------------------------------------------\n");
			 }
			 if(w==2)
			{
			   printf("There are reservations available today :\n");
			 if(a==1)                                               
				{
					printf("1-> 2pm to 2:30pm -> ID= %d\n",aa);
				}
			if(b==1)
				{
					printf("2-> 2:30pm to 3pm ->ID= %d\n",bb);
				}
			if(d==1)
				{
					printf("3-> 3pm to 3:30pm ->ID= %d\n",dd);
				}
			if(e==1)
				{
					printf("4-> 4pm to 4:30pm ->ID= %d\n",ee);
				}
			if(f==1)
				{
					printf("5-> 4:30pm to 5pm ->ID= %d\n",ff);
				}
				if(a==0&&b==0&&e==0&&d==0&&f==0)
				{
					printf("No reservations.\n");
				}printf("---------------------------------------------\n");
	        }
		}
}while(n!=3&&z<2);
          if(n==3)
        {printf("Goodbye\n");}
}