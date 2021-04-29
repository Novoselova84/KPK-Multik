#include "TXLib.h"

#include "stdio.h"

void drawTV ();
void matematika ();

#define PRAISE " Вот эта да, какое великолепное имя"
#define TRUE 1
#define FALSE 0
#define PI 3.14159


int main()
    {
    txCreateWindow (1400, 800);
    txClear();

    matematika ();
    drawTV ();

    return 0;
    }

void drawTV ()
    {

    txSetColor     (RGB (112, 112, 112), 10);
    txSetFillColor (RGB (192, 244, 245));
    txRectangle  (10, 10, 1400, 800);                           // txRectangle  (10, 10, 790, 590);

    txSetFillColor (RGB (112, 112, 112));                       //txRectangle  (670, 10, 780, 590);
    txRectangle  (1210, 10, 1390, 790);

    txSetColor     (RGB (255, 0, 0));                           //txRectangle  (690, 50, 730, 70);
    txSetFillColor (RGB (255, 0, 0));
    txRectangle  (1260, 50, 1310, 70);

    txSetColor     (RGB (0, 0, 255));
    txSetFillColor (RGB (0, 0, 255));
    txRectangle   (1310, 50, 1360, 70);                           //txRectangle   (730, 50, 770, 70);

    txSetColor     (RGB (255, 255, 0));
    txSetFillColor (RGB (255, 255, 0));                           //txCircle (730, 150, 30);
    txCircle (1310, 200, 30);

    txSetColor (RGB (0, 255, 0));
    txSetFillColor (RGB (0, 255, 0));                             //txCircle (730, 230, 30);
    txCircle (1310, 280, 30);

    txSetColor (RGB (0, 0, 128));
    txSetFillColor (RGB (0, 0, 128));                             //txCircle (730, 310, 30);
    txCircle (1310, 360, 30);

    txSetColor (RGB (128, 0, 128));                              //  txCircle (730, 390, 30);
    txSetFillColor (RGB (128, 0, 128));
    txCircle (1310, 440, 30);

    txSetColor (RGB (101, 88, 116), 4);                           //txCircle (730, 510, 50);
    txSetFillColor (RGB (125, 109, 146));
    txCircle (1310, 610, 50);

    txSetColor (RGB (101, 88, 116));
    txSetFillColor (RGB (101, 88, 116));                          //txRectangle (725, 480, 735, 540);
    txRectangle (1300, 580, 1320, 640);


    txSetColor ( TX_BLACK, 5);
    txSelectFont   ("Arial", 40, 0, FW_BOLD);
    txDrawText   (1210,  700, 1390, 750, " Электрон");

    txSetColor     (RGB ( 77,  84, 225), 10);
    txSetFillColor (RGB ( 77,  84, 225));
    txRectangle  (20, 20, 1210, 790);

    }

void matematika ()
    {
    int x = 30;
    int z = 20;
    int t = 20;
    $y; printf("    y = %d\n", z * t/x); $d;
    $(z * t/x);


    double a = 0.2;
    float b = 20.0;
    printf(" c = %f \n", a - b);

    printf(" Запомните, \" символ \\ называется обратная косая черта. \" \n");

    char ch;
    printf (" Введите, пожалуйста, символ .\n");
    scanf  ("%c", &ch);
    printf (" Koд символа %c равен %d.\n", ch, ch);

    printf(" Данные типа int занимают %d байта. \n", sizeof (int));
    printf(" Данные типа char занимают %d байт.\n", sizeof (char));
    printf(" Данные типа long занимают %d байта.\n", sizeof (long));
    printf(" Данные типа double занимают %d байт.\n", sizeof (double));

    int g, rate;
	g = 10;
	rate = 10e2;
    printf (" tax = %d", rate*g);

    char name [50];
    printf(" Как вас зовут?\n");
    scanf(" %s", name);
    printf(" Привет, %s. %s\n" , name, PRAISE);
    printf(" Ваше имя состоит из %d букв и занимает %d ячеек памяти. \n",strlen (name), sizeof name);
    printf(" Хвалебная фраза состоит из %d букв", strlen (PRAISE));
    printf(" и занимает %d ячеек памяти. \n", sizeof PRAISE);

    printf(" %d, %d, %d \n", TRUE + TRUE, FALSE * TRUE, TRUE /TRUE);

    double area;
    float radius;
    printf("Чемy равен радиус вашей пиццы? \n");
    scanf("%f", &radius);

    printf(" Основные параметры вашей пиццы следующие \n");
    area = PI * radius * radius;
    printf("  площадь = %1.2f \n", area);


    }
