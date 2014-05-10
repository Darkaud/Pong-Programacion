#include <curses.h>

int main()
{
    int x1 = 5;
    int y1 = 5, y2 = 6 , y3 = 7, y4 = 8, y5 = 9, y6 = 10, y7 = 11;
    int x2 = 75;
    int y8 = 5, y9 = 6, y10 = 7, y11 = 8, y12 = 9, y13 = 10, y14 = 11;
    int ch, ch1;
    int ncolumns = 1;
    initscr();
    curs_set(0);
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    noecho();


    while (1)
    {
        mvwhline(stdscr, y1, x1, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y2, x1, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y3, x1, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y4, x1, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y5, x1, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y6, x1, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y7, x1, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y8, x2, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y9, x2, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y10, x2, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y11, x2, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y12, x2, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y13, x2, ACS_VLINE, ncolumns);
        mvwhline(stdscr, y14, x2, ACS_VLINE, ncolumns);
        ch = getch();
        ch1 = getch();

        switch(ch)
        {
        case 115:

            y1++;
            y2++;
            y3++;
            y4++;
            y5++;
            y6++;
            y7++;
            clear();
            break;

        case 119:

            y1--;
            y2--;
            y3--;
            y4--;
            y5--;
            y6--;
            y7--;
            clear();
            break;
        }

        switch(ch1)
        {
        case KEY_DOWN:

            y8++;
            y9++;
            y10++;
            y11++;
            y12++;
            y13++;
            y14++;
            clear();
            break;

        case KEY_UP:

            y8--;
            y9--;
            y10--;
            y11--;
            y12--;
            y13--;
            y14--;
            clear();
            break;

        }

        refresh();
    }
    endwin();
    return 0;
}
