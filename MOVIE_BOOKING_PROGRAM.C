#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void rectangle(int right_start,int right_end, int bottom_start,int bottom_down,int rectangle_border) ;
void rectangle_delay(float right_start,float right_end, float bottom_start,float bottom_down);
void menu_design();
void movie_display();
void user_call(int user_input) ;
void movie_detail(int user_input) ;
void select_movie();
void help();
void welcome_design();
void book_movie(char *movie_name,int user_input) ;
void movie_ticket_1();
void pay_bill(int input, int* price,int select_ticket,int* movie_seat,char* movie_row,int no_of_tickets);
char *name_of_movie(int movie_no)   ;
char *type_of_ticket(int select_ticket )  ;
void box(int x1, int x2, int y1, int y2, int no_of_seats, int count,int yes,char ch,int selected_seat);
void movies_seat_control();
void last_window() ;
void description(int user_input);

 void main()
  {
    //_setcursortype(_NOCURSOR);
    welcome_design();
    menu_design();
    movie_display();
    select_movie();
    getch();
  }


 void welcome_design()
  {

    clrscr();
    rectangle(1,79,0,24,1);//(left_move,right_move,down_move,up_move)
    gotoxy(33,12);
    printf("BIG CINEMAS");

    gotoxy(79,20);
    getch();
  }

  void menu_design()
  {
    int count=0;
    rectangle(28,48,6,22,0);
    gotoxy(33,8);
    printf("BIG CINEMAS");
    gotoxy(33,9);
    while(count<11)
    {
     printf("%c",196);
     count++;
    }

    gotoxy(44,9);
    printf("%c",217);

    gotoxy(44,8);
    printf("%c",179);

    gotoxy(44,7);
    printf("%c",191);

    gotoxy(32,9);
    printf("%c",192);

    gotoxy(32,8);
    printf("%c",179);

    gotoxy(32,7);
    printf("%c",218);
    gotoxy(33,7);
    count=0;
    while(count<11)
     {
      printf("%c",196);
	  count++;

     }

    gotoxy(33,12);
    printf("NOW SHOWING");
    gotoxy(48,10);


  }

  void movie_display()
  {

     gotoxy(34,14);
     printf("PROJECT X");
     gotoxy(33,14);
     printf("%c",254);
     gotoxy(34,16) ;
     printf("THE OFFICE");
	 gotoxy(33,16);
     printf("%c",254);
     gotoxy(34,18);
	 printf("SUPERBAD");
     gotoxy(33,18);
     printf("%c",254);

     getch();
  }

  void select_movie()
  {
   int count=0,user_input;
   rectangle(26,55,4,24,0);
   gotoxy(35,6);
   printf("BIG CINEMAS");


   gotoxy(34,7);
   printf("%c",192);
   gotoxy(34,6);
   printf("%c",179);
   gotoxy(34,5);
   printf("%c",218);

   count=0;
   while(count<11)
    {
      printf("%c",196);
      count++;
    }

   gotoxy(46,5);
   printf("%c",191);
   gotoxy(46,6);
   printf("%c",179);


   gotoxy(35,7);
   count=0;
   while(count<11)
    {
     printf("%c",196);
	 count++;
    }
   gotoxy(46,7);
   printf("%c",217);


   gotoxy(29,8);
   printf("PRESS THE FOLLOWING ");
   gotoxy(29,9);
   count=0;

    while(count<20)
    {
     printf("%c",196);
     count++;
    }

   gotoxy(32,10);
   printf("NUMBER TO PROCEED") ;
   gotoxy(32,11);

    count=0;
    while(count<17)
    {
     printf("%c",196);
     count++;
    }

   gotoxy(30,13);
   printf("PROJECT X");
   gotoxy(29,13);
   printf("%c",254);
   gotoxy(46,13);
   printf("1 ");
   gotoxy(30,15) ;
   printf("THE OFFICE");
   gotoxy(29,15);
   printf("%c",254);
   gotoxy(46,15);
   printf("2 ");
   gotoxy(30,17);
   printf("SUPERBAD");
   gotoxy(29,17);
   printf("%c",254);
   gotoxy(46,17);
   printf("3 ");
   gotoxy(27,20);
   count=0;

   while(count<28)
   {
    printf("%c",196);
    count++;

   }

   gotoxy(36,22);
   printf("4");

   gotoxy(51,22);
   printf("5");

   gotoxy(30,22);
   printf("EXIT");
   gotoxy(29,22);
   printf("%c",254);
   gotoxy(45,22);
   printf("HELP");
   gotoxy(44,22);
   printf("%c",254);
   gotoxy(39,19);

    while(1)

     {
      gotoxy(29,19);
      printf("Enter input:");

      gotoxy(42,19);
      printf(" ");
	  gotoxy(42,19);

     // scanf("%d",&user_input);
       user_input=getche();
       user_input=user_input-48;
	  if(user_input>0 && user_input<6)  //0,6
	  {
	user_call(user_input);
	break;
	  }

	  else
	  {
	   gotoxy(44,19);
	   printf("TRY AGAIN");
	   getch();
	   printf("         ");
	  }
	}
  }


  void user_call(int user_input)
  {

   if(user_input>0 && user_input<4)
   {
	 movie_detail(user_input);
   }

   else
   {
	switch(user_input)
	{
	  case 4:
		 {
		 exit(0);
		 }
	  case 5:
		 {
		  help(); //**********************
		 }
	}
   }
  }
  void movie_detail(int user_input)
	{
	  int user_input1;

	  switch(user_input)

	  {

	case 1:

		{
		 int count;
		 char *movie_name=(char*)malloc(sizeof(char));
		 movie_name=name_of_movie(user_input);

		 rectangle(26,56,4,24,0);

		 gotoxy(30,8);
		 printf("MOVIE :");
		 gotoxy(37,8);
		 printf("%s",movie_name);
		 gotoxy(30,9);
		 while(count<18)
		 {
		  printf("%c",196);
		  count++;
		 }
		 description(user_input);
	/*	 gotoxy(30,10);
		 printf("DESCRIPTION :3 high school");
		 gotoxy(30,11);
		 count=0;

		 while(count<11)
		 {
		 printf("%c",196);
		 count++;

		 }
		 gotoxy(30,12);
		 printf("seniors throw a birthday");
		 gotoxy(30,13);
		 printf("party to make a name for");
		 gotoxy(30,14);
		 printf("themselves.");
	*/
		 gotoxy(30,15);
		 printf("ENTER YOUR CHOICE:");

		 gotoxy(27,17);
		 count=0;
		 while(count<28)
		 {
		  printf("%c",196);
		  count++;
		 }
		 gotoxy(28,18);
		 printf("PRESS A NUMBER");
		 gotoxy(28,19);
		 printf("TO NUMBER CONTINUE");

	 //GO BACK DESIGN*************
		 gotoxy(30,21);
		 printf("GO BACK");
		 gotoxy(33,23);
		 printf("%d",1);
		 gotoxy(29,22);
		 printf("%c",192);
		 gotoxy(29,21);
		 printf("%c",179);
		 gotoxy(29,20);
		 printf("%c",218);
		 gotoxy(30,20);
		 count=0;
		 while(count<7)
		 {
		  printf("%c",196);
		  count++;

		 }
		 gotoxy(37,20);
		 printf("%c",191);
		 gotoxy(37,21);
		 printf("%c",179);
		 gotoxy(37,22);
		 printf("%c",217);


		 gotoxy(30,22);
		 count=0;
		 while(count<7)
		  {
		   printf("%c",196);
		   count++;
		  }

	 // BOOK DESIGN *************************
		 gotoxy(42,21);
		 printf("BOOK");
		 gotoxy(44,23);
		 printf("%d",2);
		 gotoxy(41,22);
		 printf("%c",192);
		 gotoxy(41,21);
		 printf("%c",179);
		 gotoxy(41,20);
		 printf("%c",218);
		 gotoxy(42,20);
		 count=0;

		 while(count<5)
		 {
		  printf("%c",196);
		  count++;
		 }

		 gotoxy(46,20);
		 printf("%c",191);
		 gotoxy(46,21);
		 printf("%c",179);
		 gotoxy(46,22);
		 printf("%c",217);


		 gotoxy(42,22);
		 count=0;

		 while(count<5)
		  {
		   printf("%c",196);
		   count++;
		  }

		  gotoxy(46,22);
		  printf("%c",217);


	  //EXIT DESIGN****************************

		 gotoxy(48,21);
		 printf("EXIT");
		 gotoxy(50,23);
		 printf("%d",3);

		 gotoxy(47,22);

		 printf("%c",192);
		 gotoxy(47,21);
		 printf("%c",179);
		 gotoxy(47,20);
		 printf("%c",218);
		 gotoxy(48,20);
		 count=0;

		 while(count<5)
		 {
		  printf("%c",196);
		  count++;

		 }

		 gotoxy(52,20);
		 printf("%c",191);
		 gotoxy(52,21);
		 printf("%c",179);
		 gotoxy(52,22);
		 printf("%c",217);


		 gotoxy(48,22);
		 count=0;
		 while(count<5)
		  {
		   printf("%c",196);
		   count++;
		  }
		 gotoxy(52,22);
		 printf("%c",217);
		 gotoxy(48,16);

		 while(1)
		 {
		  gotoxy(48,15);
		  user_input1=getch();
		  user_input1=user_input1-48;
		  if(user_input1>0 && user_input1<4)
		  {
		   break;
		  }
		  else
		  {
		   gotoxy(42,16);
		   printf("INVALID INPUT");
		   getch();
		   gotoxy(42,16);
		   printf("             ");
		  }

		 }
		 switch(user_input1)
		 {
		   case 1:
		   {
			select_movie();
		   }

		   case 2:
		   {
			book_movie(movie_name,user_input);
		   }

		   case 3:
		   {
			exit(0);
		   }
		 }
		 break;
		}

		case 2:  // the office description page
		{
		 int count;
		 char *movie_name=(char*)malloc(sizeof(char));
		 movie_name=name_of_movie(user_input);
		 rectangle(26,56,4,24,0);
		 gotoxy(30,8);
		 printf("MOVIE : THE OFFICE");
		 gotoxy(30,9);
		 while(count<20)
		 {
		  printf("%c",196);
		  count++;

		 }
		 description(user_input);
	/*	 gotoxy(30,10);
		 printf("DESCRIPTION :A mockumen-");
		 gotoxy(30,11);
		 count=0;
		 while(count<11)
		 {
		 printf("%c",196);
		 count++;

		 }
		 gotoxy(30,12);
		 printf("-tary on a group of");
		 gotoxy(30,13);
		 printf("typical office workers.");
	 */
		 gotoxy(30,15);
		 printf("ENTER YOUR CHOICE:");




		 gotoxy(27,17);
		 count=0;
		 while(count<28)
		 {
		  printf("%c",196);
		  count++;
		 }
		 gotoxy(28,18);
		 printf("PRESS A NUMBER");
		 gotoxy(28,19);
		 printf("TO NUMBER CONTINUE");

	 //GO BACK DESIGN*************
		 gotoxy(30,21);
		 printf("GO BACK");
		 gotoxy(33,23);
		 printf("%d",1);
		 gotoxy(29,22);
		 printf("%c",192);
		 gotoxy(29,21);
		 printf("%c",179);
		 gotoxy(29,20);
		 printf("%c",218);
		 gotoxy(30,20);
		 count=0;
		 while(count<7)
		 {
		  printf("%c",196);
		  count++;

		 }
		 gotoxy(37,20);
		 printf("%c",191);
		 gotoxy(37,21);
		 printf("%c",179);
		 gotoxy(37,22);
		 printf("%c",217);


		 gotoxy(30,22);
		 count=0;
		 while(count<7)
		  {
		   printf("%c",196);
		   count++;
		  }

	 // BOOK DESIGN *************************
		 gotoxy(42,21);
		 printf("BOOK");
		 gotoxy(44,23);
		 printf("%d",2);
		 gotoxy(41,22);
		 printf("%c",192);
		 gotoxy(41,21);
		 printf("%c",179);
		 gotoxy(41,20);
		 printf("%c",218);
		 gotoxy(42,20);
		 count=0;
		 while(count<5)
		 {
		  printf("%c",196);
		  count++;

		 }
		 gotoxy(46,20);
		 printf("%c",191);
		 gotoxy(46,21);
		 printf("%c",179);
		 gotoxy(46,22);
		 printf("%c",217);


		 gotoxy(42,22);
		 count=0;
		 while(count<5)
		  {
		   printf("%c",196);
		   count++;
		  }

		  gotoxy(46,22);
		  printf("%c",217);





	  //EXIT DESIGN****************************

		 gotoxy(48,21);
		 printf("EXIT");
		 gotoxy(50,23);
		 printf("%d",3);

		 gotoxy(47,22);

		 printf("%c",192);
		 gotoxy(47,21);
		 printf("%c",179);
		 gotoxy(47,20);
		 printf("%c",218);
		 gotoxy(48,20);
		 count=0;
		 while(count<5)
		 {
		  printf("%c",196);
		  count++;

		 }
		 gotoxy(52,20);
		 printf("%c",191);
		 gotoxy(52,21);
		 printf("%c",179);
		 gotoxy(52,22);
		 printf("%c",217);


		 gotoxy(48,22);
		 count=0;
		 while(count<5)
		  {
		   printf("%c",196);
		   count++;
		  }

		  gotoxy(52,22);
		  printf("%c",217);

		 while(1)
		 {
		  gotoxy(48,15);
		  user_input1=getch();
		  user_input1=user_input1-48;
		  if(user_input1>0 && user_input1<4)
		  {
		   break;
		  }

		  else
		  {
		   gotoxy(42,16);
		   printf("INVALID INPUT");
		   getch();
		   gotoxy(42,16);
		   printf("             ");
		  }

		 }
		 switch(user_input1)        // change
		 {
		  case 1:
		  {
		   select_movie();
		  }
		  case 2:
		  {
		   book_movie(movie_name,user_input);
		  }

		  case 3:
		  {
		   exit(0);
		  }

		 }
		 break;
		}

		case 3:
		{
		 int count;
		 char *movie_name=(char*)malloc(sizeof(char));
		 movie_name=name_of_movie(user_input);

		 rectangle(26,56,4,24,0);
		 gotoxy(30,8);
		 printf("MOVIE :");
		 gotoxy(37,8);
		 printf("%s",movie_name);
		 gotoxy(30,9);

		 while(count<18)
		 {
		  printf("%c",196);
		  count++;
		 }

		 description(user_input);
   /*	 gotoxy(30,10);
		 printf("DESCRIPTION :Two high ");
		 gotoxy(30,11);
		 count=0;
		 while(count<11)
		 {
		 printf("%c",196);
		 count++;

		 }
		 gotoxy(30,12);
		 printf("school seniors plan to");
		 gotoxy(30,13);
		 printf("stage a booze-soaked party");
   */	 gotoxy(30,15);
		 printf("ENTER YOUR CHOICE:");


		 gotoxy(27,17);
		 count=0;
		 while(count<28)
		 {
		  printf("%c",196);
		  count++;
		 }
		 gotoxy(28,18);
		 printf("PRESS A NUMBER");
		 gotoxy(28,19);
		 printf("TO NUMBER CONTINUE");

	 //GO BACK DESIGN*************
		 gotoxy(30,21);
		 printf("GO BACK");
		 gotoxy(33,23);
		 printf("%d",1);
		 gotoxy(29,22);
		 printf("%c",192);
		 gotoxy(29,21);
		 printf("%c",179);
		 gotoxy(29,20);
		 printf("%c",218);
		 gotoxy(30,20);
		 count=0;
		 while(count<7)
		 {
		  printf("%c",196);
		  count++;

		 }
		 gotoxy(37,20);
		 printf("%c",191);
		 gotoxy(37,21);
		 printf("%c",179);
		 gotoxy(37,22);
		 printf("%c",217);


		 gotoxy(30,22);
		 count=0;
		 while(count<7)
		  {
		   printf("%c",196);
		   count++;
		  }

	 // BOOK DESIGN *************************
		 gotoxy(42,21);
		 printf("BOOK");
		 gotoxy(44,23);
		 printf("%d",2);
		 gotoxy(41,22);
		 printf("%c",192);
		 gotoxy(41,21);
		 printf("%c",179);
		 gotoxy(41,20);
		 printf("%c",218);
		 gotoxy(42,20);
		 count=0;
		 while(count<5)
		 {
		  printf("%c",196);
		  count++;

		 }
		 gotoxy(46,20);
		 printf("%c",191);
		 gotoxy(46,21);
		 printf("%c",179);
		 gotoxy(46,22);
		 printf("%c",217);


		 gotoxy(42,22);
		 count=0;
		 while(count<5)
		  {
		   printf("%c",196);
		   count++;
		  }

		  gotoxy(46,22);
		  printf("%c",217);





	  //EXIT DESIGN****************************

		 gotoxy(48,21);
		 printf("EXIT");
		 gotoxy(50,23);
		 printf("%d",3);

		 gotoxy(47,22);

		 printf("%c",192);
		 gotoxy(47,21);
		 printf("%c",179);
		 gotoxy(47,20);
		 printf("%c",218);
		 gotoxy(48,20);
		 count=0;
		 while(count<5)
		 {
		  printf("%c",196);
		  count++;

		 }
		 gotoxy(52,20);
		 printf("%c",191);
		 gotoxy(52,21);
		 printf("%c",179);
		 gotoxy(52,22);
		 printf("%c",217);


		 gotoxy(48,22);
		 count=0;
		 while(count<5)
		  {
		   printf("%c",196);
		   count++;
		  }

		  gotoxy(52,22);
		  printf("%c",217);


	   while(1)
	   {

		 gotoxy(48,15);
		 user_input1=getche();
		 delay(100);
		 user_input1=user_input1-48;

		  if(user_input1>0 && user_input1<4)
		  {
		   break;
		  }

		  else
		  {
		   gotoxy(42,16);
		   printf("INVALID INPUT");
		   getch();
		   gotoxy(42,16);
		   printf("             ");
		  }

	   }
		 switch(user_input1)        //change
		 {
		  case 1:
		  {
		   select_movie();
		  }

		  case 2:
		  {
		   book_movie(movie_name,user_input);
		  }

		  case 3:
		  {
		   exit(0);
		  }

		 }
		 break;
		}
	  }
	}


	void description(int user_input)
	{
	 int count;
	 switch(user_input)
	 {
	   case 1:
	   {
		 gotoxy(30,10);
		 printf("DESCRIPTION :3 high school");
		 gotoxy(30,11);
		 count=0;

		 while(count<11)
		 {
		 printf("%c",196);
		 count++;

		 }
		 gotoxy(30,12);
		 printf("seniors throw a birthday");
		 gotoxy(30,13);
		 printf("party to make a name for");
		 gotoxy(30,14);
		 printf("themselves.");
		 break;
	   }

	   case 2:
	   {
		 gotoxy(30,10);
		 printf("DESCRIPTION :A mockumen-");
		 gotoxy(30,11);
		 count=0;
		 while(count<11)
		 {
		 printf("%c",196);
		 count++;

		 }
		 gotoxy(30,12);
		 printf("-tary on a group of");
		 gotoxy(30,13);
		 printf("typical office workers.");

		 break;
	   }

	   case 3:
	   {
		 gotoxy(30,10);
		 printf("DESCRIPTION :Two high ");
		 gotoxy(30,11);
		 count=0;
		 while(count<11)
		 {
		 printf("%c",196);
		 count++;

		 }
		 gotoxy(30,12);
		 printf("school seniors plan to");
		 gotoxy(30,13);
		 printf("stage a booze-soaked party");
		 gotoxy(30,15);
		 break;
	   }


	 }


	}


   void book_movie(char *movie_name,int user_input)
   {

	  int offset,count;
	  rectangle(26,56,2,24,0);
	  gotoxy(28,3);
	  printf("PRESS THE FOLLOWING");
	  gotoxy(28,4);
	  printf("NUMBER TO CONTINUE");

	  gotoxy(27,5);
	  count=0;
	  while(count<28)
	  {
		printf("%c",196);
		count++;
	  }
	  gotoxy(28,6);
	  printf("MOVIE :");
	  gotoxy(35,6)  ;
	  offset=0;
	  printf("%s",movie_name);
	 /* while(movie_name[offset]!='\0')
	  {
		printf("%c",movie_name[offset]);
		offset++ ;
	  }
	  */
	  movie_ticket_1(user_input);//*****************************
	  getch();
   }

   void movie_ticket_1(int user_input)
	{
	 int silver=100,count;
	 int gold=150;
	 int platinum=220;
	 char ch;
	 //int no_of_silver=50,no_of_gold=20,no_of_platinum=10;
	 int select_ticket;
	 int price;
	 int no_of_tickets;
	 int movie_ticket_input;
	 int *movie_seat=(int*)malloc(sizeof(int));
	 char *movie_row=(char*)malloc(sizeof(char));
	// char *ticket_type=(char*)malloc(sizeof(char));
	 gotoxy(33,8);
	 printf("AVAILABLE TICKETS");
	 gotoxy(30,10);
	 printf("SILVER RS %d",silver);
	 gotoxy(49,10);
	 printf("%d",1);
	 gotoxy(30,12);
	 printf("GOLD RS %d",gold) ;
	 gotoxy(49,12) ;
	 printf("%d",2);
	 gotoxy(30,14);
	 printf("PLATINUM RS %d",platinum);
	 gotoxy(49,14);
	 printf("%d",3);
	 gotoxy(30,16);
	 printf("ENTER INPUT:") ;
	 while(1)
	 {
	  gotoxy(49,16);
	  printf(" ");
	  gotoxy(49,16);
	  select_ticket=getche();
	  select_ticket=select_ticket-48;

	  if(select_ticket>0 && select_ticket<4)
	  {
	   break;
	  }

	  else
	   {
		gotoxy(39,17);
		printf("INVALID INPUT") ;
		gotoxy(39,18);
		printf("TRY AGAIN") ;
		getch();
		gotoxy(38,17);
		printf("              ") ;
		gotoxy(38,18);
		printf("           ") ;
	   }

	 }

	 gotoxy(30,17);
	 printf("NO OF TICKETS:");
	 while(1)
	 {
	  gotoxy(49,17);
	  printf("  ");
	 //scanf("%d",&no_of_tickets);
	  gotoxy(49,17);

	  no_of_tickets=getche();
	  no_of_tickets=no_of_tickets-48;

	  if(no_of_tickets>0 && no_of_tickets<10)
	  {
		switch(select_ticket)
		{
		 case 1:
		 {
		  price= silver*no_of_tickets;
			// no_of_silver--;
		  break;
		 }

		 case 2:
		{
		 price= gold*no_of_tickets;
		// no_of_gold--;
		 break;
		}

	   case 3:
	   {
		 price= platinum*no_of_tickets;
		// no_of_platinum--;
		 break;
	   }

	  }
	   break;
	  }
	 else
	  {
		gotoxy(40,19);
		printf("INAVLID INPUT");
		gotoxy(40,20) ;
		printf("TRY AGAIN");

		getch();
		gotoxy(40,19);
		printf("             ");
		gotoxy(40,20) ;
		printf("         ");

	  }

	}
	   gotoxy(28,22);
	   printf("MENU");

	   gotoxy(29,20);
	   printf("%d",1);

	   gotoxy(27,23);
	   printf("%c",192);
	   gotoxy(27,22);
	   printf("%c",179);
	   gotoxy(27,21);
	   printf("%c",218);
	   gotoxy(28,21);
	   printf("%c%c%c%c",196,196,196,196);
	   gotoxy(32,21);
	   printf("%c",191);
	   gotoxy(32,22);
	   printf("%c",179);
	   gotoxy(32,23);
	   printf("%c",217);
	   gotoxy(28,23);
	   printf("%c%c%c%c",196,196,196,196);


	   gotoxy(37,22);
	   printf("CONTINUE");

	   gotoxy(40,20);
	   printf("%d",2);

	   gotoxy(36,23);
	   printf("%c",192);
	   gotoxy(36,22);
	   printf("%c",179);
	   gotoxy(36,21);
	   printf("%c",218);
	   gotoxy(37,21);
	   count=0;
	   while(count<8)
	   {
	   printf("%c",196);
	   count++;
	   }
	   gotoxy(45,21);
	   printf("%c",191);
	   gotoxy(45,22);
	   printf("%c",179);
	   gotoxy(45,23);
	   printf("%c",217);
	   gotoxy(37,23);

	   count=0;
	   while(count<8)
	   {
	   printf("%c",196);
	   count++;
	   }


	   gotoxy(49,22);
	   printf("EXIT");


	   gotoxy(51,20);
	   printf("%d",3);

	   gotoxy(48,23);
	   printf("%c",192);
	   gotoxy(48,22);
	   printf("%c",179);
	   gotoxy(48,21);
	   printf("%c",218);
	   gotoxy(49,21);
	   count=0;

	   while(count<5)
	   {
	   printf("%c",196);
	   count++;
	   }

	   gotoxy(54,21);
	   printf("%c",191);
	   gotoxy(54,22);
	   printf("%c",179);
	   gotoxy(54,23);
	   printf("%c",217);
	   gotoxy(49,23);

	   count=0;
	   while(count<5)
	   {
	   printf("%c",196);
	   count++;
	   }
	   gotoxy(30,18);
	   printf("ENTER A CHOICE:") ;
	   gotoxy(49,18);


	   while(1)
	   {
		gotoxy(49,18);
		movie_ticket_input=getche();
		movie_ticket_input=movie_ticket_input-48;

		if(movie_ticket_input>0 && movie_ticket_input<4 )
		{
		 break ;
		}
		else
		{
		  gotoxy(44,19);
		  printf("INVALID!");
		  getch();
		  printf("        ");

		}


	   }




	switch(movie_ticket_input)
	{
	 case 1:
	 {
	  select_movie();
	 }
	 case 2:
	 {
	   movies_seat_control(movie_seat,movie_row,no_of_tickets,select_ticket);
	   pay_bill(user_input,&price,select_ticket,movie_seat,movie_row,no_of_tickets);

	 }
	case 3:
	 {
	  exit(0);
	 }

	}

	   getch();

	}

   void movies_seat_control(int *movie_seat, char* movie_row,int no_of_tickets,int select_ticket)
   {
	int x1=1,x2=4,y1=22,y2=24,count=0,seat_no,counter,ticket_counter=0,row1[20]={0},row2[20]={0},row3[20]={0},row4[20]={0},row5[20]={0},row6[20]={0};
	char row;
	clrscr();


	gotoxy(1,1);
	while (count<79)
	{
	printf("%c",220) ;
	count++;
	}
	 gotoxy(35,2);
	 printf("SCREEN");



	 gotoxy(34,21);
	 printf("PLATINUM");
	 box(x1,x2,y1,y2,15,0,1,70,0); //16


	 x1=19,x2=22,y1=18,y2=20  ;
	 box(x1,x2,y1,y2,11,3,0,0,0);
	 x1=1,x2=4,y1=18,y2=20  ;
	 box(x1,x2,y1,y2,3,0,0,0,0);
	 x1=61,x2=64,y1=18,y2=20  ;
	 box(x1,x2,y1,y2,15,12,1,69,0);


	 x1=19,x2=22,y1=15,y2=17 ;
	 box(x1,x2,y1,y2,11,3,0,0,0);
	 x1=1,x2=4,y1=15,y2=17  ;
	 box(x1,x2,y1,y2,3,0,0,0,0);
	 x1=61,x2=64,y1=15,y2=17  ;
	 box(x1,x2,y1,y2,15,12,1,68,0);


	 x1=19,x2=22,y1=12,y2=14 ;
	 box(x1,x2,y1,y2,11,3,0,0,0); // 8
	 x1=1,x2=4,y1=12,y2=14  ;
	 box(x1,x2,y1,y2,3,0,0,0,0);
	 x1=61,x2=64,y1=12,y2=14  ;

	 box(x1,x2,y1,y2,15,12,1,67,0);//*************
	 gotoxy(36,11);

	 printf("GOLD");

	 x1=19,x2=22,y1=8,y2=10 ;
	 box(x1,x2,y1,y2,11,3,0,0,0);
	 x1=1,x2=4,y1=8,y2=10  ;
	 box(x1,x2,y1,y2,3,0,0,0,0);
	 x1=61,x2=64,y1=8,y2=10  ;
	 box(x1,x2,y1,y2,15,12,1,66,0);

	 gotoxy(35,4);
	 printf("SILVER");


   x1=19,x2=22,y1=5,y2=7 ;
   box(x1,x2,y1,y2,11,3,0,0,0);


   x1=1,x2=4,y1=5,y2=7  ;
   box(x1,x2,y1,y2,3,0,0,0,0);
   x1=61,x2=64,y1=5,y2=7  ;
   box(x1,x2,y1,y2,15,12,1,65,0);

   counter=0;

   while(counter<no_of_tickets)
   {
	gotoxy(50,3);
	printf("ENTER ROW ");

	while(1)
	{
	///******************************************************************



	 switch(select_ticket)

	 {
	  case 1:
	  {
		while(1)
		{
		 gotoxy(60,3);
		 printf(" ");
		 gotoxy(60,3);
		 row=getche();
		 if(row=='A'||row=='a'||row=='B'||row=='b')
		 {
		   if(row=='a'||row=='b')
		   {
			row=row-32;
		   }
		   break;
		 }
		 else
		 {
		   gotoxy(63,3);
		   printf("Select silver");
		   getch();
		   gotoxy(63,3);
		   printf("             ");
		 }
		}
		break;
	  }

	  case 2:
	   {

		 while(1)
		 {
		  gotoxy(60,3);
		  printf(" ");
		  gotoxy(60,3);
		  row=getche();
		  if(row=='C'||row=='c'||row=='D'||row=='d'||row=='E'||row=='e')
		  {
			if(row=='c'||row=='d'||row=='e')
			{
			 row=row-32;
			}
			break;
		  }
		  else
		  {

		   gotoxy(63,3);
		   printf("Select gold");
		   getch();
		   gotoxy(63,3);
		   printf("           ");

		  }
		 }
		 break;
	   }

	  case 3:
	   {
		while(1)
		{
		 gotoxy(60,3);
		 printf(" ");
		 gotoxy(60,3);
		 row=getche();
		 if(row=='F'||row=='f')
		 {
		   if(row=='f')
		   {
			row=row-32;
		   }
		   break;
		 }
		 else
		 {
		   gotoxy(63,3);
		   printf("Select platinum");
		   gotoxy(63,3);
		   printf("               ");

		 }
		}
		break;

	   }

	 }



	  if(row>64 && row<71)
		{

		switch(row)
		 {
			case 65:
			{
			  while(1)
			  {
				gotoxy(50,4);
				printf("Seat_no");
				gotoxy(60,4);
				printf(" ");
				gotoxy(60,4);
				seat_no=getche();
				seat_no=seat_no-48;
			   if(seat_no>0 && seat_no<16)
			   {

				if(row1[seat_no]==0)
				{
				 row1[seat_no]++;
				 break;
				}
				else
				{
				 gotoxy(65,4);
				 printf("ALREADY BOOKED");
				 getch();
				 gotoxy(65,4);
				 printf("              ");
				}
			   }
			 else
			 {

			  gotoxy(65,4);
			  printf("INVALID INPUT");
			  getch();
			  gotoxy(65,4);
			  printf("             ");

			 }

			}//while

			break;

			}

			case 66:
			{

			  while(1)
			  {
			   gotoxy(50,4);
			   printf("Seat_no");

			   gotoxy(60,4);
			   printf(" ");

			   gotoxy(60,4);
			   seat_no=getche();
			   seat_no=seat_no-48;
			   if(seat_no>0 && seat_no<16)
			   {

				if(row2[seat_no]==0)
				 {
				  row2[seat_no]++;
				  break;
				 }
				else
				 {
					gotoxy(65,4);
					printf("ALREADY BOOKED");
					getch();
					gotoxy(65,4);
					printf("              ");
				 }
			   }
			   else
			   {
				gotoxy(65,4) ;
				printf("INVALID INPUT") ;
				getch();
				gotoxy(65,4);
				printf("              ");

			   }

			  }//while

			  break;

			}

			case 67:
			{
			  while(1)
			  {
			   gotoxy(50,4);
			   printf("Seat_no");

			   gotoxy(60,4);
			   printf(" ");

			   gotoxy(60,4);
			  //	scanf("%d",&seat_no);

			   seat_no=getch();
			   seat_no=seat_no-48;
			   if(seat_no>0 && seat_no<16)
			   {
				if(row3[seat_no]==0)
				{

				 row3[seat_no]++;
				 break;
				}
				else
				{

				 gotoxy(65,4);
				 printf("ALREADY BOOKED");

				 getch();

				 gotoxy(65,4);
				 printf("             ");


				}
			   }
			  else
			   {

				gotoxy(65,4);
				printf("INVALID INPUT");
				getch();
				gotoxy(65,4);
				printf("             ");

			   }

			  }
			  break;
			}

			case 68:
			{

			  while(1)
			  {

				gotoxy(50,4);
				printf("Seat_no");

				gotoxy(60,4);
				printf(" ");

				gotoxy(60,4);
				seat_no=getche();
				seat_no=seat_no-48;
				if(seat_no>0 && seat_no<16)
				 {
				if(row4[seat_no]==0)
				 {

				 row4[seat_no]++;

				 break;
				 }
				 else
				 {

				 gotoxy(65,4);
				 printf("ALREADY BOOKED");

				 getch();

				 gotoxy(65,4);
				 printf("              ");



				 }

			 }
			else
			 {
			   gotoxy(65,4);
			   printf("INVALID INPUT");
			   getch();
			   gotoxy(65,4);
			   printf("             ");

			 }

			  }
			  break;
			}

			case 69:
			{
			  while(1)
			  {
			gotoxy(50,4);
			printf("Seat_no") ;
			gotoxy(60,4);
			printf(" ");
			gotoxy(60,4);

			seat_no=getche();
			seat_no=seat_no-48;
			if(seat_no>0 && seat_no<16)
			{
			  if(row5[seat_no]==0)
			   {
				 row5[seat_no]++;
				 break;
			   }
			  else
			   {
				 gotoxy(65,4);
				 printf("ALREADY BOOKED");
				 getch();
				 gotoxy(65,4);
				 printf("               ");

			   }
			}
			else
			{

			  gotoxy(65,4);
			  printf("INVALID INPUT");
			  getch();
			  gotoxy(65,4);
			  printf("             ");

			}
			  }
			  break;

			}

			case 70:
			{

			   while(1)
			{

			  gotoxy(50,4);
			  printf("Seat_no")  ;
			  gotoxy(60,4);
			  printf(" ");
			  gotoxy(60,4);

			  seat_no=getche();
			  seat_no=seat_no-48;
			  if(seat_no>0 && seat_no<16)
				{
				  if(row6[seat_no]==0)
				{
				  row6[seat_no]++;
				  break;
				}
				  else
				{
				  gotoxy(65,4);
				  printf("ALREADY BOOKED");
				  getch();
				  gotoxy(65,4);
				  printf("              ");
				}
				}
			  else
				{
				 gotoxy(65,4);
				 printf("INVALID INPUT") ;
				 getch();
				 gotoxy(65,4);
				 printf("             ");
				 fflush(stdin);
				}
			}



			break;
			}

		 } //switch




		 break;
		}   //if

	   else
		{
		  gotoxy(72,3);
		  printf("INVALID!");
		  getch();
		  gotoxy(72,3);
		  printf("        ");

		}

	  }//while

	   switch(row)

	{

	   case 65:
	   {
		 if(seat_no>0 && seat_no<4)
		  {
		x1=1,x2=4,y1=5,y2=7  ;
		box(x1,x2,y1,y2,3,0,2,0,seat_no); //**********

		break;
		  }
		 else if(seat_no>3 &&seat_no<12)
		  {
		x1=19,x2=22,y1=5,y2=7 ;
		box(x1,x2,y1,y2,11,3,2,0,seat_no);
		  }
		 else
		 {
		x1=61,x2=64,y1=5,y2=7  ;
		box(x1,x2,y1,y2,14,11,2,0,seat_no);
		 }
		 break;
	   }


	   case 66:
	   {
		 if(seat_no>0 && seat_no<4)
		 {
		 x1=1,x2=4,y1=8,y2=10  ;
		 box(x1,x2,y1,y2,3,0,2,0,seat_no);
		 }
		 else if(seat_no>3 &&seat_no<12)
		 {
		  x1=19,x2=22,y1=8,y2=10 ;
		  box(x1,x2,y1,y2,11,3,2,0,seat_no);
		 }
		 else
		 {
		   x1=61,x2=64,y1=8,y2=10  ;
		   box(x1,x2,y1,y2,15,12,2,0,seat_no);
		 }
		 break;
		}

	   case 67:
		{
		 if(seat_no>0 && seat_no<4)
		  {
		x1=1,x2=4,y1=12,y2=14  ;
		box(x1,x2,y1,y2,3,0,2,0,seat_no);
		  }
		 else if(seat_no>3 &&seat_no<12)
		  {
		x1=19,x2=22,y1=12,y2=14 ;
		box(x1,x2,y1,y2,11,3,2,0,seat_no);
		  }
		 else
		  {
		x1=61,x2=64,y1=12,y2=14  ;
		box(x1,x2,y1,y2,15,12,2,0,seat_no);
		  }
		 break;
	   }

	   case 68:
	   {
		 if(seat_no>0 && seat_no<4)
		 {
		  x1=1,x2=4,y1=15,y2=17  ;
		  box(x1,x2,y1,y2,3,0,2,0,seat_no);
		 }
		 else if(seat_no>3 &&seat_no<12)
		 {
		  x1=19,x2=22,y1=15,y2=17 ;
		  box(x1,x2,y1,y2,11,3,2,0,seat_no);
		 }
		 else
		 {
		  x1=61,x2=64,y1=15,y2=17  ;
		  box(x1,x2,y1,y2,15,12,2,0,seat_no);
		 }
		 break;
	   }



	case 69:
	{

	   if(seat_no>0 && seat_no<4)
	   {
		 x1=1,x2=4,y1=18,y2=20  ;
		 box(x1,x2,y1,y2,3,0,2,0,seat_no);
	   }
	   else if(seat_no>3 &&seat_no<12)
	   {
		 x1=19,x2=22,y1=18,y2=20 ;
		 box(x1,x2,y1,y2,11,3,2,0,seat_no);
	   }
	   else
	   {
		 x1=61,x2=64,y1=18,y2=20  ;
		 box(x1,x2,y1,y2,15,12,2,0,seat_no);
	   }
	   break;

	 }



	 case 70:
	 {

		 x1=1,x2=4,y1=22,y2=24  ;
		 box(x1,x2,y1,y2,14,0,2,0,seat_no);

	   break;
	 }

	   }



   if (ticket_counter<no_of_tickets)
   {
	   movie_seat[ticket_counter]=seat_no;
	   movie_row[ticket_counter]=row;

	   ticket_counter++;
   }


   counter++;
  }

   getch();


 }



  void box(int x1, int x2, int y1, int y2, int no_of_seats, int count,int yes,char ch,int selected_seat)
   {
						   //x2-x1 33-30 =3
						  //y2-y1= 17-15 =2
	while(count<no_of_seats)
	{

	 gotoxy(x1,y1);
	 printf("%c",218);


	 gotoxy(x1+1,y2);
	 printf("%c",196);

	 gotoxy(x1+2,y2);
	 printf("%c",196);


	 gotoxy(x1,y1+1);
	 printf("%c",179);

	 gotoxy(x2,y1);
	 printf("%c",191);


	 gotoxy(x1+1,y1);
	 printf("%c",196);

	 gotoxy(x1+2,y1);
	 printf("%c",196);


	 gotoxy(x1,y2) ;
	 printf("%c",192);

	 gotoxy(x2,y1+1);
	 printf("%c",179);

	 gotoxy(x2,y2);
	 printf("%c",217);

	 x1=x1+5;
	 x2=x2+5;

	 count++;

	 gotoxy(x1-4,y1+1);

	 if(yes!=2) // a condition not to overwrite the marked seats
	  {
	   printf("%d",count);
	  }
	 if(count==selected_seat)
	  {
	    gotoxy(x1-4,y1+1);
	    printf("%c",219);
	  }

	}


      if(count==no_of_seats && yes==1)
      {
	 gotoxy(x1,y1+1) ;
	 printf("%c",ch);

      }

   }
   void pay_bill(int input,int *price,int select_ticket,int *movie_seat,char *movie_row,int no_of_tickets)
     {
       int offset=0,gst;
       char *movie_name=(char*)malloc(sizeof(char));

       char *ticket_type=(char*)malloc(sizeof(char));
      //**********************DESIGN**************************.

	      int count=0,user_input;
	      rectangle(26,56,4,24,0);
	      gotoxy(35,6);
	      printf("BIG CINEMAS");


	      gotoxy(34,7);
	      printf("%c",192);
	      gotoxy(34,6);
	      printf("%c",179);
	      gotoxy(34,5);
	      printf("%c",218);

	       count=0;
	       while(count<11)
	       {
		printf("%c",196);
		count++;
	       }

	      gotoxy(46,5);
	      printf("%c",191);
	      gotoxy(46,6);
	      printf("%c",179);


	      gotoxy(35,7);
	      count=0;
	      while(count<11)
	      {
		printf("%c",196);
		count++;
	       }
	      gotoxy(46,7);
	      printf("%c",217);


	     gotoxy(29,8);
	     printf("MOVIE: ");
	     gotoxy(29,9);
	     printf("TIcket_no");
	     gotoxy(39,9);

	     offset=0;
	     while(offset<no_of_tickets)
	     {
	     printf(" %d%c. ",movie_seat[offset],movie_row[offset]);
	     offset++;
	     }
   //******************************FOOT DESIGN***********************
       gotoxy(30,21);
       printf("%d",1);

       gotoxy(28,22);
       printf("MENU");

       gotoxy(29,20);
       printf("%d",1);

       gotoxy(27,23);
       printf("%c",192);
       gotoxy(27,22);
       printf("%c",179);
       gotoxy(27,21);
       printf("%c",218);
       gotoxy(28,21);
       printf("%c%c%c%c",196,196,196,196);
       gotoxy(32,21);
       printf("%c",191);
       gotoxy(32,22);
       printf("%c",179);
       gotoxy(32,23);
       printf("%c",217);
       gotoxy(28,23);
       printf("%c%c%c%c",196,196,196,196);

       gotoxy(39,21);
       printf("%d",2);

       gotoxy(37,22);
       printf("  PAY  ");


       gotoxy(40,20);
       printf("%d",2);

       gotoxy(36,23);
       printf("%c",192);
       gotoxy(36,22);
       printf("%c",179);
       gotoxy(36,21);
       printf("%c",218);
       gotoxy(37,21);
       count=0;
       while(count<8)
       {
       printf("%c",196);
       count++;
       }
       gotoxy(45,21);
       printf("%c",191);
       gotoxy(45,22);
       printf("%c",179);
       gotoxy(45,23);
       printf("%c",217);
       gotoxy(37,23);

       count=0;
       while(count<8)
       {
       printf("%c",196);
       count++;
       }
       gotoxy(51,21);
       printf("%d",3);

       gotoxy(49,22);
       printf("EXIT");


       gotoxy(50,20);
       printf("%d",3);

       gotoxy(48,23);
       printf("%c",192);
       gotoxy(48,22);
       printf("%c",179);
       gotoxy(48,21);
       printf("%c",218);
       gotoxy(49,21);
       count=0;
       while(count<5)
       {
       printf("%c",196);
       count++;
       }

       gotoxy(54,21);
       printf("%c",191);
       gotoxy(54,22);
       printf("%c",179);
       gotoxy(54,23);
       printf("%c",217);
       gotoxy(49,23);

       count=0;
       while(count<5)
       {
       printf("%c",196);
       count++;
       }


  //*********************FOOT DESIGN*******************

	     gotoxy(29,9);
	     movie_name=name_of_movie(input);
	     gotoxy(36,8);
	     offset=0;
	     while(movie_name[offset]!='\0')
	      {
	       printf("%c",movie_name[offset]);
	       offset++;
	      }
	     ticket_type= type_of_ticket(select_ticket);
	     offset=0;
	     gotoxy(29,10);
	     printf("TICKET:");

	     gotoxy(36,10);
	     while(ticket_type[offset]!='\0')
	      {
	       printf("%c",ticket_type[offset]);
	       offset++;
	      }

	gst=*price;
	gst=(gst*18)/100;
	*price=*price+gst ;
	gotoxy(29,12);
	printf("GST : 18% ");
	gotoxy(29,14);
	printf("TOTAL : %d",*price);
	gotoxy(29,16);
	printf("ENTER A CHOICE:");
	while(1)
	{
	 gotoxy(45,16);

	// scanf("%d",&user_input);
	 user_input=getche();
	 user_input=user_input-48;

	 if(user_input>0 && user_input<4)
	 {
	  break;
	 }
	 else
	 {
	    gotoxy(45,17);
	    printf("INVALID!");
	    getch();
	    gotoxy(45,17);
	    printf("        ");
	 }


	}


	 switch(user_input)
	 {

	   case 1:
	    {
	     select_movie();
	     break;
	    }

	   case 2:
	    {
	     last_window();

	    }
	   case 3:
	    {
	     exit(0);
	     break;
	    }

	 }

	 getch();




     }


    void last_window()
    {

	      int count=0,user_input;


  //*******************DESIGN*************************************

	      rectangle(26,56,4,24,0);
	      gotoxy(35,6);
	      printf("BIG CINEMAS");


	      gotoxy(34,7);
	      printf("%c",192);
	      gotoxy(34,6);
	      printf("%c",179);
	      gotoxy(34,5);
	      printf("%c",218);

	       count=0;
	       while(count<11)
	       {
		printf("%c",196);
		count++;
	       }

	      gotoxy(46,5);
	      printf("%c",191);
	      gotoxy(46,6);
	      printf("%c",179);


	      gotoxy(35,7);
	      count=0;
	      while(count<11)
	      {
		printf("%c",196);
		count++;
	       }
	      gotoxy(46,7);
	      printf("%c",217);


	   gotoxy(30,12);
	   printf("WANT TO CONTINUE OR EXIT?");

	   gotoxy(30,14);
	   printf("ENTER YOUR CHOICE:");



       gotoxy(34,17);
       printf("%d",1);

       gotoxy(32,18);
       printf("CONTINUE");


	gotoxy(35,16);
	printf("%d",1);

       gotoxy(31,19);
       printf("%c",192);
       gotoxy(31,18);
       printf("%c",179);
       gotoxy(31,17);
       printf("%c",218);
       gotoxy(32,17);
       count=0;
       while(count<8)
       {
       printf("%c",196);
       count++;
       }
       gotoxy(40,17);
       printf("%c",191);
       gotoxy(40,18);
       printf("%c",179);
       gotoxy(40,19);
       printf("%c",217);
       gotoxy(32,19);

       count=0;
       while(count<8)
       {
       printf("%c",196);
       count++;
       }
       gotoxy(46,17);
       printf("%d",2);

       gotoxy(44,18);
       printf("EXIT");


       gotoxy(45,16);
       printf("%d",2);

       gotoxy(43,19);
       printf("%c",192);
       gotoxy(43,18);
       printf("%c",179);
       gotoxy(43,17);
       printf("%c",218);
       gotoxy(44,17);
       count=0;
       while(count<5)
       {
       printf("%c",196);
       count++;
       }

       gotoxy(49,17);
       printf("%c",191);
       gotoxy(49,18);
       printf("%c",179);
       gotoxy(49,19);
       printf("%c",217);
       gotoxy(44,19);

       count=0;
       while(count<5)
       {
       printf("%c",196);
       count++;
       }

	 while(1)

	   {
	    gotoxy(49,14);
	   // scanf("%d",&user_input);
	    user_input=getche();
	    user_input=user_input-48;
	    if(user_input>0 && user_input<3)
	     {
	      break;
	     }
	    else
	     {
	      gotoxy(48,15);
	      printf("INVALID ENTRY!") ;
	      getch();
	      printf("              ");
	     }

	   }



		switch(user_input)
	   {
	    case 1:
		 {
		  main();

		 }

		case 2:
		 {
		  exit(0);
		 }
	   }




	getch();










	}

	char *name_of_movie(int movie_no)
	 {

	   char *movie_name=(char*)malloc(sizeof(char));
	   switch(movie_no)
	   {
	case 1:
	 {
	  movie_name="PROJECT X" ;
	  break;
	 }
	case 2:
	 {
	  movie_name="THE OFFICE";
	  break;

	 }
	case 3:
	  {
	   movie_name="SUPERBAD";
	   break;

	  }


	   }


	   return(movie_name);
	 }

	char *type_of_ticket(int select_ticket )
	 {
	  char *ticket_type=(char*)malloc(sizeof(char));
	  switch(select_ticket)
	   {
		 case 1:
		 {
		  ticket_type="SILVER" ;
		  break;

		 }
		case 2:
		 {
		  ticket_type="GOLD";
		  break;
		 }
		case 3:
		 {
		  ticket_type="PLATINUM" ;
		  break;
		 }

	   }
	  return(ticket_type);

	 }






   void help()
	{
	  int temp_input,count=0;
	  rectangle(26,55,4,24,0);
	  gotoxy(35,6);
	  printf("BIG CINEMAS");

	  gotoxy(34,7);
	  printf("%c",192);
	  gotoxy(34,6);
	  printf("%c",179);
	  gotoxy(34,5);
	  printf("%c",218);

	  count=0;
	  while(count<11)
	  {
	  printf("%c",196);
	  count++;
	  }

	  gotoxy(46,5);
	  printf("%c",191);
	  gotoxy(46,6);
	  printf("%c",179);


	  gotoxy(35,7);
	  count=0;
	  while(count<11)
	  {
	   printf("%c",196);
	   count++;
	  }
	  gotoxy(46,7);
	  printf("%c",217);

	  gotoxy(28,12);
	  printf("CALL CUSTOMER SUPPORT AT");
	  gotoxy(35,14);
	  printf("18008080000");
	  gotoxy(27,19);
	  count=0;
	  while(count<27)
	  {
	   printf("%c",196);
	   count++;
	  }
	  gotoxy(28,20);
	  printf("PRESS THE CORROSPONDING");
	  gotoxy(28,21);
	  printf("NUMBER TO CONTINUE");
	  gotoxy(28,23) ;
	  printf("GO BACK 1");
	  gotoxy(27,23);
	  printf("%c",254);
	  gotoxy(46,23);
	  printf("EXIT 2");
	  gotoxy(45,23);
	  printf("%c",254);
	  while(1)
	  {
	   gotoxy(40,18);
	   temp_input=getch();
	   temp_input=temp_input-48;

	   if(temp_input>0&&temp_input<3)
	   {
		switch(temp_input)
		{
		 case 1:
		 {
		  select_movie();
		 }
		 case 2:
		 {
		  exit(0);
		 }
		}
		break;
	   }
	   else
	   {
		gotoxy(44,18);
		printf("Try again");
		getch();
		gotoxy(44,18);
		printf("         ");

	   }
	  }
	}

  void rectangle(int right_start,int right_end, int bottom_start,int bottom_down,int rectangle_border)
  {
   int x=right_start,y=bottom_start;
	clrscr();

   while(x<right_end) //right_end=20
    {
     gotoxy(x,y);

     if(rectangle_border==1)
     {
      printf("%c",178);
     }
     else
     {
      printf("%c",219);
     }
     x++;

    }
   // x=1;
    while(y<bottom_down)   //bottom_down=10
    {
     gotoxy(x,y);
     if(rectangle_border==1)
     {
      printf("%c",178);
     }
     else
     {
      printf("%c",219);
     }
      y++;

    }

   while(x>right_start)
   {
     gotoxy(x,y);
     if(rectangle_border==1)
     {
      printf("%c",178);
     }
     else
     {
      printf("%c",219);
     }
     x--;
   }

    while(y>bottom_start)
   {
     gotoxy(x,y);

     if(rectangle_border==1)
     {
      printf("%c",178);
     }
     else
     {
      printf("%c",219);
     }
     y--;
   }

 }

