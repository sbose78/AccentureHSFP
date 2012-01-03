#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#define NUM_FOOD 26
typedef struct
{
	char food[20];
	float price;
	char size[20];
	float calories;
	float cholestrol;
	int flag;
}item;

void getData(item *foods,int n, FILE *data)
{
	int field=5,i;

	char *s;
	s=(char *)malloc(19);

	fflush(data);

	fscanf(data,"%s",s);
	strcpy(foods->food,s);
	printf("\n\n %s",s);

	//PRICE
	fscanf(data,"%s",s);
	foods->price=atof(s);
	printf("\n %f",foods->price);

	//SIZE
	fscanf(data,"%s",s);
	strcpy(foods->size,s);
	printf("\n %s",foods->size);



	//CALORIES
	fscanf(data,"%s",s);
	foods->calories=atof(s);
	printf("\n %f",foods->calories);

	//CHOLESTROL
	fscanf(data,"%s",s);
	foods->cholestrol=atof(s);
	printf("\n %f",foods->cholestrol);

	foods->flag=0;


//		printf("\n\n CALORIES: %f %f %f",foods[0].price, foods[0].calories, foods[0].cholestrol);
//	fscanf(data,"%f %f",foods->calories,foods->cholestrol);

//		printf("\n\n CALORIES: %f %f %f",foods[0].price, foods[0].calories, foods[0].cholestrol);

}


struct l_foods{
		char food[20];
		float ratio;
};

l_foods * sortDiet(item foods[NUM_FOOD])
{
	int i,j=0,listed_size;


	struct l_foods listed_foods[NUM_FOOD];

	for(i=0;i<NUM_FOOD;i++)
	{
		if(foods[i].flag==1)
		{  //	listed_foods[j].food=(char *)malloc(sizeof(foods[i].food));
			listed_foods[j].ratio=foods[i].calories / foods[i].price;
			strcpy(listed_foods[j].food,foods[i].food);
			j++;
		}
	}
	listed_size=j;
	for(i=0;i<listed_size;i++)
	{
		for(j=0;j<listed_size-1-i;j++)
		{
			if(listed_foods[j+1].ratio<listed_foods[j].ratio)
			{
				struct l_foods temp=listed_foods[j];
				listed_foods[j]=listed_foods[j+1];
				listed_foods[j+1]=temp;
			}
		}
	}

	printf("\n\n**** SUGGESTED DIET IN ASCENDING ORDER OF PRICE PER CALORIE RATIO:****\n\n");
	for(i=0;i<2;i++) printf("\n %d %s",(i+1),listed_foods[i].food);
	return listed_foods;
}



item computeDiet(item foods[NUM_FOOD],float max_cal,float min_cal,float price,float cholestrol)
{
	int i;

	printf("\n\n****** FOODS SATISFYING YOUR CRITERIA ******\n\n");
	for(i=0;i<NUM_FOOD;i++)
	{
		if(foods[i].calories<=max_cal && foods[i].calories>=min_cal)
		{
			if(foods[i].price<=price && foods[i].cholestrol<=cholestrol)
			{
				foods[i].flag=1;
				printf("\n\n %d.  %s",(i+1),foods[i].food);
			}
		}

	}
	struct l_foods *sorted=(l_foods *)malloc(sizeof(l_foods));
	sorted=	sortDiet(foods);



}
int main()
{
	int i;
	float max_cal,min_cal,cholestrol,price;
	item foods[NUM_FOOD],required_food;

	FILE *data;
	data=fopen("diet.txt","r");
	if(data==NULL)
	{
		printf("\n NOT FOUND");
		return 1;
	}
//	clrscr();

	for(i=0;i<NUM_FOOD;i++)
	{	getData(&foods[i],i,data);

	}

	printf("\n\n ENTER MAXIMUM CALORIES, MINIMUM CALORIES, MAX PRICE , MAX CHOLESTROL:\n\n");
	scanf("%f %f %f %f",&max_cal,&min_cal,&price,&cholestrol);
	required_food=computeDiet(foods,max_cal,min_cal,price,cholestrol );


	fclose(data);
	return 0;
}
