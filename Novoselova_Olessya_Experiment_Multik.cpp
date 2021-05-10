//{=======================================================
//! @file    Novoselova_Olessya_Multik.cpp
//!
//! @brief   Cartoon "Experiment".
//!
//!          The cartoon was created within the framework
//!          of the CCP on computer science
//!          "Science in the regions".
//!
//!
//! @date    2021 year.
//!
//! @author  Novoselova Olesya Anatolyevna computer
//!          science teacher of MAOU "ML No. 1" of
//!          Magnitogorsk
//}========================================================

# include "LessanLib.h"

# include "ElenaLib.h"

using namespace Lessan;

void Hello          ();

void Loneliness     ();

void TobeContinued  ();

void Author         ();

void DrawBascground ();

int main            ()
    {
    txBegin ();

    txCreateWindow (1400, 800);

    Hello           ();
    Loneliness      ();
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

    txPlaySound ("Sounds1/Hello.wav");

    int t = 0;
    while (t <= 100)
        {
        DrawBascground ();

        DrawSun      (600, 340, 3, 3, 3, TX_YELLOW, TX_YELLOW, t%8, t%10, t%8);

        txSetColor   (RGB (128, 0, 0), 50);
        txSelectFont ("Gabriola", 300);
        txDrawText   (20, 300 - t*1.5, 1210, 785 - t*1.5, "Привет, друзья!");

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void Loneliness ()
    {
    txBegin ();

    txPlaySound ("Sounds1/Loneliness.wav");

    int t = 0;
    while (t <= 250)
        {
        DrawBascground ();

        DrawSun (150 + t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0), TX_WHITE,
                 RGB (128, 0, 255), (t/30)%2 * 1, 0, 0, 0, (t/40)%2 * 1);

        DrawOcean      ( 15,       320, 1,   1, RGB (77, 84, 225), 0, 0);
        DrawSmallCloud (700 + t/2, 100, 1,   1, TX_WHITE, 0);
        DrawBigCloud   (300 + t/2,  50, 1,   1, TX_WHITE, 0, 0);

        DrawBird ( 50 + t/1, 100, 1,   1, RGB (206, 206, 206), t%30);
        DrawBird (250 + t/2, 200, 1,   1, RGB (206, 206, 206), t%30);
        DrawBird (150 + t/1, 300, 1,   1, RGB (206, 206, 206), t%30);
        DrawBird (100 + t/2,  50, 1,   1, RGB (230, 230, 230), t%30);
        DrawBird (200 + t/1, 250, 1,   1, RGB (206, 206, 206), t%30);

        DrawWhale  (800 - t/2, 400, 0.7, 0.7, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/40)%2 * 1);
        DrawWhale  (800 - t/2, 600, 1,   1,   RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/40)%2 * 1);
        DrawIsland (150,       650, 1,   1,   RGB (  0, 128,   0), TX_YELLOW, 1);

        DrawMan (350 + t/2, 550, 1,   1,   RGB (192, 192, 192), TX_RED, TX_WHITE,
                 RGB (0, 128, 128), (t/20)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1, 0);

        DrawPalma (200, 720, 1.2, 1.2, RGB (108,  54,   0), RGB (0, 128, 0), TX_BROWN, (t/30)%2 * 1, 0);

        DrawDog   (600 + t/2, 650,                0.4, 0.4, 0.4, RGB (255,   0, 128), RGB (142,  0, 71), 260 + t%20, t%2, t%20, 100, 30, t%20);
        DrawCat   (950 - t/2, 550 - (t/20)%2 * 1, 0.3, 0.3, 0.3, RGB (232, 116,   0), RGB (145, 72, 72),  10 + t%20, 15 + t%20, t%30, (t/20)%2);
        DrawMouse (750 - t/2, 700,                0.3, 0.4, 0.5, TX_LIGHTGRAY, TX_BLACK, t%8, t%10, t%10);

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void TobeContinued ()
    {
    txBegin ();

    txPlaySound ("Sounds1/TobeContinued.wav");

    int t = 0;
    while (t <= 100)
        {
        DrawBascground ();

        txSetColor   (RGB (255, 0, 128), 5);
        txSelectFont ("Gabriola", 220);
        txDrawText   (20, 200 - t*2, 1210, 585 - t*2, "Продолжение следует..");

        txSleep (SleepTime);
        t ++ ;
        }

    txPlaySound (NULL);

    txEnd ();
    }

void Author ()
    {
    txBegin ();

    txPlaySound ("Sounds1/TobeContinued.wav");

    int t = 0;
    while (t <= 90)
        {
        DrawBascground ();

        txSetColor   (RGB (255, 0, 128), 5);
        txSelectFont ("Gabriola", 220);
        txDrawText   (20, 200 - t*2, 1210, 300 - t*2, "Автор:");
        txDrawText   (20, 300 - t*2, 1210, 400 - t*2, " Олеся Новоселова");
        txDrawText   (20, 400 - t*2, 1210, 500 - t*2, "МАОУ МЛ №1");
        txDrawText   (20, 500 - t*2, 1210, 600 - t*2, "г. Магнитогорска");
        txDrawText   (20, 600 - t*2, 1210, 700 - t*2, "2021 год");

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
