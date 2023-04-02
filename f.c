#include <stdio.h>
#include"def.h"
#include<STD_TYPES.h>
#include<string.h>
void add_patient(u8 *Name,u32 Age,u8 *Gender, u32 id,u32 so);
void id_ckeck(u32 id);
void id_exist(u32 id1);
void id_ckeck_slot(u32 id2);
void id_ckeck3(u32 id);
void print(u32 idu);
void delete();
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
		 //3-To reserve a slot with the doctor enter  //
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
/////////////////////////////////////////////////////all function here////////////////////////////////////////////////////////////
///////////////To add patient/////////////////////////
						void add_patient(u8 *Name,u32 Age,u8 *Gender, u32 id,u32 so)
									{		u32 i;
											c++;
										   patient *pn=(patient *)malloc(sizeof(patient));
											for(i=0;i<19;i++)
											{
												pn->name[i]=Name[i];
											}
										pn->age=Age;
											for(i=0;i<19;i++)
											{
												pn->gender[i]=Gender[i];
											}
										pn->ID=id;
										pn->slot=so;
										pn->next=NULL;
											 if(head==NULL)
											 {
												 head=pn;
											 }
											 else
											 {
												patient *temp1;
												 temp1=head;
												 head=pn;
												 pn->next=temp1;
											 }
									}
						void id_ckeck(u32 id)
									{
											patient *p=head->next;
											while(p!=NULL)
											{
											if(p->ID==id)
											{ 
												printf("ID is found this informarion will be deleted.\n");
												delete();
												break;
											}
											p=p->next;
											}		
									}
						void id_exist(u32 id1)
									{	
											patient *p=head;
											while(p!=NULL)
											{
											if(p->ID==id1)
											{ z++;
												printf("This id exist\n");
												printf("=====================\n");
												printf("This is all information about ID:%d \n",id1);
												printf("Name= %s\n",p->name);
												printf("Age= %d\n",p->age);
												printf("gender= %s\n",p->gender);			
												printf("========================================\n");
												//if pointer is poienting to id and in the same scoope you can edit //
												printf("Now you can Edit \n");
												printf("=====================\n");
												printf("Enter new Name:");
												scanf("%s",&p->name);
												printf("Enter new age :");
												scanf("%d",&p->age);
												printf("Enter new gender : ");
												scanf("%s",&p->gender);
												printf("Enter new ID :");
												scanf("%d",&p->ID);
												id_ckeck(p->ID);	
												break;
											}
											p=p->next;
											}		
									}
						void id_ckeck_slot(u32 id2)
									{
										patient *pt;		patient *p=head;
											while(p!=NULL)
											{
										if(p->ID==id2)
										{
											printf("There are reservations available,Please enter a number to select from the list :\n");
											if(a==0)                                               
											{
											printf("1-> 2pm to 2:30pm\n");
											}
											if(b==0)
											{
												printf("2-> 2:30pm to 3pm\n");
											}
											if(d==0)
											{
												printf("3-> 3pm to 3:30pm\n");
											}
											if(e==0)
											{
												printf("4-> 4pm to 4:30pm\n");
											}
											if(f==0)
											{
												printf("5-> 4:30pm to 5pm\n");
											}
											scanf("%d",&pt->slot);
												switch(pt->slot)
										{
											case 1:printf("Reservation-> 1-> 2pm to 2:30pm\n");
											a=1;
											aa=p->ID;
											break;
											case 2:printf("Reservation-> 2->2:30pm to 3pm\n");
											b=1;
											bb=p->ID;
											break;
											case 3:printf("Reservation-> 3->3pm to 3:30pm\n");
											d=1;
											dd=p->ID;
											break;
											case 4:printf("Reservation-> 4->4pm to 4:30pm\n");
											e=1;
											ee=p->ID;
											break;
											case 5:printf("Reservation-> 5->4:30pm to 5pm\n");
											f=1;
											ff=p->ID;
											break;
											default:printf("Wrong number or slot is empty\n");
										}		break;
										}p=p->next;
											}		
									}
					    void id_ckeck3(u32 id)
									{
											patient *p=head;
											u32 *p1=&a;
											u32 *p2=&b;
											u32 *p3=&d;	
											u32 *p4=&e;
											u32 *p5=&f;
											while(p!=NULL)
											{
											if(p->ID==id)
											{ 
												if(p->slot==*p1)
												{
													printf("Reservation cancelled successfully\n");
													a=0;
												}
											else if( p->slot==*p2 )
												{printf("Reservation cancelled successfully\n\n");
													b=0;
												}
											else if( p->slot==*p3)
											    { printf("Reservation cancelled successfully\n\n");
													d=0;
												}
											else if(p->slot==*p4)
												{
													printf("Reservation cancelled successfully\n\n");
													e=0;
												}
											else if(p->slot==*p5)
												{
													printf("Reservation cancelled successfully\n\n");
													f=0;
												}
												break;
											}
											p=p->next;
											}		
									}
									//this function to allow user to enter id then bring all inforamtion//
									////////////////////To print data////////////////////
						void print(u32 idu)
									{     
										patient * pn10 = head;
											u32 *p1=&a;u32 *p2=&b;	u32 *p3=&d; u32 *p4=&e;u32 *p5=&f;	
										while(head!= NULL)
										{ 
										 if(pn10->ID==idu)
										 {	printf("Name= %s\n",pn10->name);
											printf("Age= %d\n",pn10->age);
											printf("gender= %s\n",pn10->gender);
											printf("ID= %d\n",pn10->ID);
											
											if(pn10->slot==*p1 && a==1)
												{
													printf("Reservation-> 1-> 2pm to 2:30pm\n");	
												}
											else if( pn10->slot==*p2  && b==1)
												{
													printf("Reservation-> 2->2:30pm to 3pm\n");			
												}
											else if( pn10->slot==*p3 && d==1)
												{
													printf("Reservation-> 3->3pm to 3:30pm\n");	
												}
											else if(pn10->slot==*p4 && e==1)
												{
													printf("Reservation-> 4->4pm to 4:30pm\n");
												}
											else if(pn10->slot==*p5 && f==1)
												{
													printf("Reservation-> 5->4:30pm to 5pm\n");			
												}
												break;
												printf("---------------------------------------------\n");
										 }
										 pn10= pn10->next;
										}
									}
						void delete()
									{
										if(head != NULL)
										{
											patient * ptr = head;
											head = head->next;
											free(ptr);
										}	
									}
