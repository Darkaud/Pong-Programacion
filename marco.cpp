#include <ncurses.h>
void marcovertizq()
{
for(int i=0 ; i<20 ; i++)
 {
       move(4+i,0);
       printw("|");
       }
}
void marcoverder()
{
for(int i=0 ; i<=77 ; i++)
{for(int n=4 ;n<24 ;n++  )

{
   move(n , 79 );
   printw("|");
}
}
}
void marcohorinferior()
{
for (int i=0 ;i<=78 ;i++)
{
move(24 , 0+i );
printw("-");
}
}
void marcohorsuperior()
{
for (int i=0 ; i<=78 ; i++)
{
move(4 , 1+i);
printw("-");
}
}

int main ()
{

        initscr();
       marcovertizq();
       marcohorinferior();
       marcohorsuperior();
       marcoverder();
       getch();
      endwin();
       return(0);
       }
