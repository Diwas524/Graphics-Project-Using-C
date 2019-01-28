#include<graphics.h>
void start();
void Rc();
void Lc();
void LL(int k);
void RR(int k);
void boarder();
int ask();
void end();
void wellplayed();
void welcome();
void goal();
void tryagain();
int ra();
int main()
{
   int gd = DETECT, gm;
   int x,y,i,m,n,fix1,fix2;
   char ran;
   float r,h,head;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   ////setcolor(4);
   
   welcome();
   xx:
   setcolor(GREEN);
   char check=ask();
   delay(50);
   
/*
   start();
   RR(-13);
   LL(13);
   Rc();
   LL(-13);
   Lc();
   RR(13);*/
  if (check=='1')
      { ran = ra();
        if (ran=='1')
        { 
         start();
        cleardevice();
        LL(-13);
        cleardevice();
        tryagain();
        goto yy;
        }
        else
        {
        start();
        cleardevice();
         RR(-13);
        cleardevice();
         goal();
        goto xx;
        }
       }  
  else if (check=='3')
  
   { ran = ra();
        if (ran=='1')
        {
         start();
         cleardevice(); 
        RR(13);
        cleardevice();
        tryagain();
        goto yy;
        }
        else
        {
        start();
        cleardevice();
         LL(13);
        cleardevice();
         goal();
        goto xx;
        }
       
  }
  if (check=='2')
      { ran = ra();
        if (ran=='1')
        { 
        start();
        cleardevice();
        Rc(-13);
        cleardevice();
        goal();
        goto xx;
        }
        else
        {
         start();
          cleardevice();
         Lc(13);
        cleardevice();
         goal();
        goto xx;
        }
       }
  //goto xx;
  yy:
  cleardevice();
  end();
  closegraph();
  return 0;
}
void start()
    {  
       int i;
       for(i=0;i<=2;i++)
        {
          cleardevice();
          boarder(); 
          circle(320,80,15);
          line(320,95,320,140);
          line(320,120,290,95);      //hand
          line(320,120,350,95);
          line(320,140,350,170);      //leg
          line(320,140,290,170);
           circle(320,290,15);
          delay(300);
          
          cleardevice();
          boarder();
          circle(320,70,15);
          line(320,85,320,130);
          line(320,110,290,115);      //hand
          line(320,110,350,115);
          line(320,130,335,170);      //leg
          line(320,130,305,170);
           circle(320,290,15);
          delay(300);
        }
}
 

void boarder()

{    line(100,170,0,479);              //diagonalL
      line(539,170,639,479);            //diagonalR
      setcolor(WHITE);
      rectangle(120,50,519,170);        //boxUp
      rectangle(130,60,509,170);
       setcolor(GREEN);
      rectangle(250,10,389,40);        //boxLow
      line(100,170,539,170); 
      line(100,170,539,170); 
      rectangle(250,10,389,40);        //boxLow
      rectangle(255,15,384,35);
      outtextxy(265,20,"NEPAL vs INDIA");
      
        
}

void LL(int k)
{
   int m=320;int n=290;int r=20.0;int h=80 ;int head=320;
   int fix1=320;int fix2=140;int i;
   for(i=0;i<10;i++)
   { 
      cleardevice();
      boarder();
      if (i<5)
           { 
              circle(head,h,15);
              line(head,h+15,fix1,fix2);       //body
              line((head+fix1)/2,(h+15+fix2)/2,n-5,h+10);      //hand
              line((head+fix1)/2,(h+15+fix2)/2,head+35,h+10);
              line(fix1,fix2,fix1-20,fix2+20);      //leg
              line(fix1,fix2,fix1+20,fix2+20);
           }
      else
           {
              circle(head,h,15);
              line(head+15,h,fix1,fix2);       //body
              line((head+15+fix1)/2,(h+fix2)/2,n+35,h+30);      //hand
              line((head+15+fix1)/2,(h+fix2)/2,head+30,h-25);
              line(fix1,fix2,fix1-25,fix2-30);      //leg
              line(fix1,fix2,fix1+25,fix2-30);
           }
      setcolor(RED);
      circle(m,n,15);
      circle(m,n,10);
      circle(m,n,5);
      setcolor(GREEN);
      m=m+k;n=n-15;r=r-0.5,h=h+5;
      h=h+2;head=head-15;fix2=fix2+2;fix1=fix1-5;
      delay(100);         
   }
}
    

void RR(int k)
{
 int m=320;int n=290;int r=20.0;int h=80 ;int head=320;
 int fix1=320;int fix2=140;int i;
 for(i=0;i<10;i++)
   { 
      cleardevice();
      boarder();
      if (i<5)
            { 
                  circle(head,h,15);
                  line(head,h+15,fix1,fix2);       //body
                  line((head+fix1)/2,(h+15+fix2)/2,head+15,h-10);      //hand
                  line((head+fix1)/2,(h+15+fix2)/2,head+35,h+10);
                  line(fix1,fix2,fix1-20,fix2+20);      //leg
                  line(fix1,fix2,fix1-20,fix2-20);
            }
      else 
            {
                  circle(head,h,15);
                  line(head-15,h,fix1,fix2);       //body
                  line((head-15+fix1)/2,(h+fix2)/2,head,h-30);      //hand
                  line((head-15+fix1)/2,(h+fix2)/2,head,h+30);
                  line(fix1,fix2,fix1-20,fix2+20);      //leg
                  line(fix1,fix2,fix1-20,fix2-20);
            }
      setcolor(RED);
      circle(m,n,15);
      circle(m,n,10);
      circle(m,n,5);
      setcolor(GREEN);
      m=m+k;n=n-15;r=r-0.5,h=h+5;
      h=h+2;head=head+15;fix2=fix2+1;fix1=fix1+5;
      delay(100);         
   }
}
 int ra()
  {
    int x;
    x= (rand()+1)%2;
    if (x==1)
       return '1';
   else 
      return '2';
}

void Rc()
{
   int m=320;int n=290;int r=20.0;int h=80 ;int head=320;
   int fix1=320;int fix2=140;int i;
   for(i=0;i<10;i++)
     { 
        cleardevice();
        boarder();       
         if (i<5)
                { 
                    circle(head,h,15);
                    line(head,h+15,fix1,fix2);       //body
                    line((head+fix1)/2,(h+15+fix2)/2,head+15,h-10);      //hand
                    line((head+fix1)/2,(h+15+fix2)/2,head+35,h+10);
                    line(fix1,fix2,fix1-20,fix2+20);      //leg
                    line(fix1,fix2,fix1-20,fix2-20);
                }
         else 
              {
                    circle(head,h,15);
                    line(head-15,h,fix1,fix2);       //body
                    line((head-15+fix1)/2,(h+fix2)/2,head,h-30);      //hand
                    line((head-15+fix1)/2,(h+fix2)/2,head,h+30);
                    line(fix1,fix2,fix1-20,fix2+20);      //leg
                    line(fix1,fix2,fix1-20,fix2-20);
              }

      setcolor(RED);
      circle(m,n,15);
      circle(m,n,10);
      circle(m,n,5);
      setcolor(GREEN);
     n=n-15;r=r-0.5,h=h+5;
     h=h+2;head=head+15;fix2=fix2+1;fix1=fix1+5;
     delay(100);         
  }
}
void welcome()
{
  //welcome screen

   outtextxy(250,230,"D");
   delay(130);
   cleardevice();
outtextxy(250,230,"DI");
   delay(130);cleardevice();
outtextxy(250,230,"DIW");
   delay(130);cleardevice();
outtextxy(250,230,"DIWA");
   delay(130);cleardevice();
outtextxy(250,230,"DIWAS");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS M");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS ME");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MED");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MEDIA");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MEDIA P");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MEDIA PR");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MEDIA PRE");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MEDIA PRES");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MEDIA PRESE");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MEDIA PRESEN");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MEDIA PRESENT");
   delay(110);cleardevice();
outtextxy(250,230,"DIWAS MEDIA PRESENTS");
   delay(1000);
  cleardevice();
setfontcolor(RED);
outtextxy(270,230,"P");
   delay(110);cleardevice();
outtextxy(270,230,"PE");
   delay(110);cleardevice();
outtextxy(270,230,"PEN");
   delay(110);cleardevice();
outtextxy(270,230,"PENA");
   delay(110);cleardevice();
outtextxy(270,230,"PENAL");
   delay(110);cleardevice();
outtextxy(270,230,"PENALT");
   delay(110);cleardevice();
outtextxy(270,230,"PENALTY");
   delay(110);cleardevice();
outtextxy(270,230,"PENALTY G");
   delay(110);cleardevice();
outtextxy(270,230,"PENALTY GA");
   delay(110);cleardevice();
outtextxy(270,230,"PENALTY GAM");
   delay(110);cleardevice();
outtextxy(270,230,"PENALTY GAME ");
   delay(2000);cleardevice();}


void Lc()
{
    int m=320;int n=290;int r=20.0;int h=80 ;int head=320;
    int fix1=320;int fix2=140;int i;
    for(i=0;i<10;i++)
      { 
         cleardevice();
         boarder();
         if (i<5)
            { 
                circle(head,h,15);
                line(head,h+15,fix1,fix2);       //body
                line((head+fix1)/2,(h+15+fix2)/2,n-5,h+10);      //hand
                line((head+fix1)/2,(h+15+fix2)/2,head+35,h+10);
                line(fix1,fix2,fix1-20,fix2+20);      //leg
                line(fix1,fix2,fix1+20,fix2+20);
            }
        else
            {
                circle(head,h,15);
                line(head+15,h,fix1,fix2);       //body
                line((head+15+fix1)/2,(h+fix2)/2,n+35,h+30);      //hand
                line((head+15+fix1)/2,(h+fix2)/2,head+30,h-25);
                line(fix1,fix2,fix1-25,fix2-30);      //leg
                line(fix1,fix2,fix1+25,fix2-30);
            }

      setcolor(RED);
      circle(m,n,15);
      circle(m,n,10);
      circle(m,n,5);
      setcolor(GREEN);
      n=n-15;r=r-0.5,h=h+5;
      h=h+2;head=head-15;fix2=fix2+2;fix1=fix1-5;
      delay(100);            
   }
}

void end()
{
setfontcolor(YELLOW);
wellplayed();
outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- D");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- DI");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- DIW");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- DIWA");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- DIWAS");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- DIWAS ");
   delay(110);outtextxy(300,180,"WELL PLAYED");
outtextxy(250,230,"DEVELOPED BY:- DIWAS P");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- DIWAS PA");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- DIWAS PAN");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- DIWAS PAND");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!!");
outtextxy(250,230,"DEVELOPED BY:- DIWAS PANDE");
   delay(110);cleardevice();outtextxy(300,180,"WELL PLAYED !!! ");
outtextxy(250,230,"DEVELOPED BY:- DIWAS PANDEY");
   delay(3000);cleardevice();
}
int ask()
{
      char x;
      cleardevice();
                  //mid line
      line(100,170,0,479);              //diagonalL
      line(539,170,639,479);            //diagonalR
      setcolor(WHITE);
      rectangle(120,50,519,170);        //boxUp
      rectangle(130,60,509,170);
       setcolor(GREEN);
      rectangle(250,10,389,40);        //boxLow
      line(100,170,539,170);
        circle(320,80,15);
          line(320,95,320,140);
          line(320,120,290,95);      //hand
          line(320,120,350,95);
          line(320,140,350,170);      //leg
          line(320,140,290,170);
      outtextxy(265,20,"NEPAL vs INDIA");
      rectangle(255,15,384,35);
      setfontcolor(YELLOW);
      outtextxy(130,150,"LEFT:1");
      outtextxy(290,150,"CENTRE:2");
      outtextxy(450,150,"RIGHT:3");
      outtextxy(300,250,"END GAME:4");
      setfontcolor(WHITE);
      outtextxy(210,320,"Where Do u Wanna Kick The Ball??");
      setfontcolor(RED);
      x=getchar();
      
      return x;
}
void wellplayed()
{
outtextxy(300,180,"W");
   delay(110);cleardevice();
outtextxy(300,180,"WE");
   delay(110);cleardevice();
outtextxy(300,180,"WEL");
   delay(110);cleardevice();
outtextxy(300,180,"WELL ");
   delay(110);cleardevice();
outtextxy(300,180,"WELL P");
   delay(110);cleardevice();
outtextxy(300,180,"WELL PL");
   delay(110);cleardevice();
outtextxy(300,180,"WELL PLA");
   delay(110);cleardevice();
outtextxy(300,180,"WELL PLAY");
   delay(110);cleardevice();
outtextxy(300,180,"WELL PLAYE");
   delay(110);cleardevice();
outtextxy(300,180,"WELL PLAYED !!!");
   delay(1100);cleardevice();
}
void goal()

{    for (int i=0;i<=4;i++){
       line(100,170,0,479);              //diagonalL
      line(539,170,639,479);            //diagonalR
      setcolor(WHITE);
      rectangle(120,50,519,170);        //boxUp
      rectangle(130,60,509,170);
       setcolor(GREEN);
      rectangle(250,10,389,40);        //boxLow
      line(100,170,539,170); 
      line(100,170,539,170); 
      rectangle(250,10,389,40);        //boxLow
      rectangle(255,15,384,35);
      outtextxy(265,20,"   !!! GOAL !!! ");
      delay(200);
      cleardevice();
      line(100,170,0,479);              //diagonalL
      line(539,170,639,479);            //diagonalR
      setcolor(WHITE);
      rectangle(120,50,519,170);        //boxUp
      rectangle(130,60,509,170);
       setcolor(GREEN);
      rectangle(250,10,389,40);        //boxLow
      line(100,170,539,170); 
      line(100,170,539,170); 
      rectangle(250,10,389,40);        //boxLow
      rectangle(255,15,384,35);
      setfontcolor(YELLOW);
      outtextxy(265,20,"   !!! GOAL !!! ");
      
      delay(200);setfontcolor(RED);  }
}
void tryagain()
{
{    for (int i=0;i<=4;i++){
       line(100,170,0,479);              //diagonalL
      line(539,170,639,479);            //diagonalR
      setcolor(WHITE);
      rectangle(120,50,519,170);        //boxUp
      rectangle(130,60,509,170);
       setcolor(GREEN);
      rectangle(250,10,389,40);        //boxLow
      line(100,170,539,170); 
      line(100,170,539,170); 
      rectangle(250,10,389,40);        //boxLow
      rectangle(255,15,384,35);
      outtextxy(265,20,"   !!! MISSED !!! ");
      delay(200);
      cleardevice();
      line(100,170,0,479);              //diagonalL
      line(539,170,639,479);            //diagonalR
      setcolor(WHITE);
      rectangle(120,50,519,170);        //boxUp
      rectangle(130,60,509,170);
       setcolor(GREEN);
      rectangle(250,10,389,40);        //boxLow
      line(100,170,539,170); 
      line(100,170,539,170); 
      rectangle(250,10,389,40);        //boxLow
      rectangle(255,15,384,35);
      setfontcolor(YELLOW);
      outtextxy(265,20,"   !!! MISSED !!! ");
      
      delay(200);setfontcolor(RED);  }
}
}

