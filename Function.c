#include"Function.h"


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