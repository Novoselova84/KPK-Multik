//{=======================================================
//+  $file   Novoselova_Olessya_Multik.cpp
//
//+  $title  Cartoon "SALVATION".
//
//+          The cartoon was created within the framework
//+          of the CCP on computer science
//+          "Science in the regions".
//+
//
//+  $date   2021 year.
//
//+  $author Novoselova Olesya Anatolyevna computer
//+          science teacher of MAOU "ML No. 1" of
//+          Magnitogorsk
//}========================================================

# include "LessanLib.h"

using namespace Lessan;

void Hello          ();

void TitleMultika   ();

void Loneliness     ();

void Hope           ();

void Fear           ();

void Salvation      ();

void Happiness      ();

void Enjoyment      ();

void TobeContinued  ();

void Author         ();

void DrawBascground ();

int main            ()
    {
    txBegin ();

    txCreateWindow (1400, 800);

    Hello           ();
    TitleMultika    ();
    Loneliness      ();
    Hope            ();
    Fear            ();
    Salvation       ();
    Happiness       ();
    Enjoyment       ();
    TobeContinued   ();
    Author          ();

    DrawBascground  ();
    DrawTV          ();

    txEnd ();
    return 0;
    }

void Hello ()
    {
    txBegin ();

    txPlaySound ("Sounds/Hello.wav");

    int t = 0;
    while (t <= 100)
        {
        DrawBascground ();

        txSetColor     (RGB (128, 0, 0), 50);
        txSelectFont   ("Gabriola", 300);
        txDrawText     (20, 300 - t*1.5, 1210, 785 - t*1.5, "Привет, друзья!");

        DrawSun        (600, 340, 1.2, 1.2, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), (t/30)%2 * 1, (t/40)%2 * 1, 0, (t/30)%2 * 1, (t/20)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void TitleMultika ()
    {
    txBegin ();

    txPlaySound ("Sounds/TitleMultika.wav");

    int t = 0;
    while (t <= 60)
        {
        DrawBascground ();

        txSelectFont ("Constantia", 250);
        DrawTextDraw (20, 400 - t*2, 1210, 585 - t*2, "Мультфильм", RGB (255, 0, 128), RGB (206, 0, 103));

        txSelectFont ("Arial", 300);
        DrawTextDraw (20, 180 + t*2, 1210, 385 + t*2, "Salvation", RGB (0, 115, 230), RGB (0, 77, 153));

        txSetColor   (TX_LIGHTBLUE, 50);
        txSelectFont ("Gabriola", 100);
        txDrawText   (400, 700, 800, 750, "2021 год");

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void Loneliness ()
    {
    txBegin ();

    txPlaySound ("Sounds/Loneliness.wav");

    int t = 0;
    while (t <= 250)
        {
        DrawBascground ();
        DrawOcean      ( 15,       320, 1,   1,   RGB (77, 84, 225), 0, 0);
        DrawSmallCloud (500 + t/2, 100, 1,   1,   TX_WHITE, 0);
        DrawBigCloud   (100 + t/2,  50, 1,   1,   TX_WHITE, 0, 0);

        DrawSun        (150 + t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0), TX_WHITE,
                        RGB (128, 0, 255), (t/30)%2 * 1, 0, 0, 0, (t/40)%2 * 1);

        DrawWhale      (800 - t/2, 400, 0.7, 0.7, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/40)%2 * 1);
        DrawWhale      (600 - t/2, 500, 0.8, 0.8, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/40)%2 * 1, (t/40)%2 * 1, (t/40)%2 * 1);
        DrawWhale      (800 - t/2, 600, 1,   1,   RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/40)%2 * 1);
        DrawIsland     (150,       650, 1,   1,   RGB (  0, 128,   0), TX_YELLOW, (t/30)%2 * 1);

        DrawMan        (350 + t/2, 550, 1,   1,   RGB (192, 192, 192), TX_RED, TX_WHITE,
                        RGB (0, 128, 128), (t/20)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1, 0);

        DrawPalma      (200,       720, 1.2, 1.2, RGB (108,  54,   0), RGB (0, 128, 0), TX_BROWN, (t/30)%2 * 1, 0);

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void Hope ()
    {
    txBegin ();

    txPlaySound ("Sounds/volnyi.wav");

    int t = 0;
    while (t <= 200)
        {
        DrawBascground ();
        DrawOcean      (  15,       320, 1,   1,   RGB (77, 84, 225), 0, 0);
        DrawSmallCloud ( 500 + t/2, 100, 1,   1,   TX_WHITE, 0);
        DrawBigCloud   ( 100 + t/2,  50, 1,   1,   TX_WHITE, 0, 0);

        DrawSun        (1050 - t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), 0, (t/40)%2 * 1, 0, 0, (t/40)%2 * 1);

        DrawShip       ( 250 + t/2, 300, 0.3, 0.2, TX_GREY, TX_YELLOW, RGB (164, 82, 0), TX_PINK, TX_CYAN, TX_GREY, 0, 0, 0);
        DrawWhale      ( 800 - t/2, 500, 0.9, 0.9, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawIsland     ( 150,       650, 1,   1,   RGB (  0, 128,   0), TX_YELLOW, (t/30)%2 * 1);

        DrawMan        ( 600,       550 - (t/10)%2 * 10, 1, 1, RGB (192, 192, 192), TX_RED, TX_WHITE,
                        RGB (0, 128, 128), (t/20)%2 * 1, 0, (t/30)%2 * 1, 0);

        DrawTorch      ( 500,       520 - (t/10)%2 * 10, 1,   1,   RGB (108,  54, 0), RGB (255, 0, 0), (t/20)%2 * 1);
        DrawTreasures  ( 900,       650,                 1,   1,   RGB (128, 128, 0), TX_YELLOW, TX_RED, 0, 0);
        DrawPalma      ( 200,       720,                 1.2, 1.2, RGB (108,  54, 0), RGB (0, 128, 0), TX_BROWN, 0, (t/40)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void Fear ()
    {
    txBegin ();

    txPlaySound ("Sounds/udar-molnii.wav");

    int t = 0;
    while (t <= 400)
        {
        DrawBascground ();
        DrawOcean      (  15,       320, 1,   1, RGB (77, 84, 225), 1, (t/20)%2 * 1);
        DrawSmallCloud ( 500 + t/2, 100, 1,   1, TX_LIGHTGRAY, (t/30)%2 * 1);
        DrawBigCloud   ( 100 + t/2,  50, 1,   1, TX_LIGHTGRAY, (t/30)%2 * 1, (t/30)%2 * 1);

        DrawSun        (1050 - t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238),
                        RGB (66, 132, 0), TX_WHITE, RGB (128, 0, 255), 0, (t/30)%2 * 1, (t/30)%2 * 1, 0, 0);

        DrawShip       ( 400 + t/2, 300, 0.7, 0.6, TX_GREY, RGB (255, 236, 236), RGB (164, 82, 0),
                        RGB (63, 63, 63), RGB (63, 63, 63), TX_GREY, 0, 0, 1);

        DrawIsland     ( 150,       650,                 1,   1,   RGB (  0, 128,   0), TX_YELLOW, 1);

        DrawMan        ( 400 + t/4, 550 - (t/10)%2 * 10, 1,   1,   RGB (192, 192, 192), TX_RED, TX_WHITE,
                        RGB (0, 128, 128), 1, 0, 0, (t/40)%2 * 1);

        DrawTreasures  ( 900 - t/6, 650 - (t/20)%2 *  5, 1,   1,   RGB (128, 128,   0), TX_YELLOW, TX_RED, 1, (t/50)%2 * 1);
        DrawPalma      ( 200,       720,                 1.2, 1.2, RGB (108,  54,   0), RGB (0, 128, 0), TX_BROWN, (t/40)%2 * 1, 0);

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void Salvation ()
    {
    txBegin ();

    txPlaySound ("Sounds/Salvation.wav");

    int t = 0;
    while (t <= 300)
        {
        DrawBascground ();
        DrawOcean      ( 15,       320, 1,   1,   RGB (77, 84, 225), 0, 0);
        DrawSmallCloud (500 + t/2, 100, 1,   1,   TX_WHITE, 0);
        DrawBigCloud   (100 + t/2,  50, 1,   1,   TX_WHITE, 0, 0);

        DrawSun        (150 + t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), (t/30)%2 * 1, (t/30)%2 * 1, 0, 0, (t/40)%2 * 1);

        DrawShip       (450 + t/2, 300 + t*0.2, 0.6, 0.6, TX_GREY, TX_YELLOW, RGB (164, 82, 0), TX_PINK, TX_CYAN,
                        TX_GREY, 0, (t/40)%2 * 1, 0);

        DrawIsland     (150,       650,                 1, 1, RGB (  0, 128,   0), TX_YELLOW, (t/30)%2 * 1);

        DrawMan        (600,       550 - (t/10)%2 * 10, 1, 1, RGB (192, 192, 192), TX_RED,
                        TX_WHITE, RGB (0, 128, 128), (t/40)%2 * 1, (t/40)%2 * 1, (t/40)%2 * 1, 0);

        DrawTreasures  (900,       650, 1,   1,   RGB (128, 128, 0), TX_YELLOW, TX_RED, 0, 0);
        DrawPalma      (200,       720, 1.2, 1.2, RGB (108,  54, 0), RGB (0, 128, 0), TX_BROWN, 0, (t/40)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void Happiness ()
    {
    txBegin ();

    txPlaySound ("Sounds/Happiness.wav");

    int t = 0;
    while (t <= 200)
        {
        DrawBascground ();
        DrawOcean      ( 15,       320, 1,   1,   RGB (77, 84, 225), 0, 0);
        DrawSmallCloud (500 + t/2, 100, 1,   1,   TX_WHITE, 0);
        DrawBigCloud   (100 + t/2,  50, 1,   1,   TX_WHITE, 0, 0);

        DrawSun        (600 + t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), (t/30)%2 * 1, (t/30)%2 * 1, 0, 0, (t/40)%2 * 1);

        DrawWhale      (500 - t/2, 360, 0.5, 0.6, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawShip       (700,       450, 0.8, 0.8, TX_GREY, TX_YELLOW, RGB (164, 82, 0), TX_PINK, TX_CYAN, TX_GREY, 1, 0, 0);
        DrawIsland     (150,       650, 1,   1,   RGB (  0, 128,   0), TX_YELLOW, 1);
        DrawMan        (620,       310,                 0.8, 0.8, RGB (192, 192, 192), TX_RED, TX_WHITE, RGB (0, 128, 128), 0, (t/30)%2 * 1, 1, 0);
        DrawTreasures  (750,       385 - (t/10)%2 * 10, 0.8, 0.8, RGB (128, 128,   0), TX_YELLOW, TX_RED, 0, 0);
        DrawIsland     (150,       650,                 1,   1,   RGB (  0, 128,   0), TX_YELLOW, 1);
        DrawPalma      (200,       720,                 1.2, 1.2, RGB (108,  54,   0), RGB (0, 128, 0), TX_BROWN, 0, (t/40)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void Enjoyment ()
    {
    txBegin ();

    txPlaySound ("Sounds/Enjoyment.wav");

    int t = 0;
    while (t <= 180)
        {
        DrawBascground ();
        DrawOcean      ( 15,       320,  1,     1, RGB (77, 84, 225), 0, 0);
        DrawBigCloud   (100 + t/2,  70,  1,     1, TX_WHITE, 0, 0);
        DrawSmallCloud (300 + t/2,  50,  1,     1, TX_WHITE, 0);
        DrawBigCloud   (700 + t/2, 100,  1,     1, TX_WHITE, 0, 0);

        DrawSun        (600 + t/6, 130,  0.5,   0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), (t/30)%2 * 1, 0, 0, 1, (t/40)%2 * 1);

        DrawWhale      (800 - t/2, 500, 0.7, 0.8, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawWhale      (600 - t/2, 430, 0.6, 0.8, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawWhale      (700 - t/2, 600, 0.9, 1,   RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawShip       (750 + t/2, 300, 0.3, 0.3, TX_GREY, TX_YELLOW, RGB (164, 82, 0), TX_PINK, TX_CYAN, TX_GREY, 0, 0, 0);
        DrawIsland     (150,       650, 1,   1,   RGB (  0, 128, 0), TX_YELLOW, 1);
        DrawPalma      (200,       720, 1.2, 1.2, RGB (108,  54, 0), RGB (0, 128, 0), TX_BROWN, 0, (t/30)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void TobeContinued ()
    {
    txBegin ();

    txPlaySound ("Sounds/TobeContinued.wav");

    int t = 0;
    while (t <= 100)
        {
        DrawBascground ();

        txSetColor     (RGB (255, 0, 128), 5);
        txSelectFont   ("Gabriola", 220);
        txDrawText     (20, 200 - t*2, 1210, 585 - t*2, "Продолжение следует..");

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void Author ()
    {
    txBegin ();

    txPlaySound ("Sounds/TobeContinued.wav");

    int t = 0;
    while (t <= 90)
        {
        DrawBascground ();

        txSetColor     (RGB (255, 0, 128), 5);
        txSelectFont   ("Gabriola", 220);
        txDrawText     (20, 200 - t*2, 1210, 300 - t*2, "Автор:");
        txDrawText     (20, 300 - t*2, 1210, 400 - t*2, " Олеся Новоселова");
        txDrawText     (20, 400 - t*2, 1210, 500 - t*2, "МАОУ МЛ №1");
        txDrawText     (20, 500 - t*2, 1210, 600 - t*2, "г. Магнитогорска");
        txDrawText     (20, 600 - t*2, 1210, 700 - t*2, "2021 год");

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void DrawBascground ()
    {
    txClear ();

    DrawTV ();
    }
