#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
#include<string.h>
float tc;
int ch;
char temp[6][50];

void kid(void);
void food(void);
void dress(void);
void link(char temp[],float c,int no);
void display(void);
struct bill
 {
   char name[5][50];
   float pay;
   int n;
   struct bill *next;
 };
struct bill *start=NULL;
void link(char temp[5],float c,int no)
{
  struct bill *newnode, *ptr;
  newnode=(struct bill*)malloc(sizeof(struct bill));
  strcpy(newnode->name,temp);
  newnode->pay=c;
  newnode->n=no;
  if(start==NULL)
  {
     newnode->next=NULL;
     start=newnode;
   }
  else
    {
      ptr=start;
      while(ptr->next!=NULL)
	  ptr=ptr->next;
      ptr->next=newnode;
      newnode->next=NULL;
    }
}

void display()
{

  struct bill*ptr;
  ptr=start;
  while(ptr!=NULL)
  {
    printf("\n%s",ptr->name);
    printf("\t\t%f",ptr->pay);
    printf("\t\t%d",ptr->n);
    printf("\t\t%f",((ptr->n)*(ptr->pay)));
    ptr=ptr->next;
  }
}

void main()
{

  int n;
  clrscr();
  printf("\n..........................WELCOME TO MINI BAZAAR.........................\n");
  printf("\n\t\tTAKE A LOOK AT THE GRAND NEW STORES OF THE MALL\n");
  printf("-----------------------------------------------------------------------------\n");
  do
  {
	printf("\n\t\t\t\t1.KIDS HORIZON\n");
	printf("\n\t\t\t\t2.FOOD PLAZA\n");
	printf("\n\t\t\t\t3.DRESS MART\n");
	printf("\nChoose the store no. you want to visit:");
	scanf("%d",&n);
	switch(n)
	{
	  case 1:
	  kid();
	  break;
	  case 2:
	  food();
	  break;
	  case 3:
	  dress();
	  break;
	  default:
	  printf("\nSorry!No such store available.\n");
	}
	printf("\nWant to continue shopping at MINI BAZAAR??(y=1/n=0)");
	scanf("%d",&ch);
    }
       while(ch==1);

       printf("\nITEM\t\t\tCOST@ITEM\t\tNO. OF ITEMS\t\tCOST\n");
       printf("-----------------------------------------------------------------------------");

       display();
       printf("\n\t\t\t**********************************\n");
       printf("\n\t\t\t TOTAL ESTIMATED BILL:=%f",tc);
       printf("\n\t\t********************************************\n");
       printf("\n\t*************THANK YOU FOR VISITING MINI BAZAAR!!!**********");
       getch();
}

void kid()
{

    float cost=0.0;
    int i,n,no;
    int c;
    int cc,e;

    printf("\n\t.............WELCOME TO KIDDIES HORIZON........\n");
    do
    {
       printf("\t\t\t*******1.INFANTS(UPTO 1 YEAR)********\n");
       printf("\t\t\t*******2.KIDS(1 TO 12 YEARS)********\n");
       printf("\t\t\t*******3.TEENAGERS(13 TO 19 YEARS)********\n");
       printf("\n Enter the department you want to shop:");
       scanf("%d",&n);
       if(n==1)

       {

	printf("\n\t........WELCOME TO THE INFANT SECTION......\n");
	printf("\n\t\t\t1.TEDDY BEAR");
	printf("\n\t\t\t2.STROLLER");
	printf("\n\t\t\t3.BATTERY OPERATED TOYS");
	printf("\n\t\t\t4.SOFT TOYS");
	printf("\n\t\t\t5.DOLLS");
       }
       else if(n==2)
       {

	printf("\n\t........WELCOME TO THE KIDS SECTION......\n");
	printf("\n\t\t\t1.REMOTE CONTROLLED TOYS");
	printf("\n\t\t\t2.LUNCH BOX");
	printf("\n\t\t\t3.BOTTLE");
	printf("\n\t\t\t4.BARBIE");
	printf("\n\t\t\t5.COLOUR SET");
       }

	else if(n==3)
	{

	printf("\n\t........WELCOME TO THE TEENAGERS SECTION......\n");
	printf("\n\t\t\t1.DIGITAL DIARY");
	printf("\n\t\t\t2.WALLET");
	printf("\n\t\t\t3.PURSE");
	printf("\n\t\t\t4.COSMETIC BOX");
	printf("\n\t\t\t5.TROUSER BELTS");
       }

       switch(n)
       {
	   case 1:

	   do
	   {
	      char str[5][50]={"Teddy bear","stroller","battery operated toys","soft toys","doll"};
	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=6)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		   strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=549;break;
		    case 2:
		    cost=3999;break;
		    case 3:
		    cost=350;break;
		    case 4:
		    cost=250;break;
		    case 5:
		    cost=399;break;
		    }

		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(1-yes....0-no):\n");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of items you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));

		   link(temp,cost,i);

		 }
	       }
	     printf("\nTo continue shopping in infant section, type 1 for yes, 0 for no : ");
	     scanf("%d",&c);
	  }  while(c==1);
	  break;

     case 2:
       do
	   {
		char str[5][50]={"REMOTE CONTROLLED TOYS","LUNCH BOX","BOTTLE","BARBIE","COLOUR SET"};
	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=6)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		   strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=749;break;
		    case 2:
		    cost=75;break;
		    case 3:
		    cost=50;break;
		    case 4:
		    cost=810;break;
		    case 5:
		    cost=199;break;

		    }
		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(0-no...1-yes):");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of items you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));
		   link(temp,cost,i);
		 }
	       }
	     printf("\nTo continue shopping in kids section, type 1 for yes, 0 for no : ");
	     scanf("%d",&c);
	  }  while(c==1);
	  break;

	 case 3:
	    do
	   {
	      char str[5][50]={"DIGITAL DIARY","WALLET","PURSE","CoSMETIC BOX","TROUSER BELTS"};
	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=6)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		   strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=1099;break;
		    case 2:
		    cost=240;break;
		    case 3:
		    cost=500;break;
		    case 4:
		    cost=1000;break;
		    case 5:
		    cost=175;break;
		    }
		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(0-no....1-yes:");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of items you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));
		   link(temp,cost,i);
		 }
	       }
	     printf("\nTo continue shopping in teenagers section, type 1 for yes, 0 for no : ");
	     scanf("%d",&c);
	  }  while(c==1);
	  break;

      default:
	printf("\nINVALID CHOICE!!!\n");
   }

   printf("\nWant to continue shopping in KIDDIES HORIZON??(0-no...1-yes):\n");
   scanf("%d",&cc);
  }  while(cc==1);
}

void food()
{
      float cost=0.0;
    int i,n,no;

    int cc,e,c;
    printf("\n\t.............WELCOME TO FOOD PLAZA........\n");
    do
    {
       printf("\t\t\t*******1.ROLLS********\n");
       printf("\t\t\t*******2.CHINESE********\n");
       printf("\t\t\t*******3.SOUTH INDIAN********\n");
       printf("\t\t\t*******4.DESERTS**********\n");

       printf("\n Enter the department you want to shop:");
       scanf("%d",&n);
       if(n==1)

       {   printf("\n\t........WELCOME TO THE ROLLS SECTION......\n");
	printf("\n\t\t\t1.VEG ROLL");
	printf("\n\t\t\t2.EGG ROLL");
	printf("\n\t\t\t3.CHICKEN ROLL");
	printf("\n\t\t\t4.EGG CHICKEN ROLL");
	printf("\n\t\t\t5.PANEER ROLL");
       }
       else if(n==2)
       {
	printf("\n\t........WELCOME TO THE CHINESE FOOD CENTER......\n");
	printf("\n\t\t\t1.VEG CHOW");
	printf("\n\t\t\t2.EGG CHOW");
	printf("\n\t\t\t3.CHICKEN CHOW");
	printf("\n\t\t\t4.MIXED CHOW");

       }

	else if(n==3)
	{
	printf("\n\t........WELCOME TO THE SOUTH INDIAN SECTION......\n");
	printf("\n\t\t\t1.IDLI");
	printf("\n\t\t\t2.PLAIN DOSA");
	printf("\n\t\t\t3.MASALA DOSA");
	printf("\n\t\t\t4.UTTAPAM");

       }

	else if(n==4)
	{
	printf("\n\t........WELCOME TO THE DESERTS SECTION......\n");
	printf("\n\t\t\t1.ICE CREAM");
	printf("\n\t\t\t2.ICE TEA");
	printf("\n\t\t\t3.COLD DRINKS");
	printf("\n\t\t\t4.JUICE");
	printf("\n\t\t\t5.COFFEE");

       }
       switch(n)
       {
	   case 1:

	   do
	   {
	      char str[5][50]={"VEG ROLL","EGG ROLL","CHICKEN ROLL","EGG CHICKEN ROLL","PANEER ROLL"};
	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=6)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		  strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=20;break;
		    case 2:
		    cost=25;break;
		    case 3:
		    cost=30;break;
		    case 4:
		    cost=35;break;
		    case 5:
		    cost=25;break;
		    }
		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(1-yes....0-no):\n");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of rolls you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));
		   link(temp,cost,i);
		 }
	       }
	     printf("\nTo continue shopping in rolls section, type 1 : ");
	     scanf("%d",&c);
	  }  while(c==1);
	  break;

     case 2:
       do
	   {
	      char str[5][50]={"VEG CHOW","EGG CHOW","CHICKEN CHOW","MIXED CHOW"};
	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=5)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		   strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=40;break;
		    case 2:
		    cost=60;break;
		    case 3:
		    cost=70;break;
		    case 4:
		    cost=75;break;

		    }
		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(0-no...1-yes):");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of PLATES you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));
		   link(temp,cost,i);
		 }
	       }
	     printf("\nTo continue shopping in CHINESE FOOD section, type 1 : ");
	     scanf("%d",&c);
	  }  while(c==1);
	  break;

	 case 3:
	    do
	   {
	       char str[5][50]={"IDLI","PLAIN DOSA","MASLA DOSA","UTTAPAM"};
	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=5)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		   strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=25;break;
		    case 2:
		    cost=35;break;
		    case 3:
		    cost=50;break;
		    case 4:
		    cost=50;break;
		    }

		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(0-no....1-yes:");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of items you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));
		   link(temp,cost,i);
		 }
	       }
	     printf("\nTo continue shopping in south indian section, type 1 : ");
	     scanf("%d",&c);
	  }  while(c==1);
	  break;

	   case 4:
	    do
	   {
	       char str[5][50]={ "ICE CREAM","ICE TEA","COLD DRINKS","JUICE","COFFEE"};

	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=6)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		   strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=25;break;
		    case 2:
		    cost=15;break;
		    case 3:
		    cost=30;break;
		    case 4:
		    cost=15;break;
		    case 5:
		    cost=20;break;
		    }

		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(0-no....1-yes:");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of items you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));
		   link(temp,cost,i);
		 }
	       }
	     printf("\nTo continue shopping in deserts section, type 1 : ");
	     scanf("%d",&c);
	  }  while(c==1);
	  break;

      default:
	printf("\nINVALID CHOICE!!!\n");
   }

   printf("\nWant to continue shopping in FOOD PLAZA??(0-no...1-yes):\n");
   scanf("%d",&cc);
  }  while(cc==1);
}


void dress()
{
      float cost=0.0;
    int i,n,no;
    int c;
    int cc,e;
    printf("\n\t.............WELCOME TO DRESS MART........\n");
    do
    {
       printf("\t\t\t*******1.MEN********\n");
       printf("\t\t\t*******2.WOMEN********\n");
       printf("\t\t\t*******3.KIDS WEAR********\n");

       printf("\n Enter the department you want to shop:");
       scanf("%d",&n);
       if(n==1)

       {
	printf("\n\t........WELCOME TO THE MEN'S WEAR SECTION......\n");
	printf("\n\t\t\t1.JEANS");
	printf("\n\t\t\t2.SHIRT");
	printf("\n\t\t\t3.T-SHIRTS");
	printf("\n\t\t\t4.COATS");
	printf("\n\t\t\t5.FORMAL TROUSERS");
	printf("\n\t\t\t6.CARGOS");
       }
       else if(n==2)
       {
	printf("\n\t........WELCOME TO THE WOMEN'S WEAR SECTION......\n");
	printf("\n\t\t\t1.KURTIS");
	printf("\n\t\t\t2.TOPS");
	printf("\n\t\t\t3.JEANS");
	printf("\n\t\t\t4.CAPRIS");
	printf("\n\t\t\t5.COTTON SALWARS");
	printf("\n\t\t\t6.SARIS");
       }

	else if(n==3)
	{
	printf("\n\t........WELCOME TO THE KIDS WEAR SECTION......\n");
	printf("\n\t\t\t1.FROCK");
	printf("\n\t\t\t2.T-SHIRT");
	printf("\n\t\t\t3.SHIRT");
	printf("\n\t\t\t4.JEANS");
	printf("\n\t\t\t5.SKIRTS");
	printf("\n\t\t\t6.CAPRIS");
       }

       switch(n)
       {
	   case 1:

	   do
	   {  char str[6][50]={"JEANS","SHIRT","T-SHIRT","COAT","TROUSERS","CARGO"};
	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=7)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		   strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=1099;break;
		    case 2:
		    cost=499;break;
		    case 3:
		    cost=250;break;
		    case 4:
		    cost=4999;break;
		    case 5:
		    cost=545;break;
		    case 6:
		    cost=349;break;
		    }
		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(1-yes....0-no):\n");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of items you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));
		   link(temp,cost,i);
		 }
	       }
	     printf("\nTo continue shopping in mens wear section, type 1 : ");
	     scanf("%d",&c);
	  }  while(c==1);
	  break;

     case 2:
       do
	   {
	      char str[6][50]={"KURTI","TOP","JEANS","CAPRI","SALWAR","SARI"};
	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=7)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		  strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=249;break;
		    case 2:
		    cost=199;break;
		    case 3:
		    cost=810;break;
		    case 4:
		    cost=350;break;
		    case 5:
		    cost=675;break;
		    case 6:
		    cost=1099;break;

		    }
		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(0-no...1-yes):");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of items you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));
		  link(temp,cost,i);
		 }
	       }
	     printf("\nTo continue shopping in women's wear section, type 1 : ");
	     scanf("%d",&c);
	  }  while(c==1);
	  break;

	 case 3:
	    do
	   {
	      char str[6][50]={"FROCK","T-SHIRT","SHIRT","JEANS","SKIRT","CAPRI"};
	      printf("\nType the no. corresponding to the item you want to shop :");
	      scanf("%d",&no);
	      if(no>=7)
		 printf("\nSorry!Choice not available!!\n");
	      else
		 {
		 strcpy(temp,str[no-1]);
		 switch(no)
		    {
		    case 1:
		    cost=299;break;
		    case 2:
		    cost=199;break;
		    case 3:
		    cost=449;break;
		    case 4:
		    cost=250;break;
		    case 5:
		    cost=349;break;
		    case 6:
		    cost=300;break;
		    }

		  printf("\nCost=%f\n",cost);
		 printf("\nDo you want to buy?(0-no....1-yes:");
		 scanf("%d",&e);
		 if(e==1)
		 {
		   printf("\nEnter no of items you want to buy:");
		   scanf("%d",&i);
		   tc=tc+(i*cost);
		   printf("\nTotal cost=%f",(i*cost));
		   link(temp,cost,i);
		 }
	       }
	     printf("\nTo continue shopping in kids wear section, type 1 : ");
	     scanf("%d",&c);
	  }  while(c==1);

	 break;

      default:
	printf("\nINVALID CHOICE!!!\n");
   }

   printf("\nWant to continue shopping in DRESS MART??(0-no...1-yes):\n");
   scanf("%d",&cc);
  }  while(cc==1);
}
