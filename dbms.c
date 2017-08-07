#include<stdio.h>
struct node{
	char username[20];
	char collegename[50];
	int  contactnumber[20];
	char emailid[50];
	char events[20];
};

int main(void)
{
	
	int n,i;
	FILE *fptr;
	fptr = fopen("C:\\viva.txt","w");
	
//	if(fptr == NULL)
//	{
//		printf("Error!");
//		exit(1);
//	}
	
	printf("Enter number of participants:");
	scanf("%d",&n);
	
	struct node temp[500],temp1[500];
	for(i=0;i<n;i++)
	{
		scanf("%s %s %d %s %s",temp[i].username,temp[i].collegename,&temp[i].contactnumber,temp[i].emailid,temp[i].events);


	}
	fwrite(temp,sizeof(struct node),1,fptr);
	fclose(fptr);
	fptr = fopen("C:\\viva.txt","r");
	fread(temp1,sizeof(struct node),1,fptr);
	int  num_of_registration_music=0,num_of_registration_artclub=0,
	     num_of_registration_dance=0,num_of_registration_nukkad=0,
		 num_of_registration_drama=0;
	for(i=0;i<n;i++)
	{
		if (strcmp(temp[i].events, "music") == 0)
		//if(*temp[i].events == "music")
		{	
			num_of_registration_music++;
			printf(" username:: %s\t collegename:: %s\t contactnumber:: %d\t emailid:: %s\t event:: %s\n\n",temp1[i].username,temp1[i].collegename,temp1[i].contactnumber,temp[i].emailid,temp[i].events);
		}
		else if (strcmp(temp[i].events, "arclub") == 0)
	//	else if(*temp[i].events == "artclub")
		{	
			num_of_registration_artclub++;
			printf(" username:: %s\t collegename:: %s\t contactnumber:: %d\t emailid:: %s\t event:: %s\n\n",temp1[i].username,temp1[i].collegename,temp1[i].contactnumber,temp[i].emailid,temp[i].events);
		}
		else if (strcmp(temp[i].events, "dance") == 0)
	//	else if(*temp[i].events  == "dance")
		{	
			num_of_registration_dance++;
			printf(" username:: %s\t collegename:: %s\t contactnumber:: %d\t emailid:: %s\t event:: %s\n\n",temp1[i].username,temp1[i].collegename,temp1[i].contactnumber,temp[i].emailid,temp[i].events);
		}
		else if (strcmp(temp[i].events, "nukkad") == 0)
	//	else if(*temp[i].events  == "nukkad")
		{	
			num_of_registration_nukkad++;
			printf(" username:: %s\t collegename:: %s\t contactnumber:: %d\t emailid:: %s\t event:: %s\n\n",temp1[i].username,temp1[i].collegename,temp1[i].contactnumber,temp[i].emailid,temp[i].events);
		}
		else if (strcmp(temp[i].events, "drama") == 0)		
	//	else if(*temp[i].events  == "fashion")
		{	
			num_of_registration_drama++;
			printf(" username:: %s\t collegename:: %s\t contactnumber:: %d\t emailid:: %s\t event:: %s\n\n",temp1[i].username,temp1[i].collegename,temp1[i].contactnumber,temp[i].emailid,temp[i].events);
		}
		
		//printf("%s %s %d %s %s",temp[i].username,temp[i].collegename,temp[i].contactnumber,temp[i].event,temp[i].emailid,temp[i].event);
	}  
    fclose(fptr);
	printf(",num_of_registration_music :: %d\n,num_of_registration_artclub :: %d\n,num_of_registration_dance :: %d\n,num_of_registration_nukkad :: %d\n,num_of_registration_drama :: %d\n",num_of_registration_music,num_of_registration_artclub,num_of_registration_dance,num_of_registration_nukkad,num_of_registration_drama);
	return 0;
} 

