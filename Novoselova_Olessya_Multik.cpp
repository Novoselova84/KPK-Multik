//=================================================
//+  $file   Novoselova_Olessya_Multik.cpp
//
//+  $title  Мультфильм "SALVATION" ---> Спасение.
//
//+          Мультик создан в рамках КПК
//+          по информатике "Наука в регионы".
//
//+  $date   2021 год.
//
//+  $author Новоселова Олеся Анатольевна
//+          учитель информатики МАОУ «МЛ №1»
//+          г. Магнитогорска
//==================================================

# include "TXLib.h"

const int SleepTime = 10;

void DrawOcean      (int x, int y, double sizeX, double sizeY, COLORREF oceanColor);

void DrawSun        (int x, int y, double sizeX, double sizeY, COLORREF sunColor, COLORREF glassesColor, COLORREF eyesColor,
                     COLORREF mouthColor, COLORREF hatColor, double hello, double surprise, double anger, double newHat, double ray);

void DrawBigCloud   (int x, int y, double sizeX, double sizeY, COLORREF bigCloudColor, double darkBigCloud, double hit);

void DrawSmallCloud (int x, int y, double sizeX, double sizeY, COLORREF smallCloud, double darkSmallCloud);

void DrawShip       (int x, double y, double sizeX, double sizeY, COLORREF mastColor, COLORREF flagColor, COLORREF shipColor,
                     COLORREF starboardSailColor, COLORREF portSailColor, COLORREF anchorColor, double SetSail,
                     double dropAnchor, double deception);

void DrawWhale      (int x, int y, double sizeX, double sizeY, COLORREF whaleColor, COLORREF eyeColor, COLORREF fountainColor,
                     double founUp, int finMovement, int turbo);

void DrawIsland     (int x, int y, double sizeX, double sizeY, COLORREF islandColor, COLORREF sosColor, int invisible);

void DrawPalma      (int x, int y, double sizeX, double sizeY, COLORREF trunkColor, COLORREF leavesColor,
                     COLORREF coconutsColor, double magnificationCoconuts, double fallingCoconut);

void DrawTreasures  (int x, int y, double sizeX, double sizeY, COLORREF chestBoxColor, COLORREF chestLidColor,
                     COLORREF $Color, double pirates, double chestLidUp);

void DrawTorch      (int x, int y, double sizeX, double sizeY, COLORREF stickColor, COLORREF fireColor, double signal);

void DrawMan        (int x, int y, double sizeX, double sizeY, COLORREF headColor, COLORREF eyesColor, COLORREF mouthColor,
                     COLORREF legsColor, int legsStep, int rightHandDn, int leftHandDn, double Mad);

void DrawBascground ();

void DrawTV         ();

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

    int t = 0;
    while (t <= 120)
        {
        DrawBascground ();

        txSetColor     (RGB (128, 0, 0), 50);
        txSelectFont   ("Gabriola", 300);
        txDrawText     (20, 300 - t*2, 1210, 785 - t*2, "Привет, друзья!");

        DrawSun        (600, 340, 1.2, 1.2, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), (t/30)%2 * 1, (t/40)%2 * 1, 0, (t/30)%2 * 1, (t/20)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txEnd ();
    }

void TitleMultika ()
    {
    txBegin ();

    int t = 0;
    while (t <= 60)
        {
        DrawBascground ();

        txSetColor     (RGB (255, 0, 128), 5);
        txSelectFont   ("Constantia", 200);
        txDrawText     (20, 400 - t*2, 1210, 585 - t*2, "Мультфильм");
        txSetColor     (RGB (206, 0, 103), 5);
        txDrawText     (15, 405 - t*2, 1205, 590 - t*2, "Мультфильм");

        txSetColor     (RGB (0, 115, 230), 5);
        txSelectFont   ("Arial", 280);
        txDrawText     (20, 180 + t*2, 1210, 385 + t*2, "Salvation");
        txSetColor     (RGB (0, 77, 153), 5);
        txDrawText     (15, 185 + t*2, 1205, 390 + t*2, "Salvation");

        txSetColor     (TX_LIGHTBLUE, 50);
        txSelectFont   ("Gabriola", 100);
        txDrawText     (400, 700, 800, 750, "2021 год");

        txSleep (SleepTime);
        t ++ ;
        }

    txEnd ();
    }

void Loneliness ()
    {
    txBegin ();

    int t = 0;
    while (t <= 250)
        {
        DrawBascground ();
        DrawOcean      ( 15,       320, 1  , 1  , RGB (77, 84, 225));
        DrawSmallCloud (500 + t/2, 100, 1  , 1  , TX_WHITE, 0);
        DrawBigCloud   (100 + t/2,  50, 1  , 1  , TX_WHITE, 0, 0);
        DrawSun        (120 + t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0), TX_WHITE,
                        RGB (128, 0, 255), (t/30)%2 * 1, 0, 0, 0, 0);
        DrawWhale      (800 - t/2, 400, 0.7, 0.7, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/40)%2 * 1);
        DrawWhale      (600 - t/2, 500, 0.8, 0.8, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/40)%2 * 1, (t/40)%2 * 1, (t/40)%2 * 1);
        DrawWhale      (800 - t/2, 600, 1  , 1  , RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/40)%2 * 1);
        DrawIsland     (150,       650, 1  , 1  , RGB (  0, 128,   0), TX_YELLOW, (t/30)%2 * 1);
        DrawMan        (350 + t/2, 550, 1  , 1  , RGB (192, 192, 192), TX_RED, TX_WHITE,
                        RGB (0, 128, 128), (t/20)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1, 0);
        DrawPalma      (200,       720, 1.2, 1.2, RGB (108,  54,   0), RGB (0, 128, 0), TX_BROWN, (t/30)%2 * 1, 0);

        txSleep (SleepTime);
        t ++ ;
        }

    txEnd ();
    }

void Hope ()
    {
    txBegin ();

    int t = 0;
    while (t <= 200)
        {
        DrawBascground ();
        DrawOcean      (  15,       320, 1,   1  , RGB (77, 84, 225));
        DrawSmallCloud ( 500 + t/2, 100, 1,   1  , TX_WHITE, 0);
        DrawBigCloud   ( 100 + t/2,  50, 1,   1  , TX_WHITE, 0, 0);
        DrawSun        (1100 - t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), 0, (t/40)%2 * 1, 0, 0, 0);
        DrawShip       ( 250 + t/2, 300, 0.3, 0.2, TX_GREY, TX_YELLOW, RGB (164, 82, 0), TX_PINK, TX_CYAN, TX_GREY, 0, 0, 0);
        DrawWhale      ( 800 - t/2, 500, 0.9, 0.9, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawIsland     ( 150,       650, 1  , 1  , RGB (  0, 128,   0), TX_YELLOW, (t/30)%2 * 1);
        DrawMan        ( 600,       550 - (t/10)%2 * 10, 1, 1, RGB (192, 192, 192), TX_RED, TX_WHITE,
                        RGB (0, 128, 128), (t/20)%2 * 1, 0, (t/30)%2 * 1, 0);
        DrawTorch      ( 500,       520 - (t/10)%2 * 10, 1  , 1  , RGB (108,  54, 0), RGB (255, 0, 0), (t/20)%2 * 1);
        DrawTreasures  ( 900,       650,                 1  , 1  , RGB (128, 128, 0), TX_YELLOW, TX_RED, 0, 0);
        DrawPalma      ( 200,       720,                 1.2, 1.2, RGB (108,  54, 0), RGB (0, 128, 0), TX_BROWN, 0, (t/40)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txEnd ();
    }

void Fear ()
    {
    txBegin ();

    int t = 0;
    while (t <= 400)
        {
        DrawBascground ();
        DrawOcean      (  15,       320, 1  , 1  , RGB (77, 84, 225));
        DrawSmallCloud ( 500 + t/2, 100, 1  , 1  , TX_LIGHTGRAY, (t/30)%2 * 1);
        DrawBigCloud   ( 100 + t/2,  50, 1  , 1  , TX_LIGHTGRAY, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawSun        (1100 - t/6, 130 - (t/20)%2 * 10, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238),
                        RGB (66, 132, 0), TX_WHITE, RGB (128, 0, 255), 0, (t/30)%2 * 1, (t/30)%2 * 1, 0, 0);
        DrawShip       ( 400 + t/2, 300, 0.7, 0.6, TX_GREY, RGB (255, 236, 236), RGB (164, 82, 0),
                        RGB (63, 63, 63), RGB (63, 63, 63), TX_GREY, 0, 0, 1);
        DrawIsland     ( 150,       650,                 1  , 1  , RGB (  0, 128,   0), TX_YELLOW, 1);
        DrawMan        ( 400 + t/4, 550 - (t/10)%2 * 10, 1  , 1  , RGB (192, 192, 192), TX_RED, TX_WHITE, RGB (0, 128, 128), 1, 0, 0, (t/40)%2 * 1);
        DrawTreasures  ( 900 - t/6, 650 - (t/20)%2 *  5, 1  , 1  , RGB (128, 128,   0), TX_YELLOW, TX_RED, 1, (t/50)%2 * 1);
        DrawPalma      ( 200,       720,                 1.2, 1.2, RGB (108,  54,   0), RGB (0, 128, 0), TX_BROWN, (t/40)%2 * 1, 0);

        txSleep (SleepTime);
        t ++ ;
        }

    txEnd ();
    }

void Salvation ()
    {
    txBegin ();

    int t = 0;
    while (t <= 300)
        {
        DrawBascground ();
        DrawOcean      ( 15,       320, 1  , 1  , RGB (77, 84, 225));
        DrawSmallCloud (500 + t/2, 100, 1  , 1  , TX_WHITE, 0);
        DrawBigCloud   (100 + t/2,  50, 1  , 1  , TX_WHITE, 0, 0);
        DrawSun        (120 + t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), (t/30)%2 * 1, (t/30)%2 * 1, 0, 0, 0);
        DrawShip       (450 + t/2, 300 + t*0.2, 0.6, 0.6, TX_GREY, TX_YELLOW, RGB (164, 82, 0), TX_PINK, TX_CYAN,
                        TX_GREY, 0, (t/40)%2 * 1, 0);
        DrawIsland     (150,       650,                 1, 1, RGB (  0, 128,   0), TX_YELLOW, (t/30)%2 * 1);
        DrawMan        (600,       550 - (t/10)%2 * 10, 1, 1, RGB (192, 192, 192), TX_RED,
                        TX_WHITE, RGB (0, 128, 128), (t/40)%2 * 1, (t/40)%2 * 1, (t/40)%2 * 1, 0);
        DrawTreasures  (900,       650, 1  , 1  , RGB (128, 128, 0), TX_YELLOW, TX_RED, 0, 0);
        DrawPalma      (200,       720, 1.2, 1.2, RGB (108,  54, 0), RGB (0, 128, 0), TX_BROWN, 0, (t/40)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txEnd ();
    }

void Happiness ()
    {
    txBegin ();

    int t = 0;
    while (t <= 200)
        {
        DrawBascground ();
        DrawOcean      ( 15,       320, 1,   1  , RGB (77, 84, 225));
        DrawSmallCloud (500 + t/2, 100, 1,   1  , TX_WHITE, 0);
        DrawBigCloud   (100 + t/2,  50, 1,   1  , TX_WHITE, 0, 0);
        DrawSun        (600 + t/6, 130, 0.5, 0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), (t/30)%2 * 1, (t/30)%2 * 1, 0, 0, 0);
        DrawWhale      (500 - t/2, 360, 0.5, 0.6, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawShip       (700,       450, 0.8, 0.8, TX_GREY, TX_YELLOW, RGB (164, 82, 0), TX_PINK, TX_CYAN, TX_GREY, 1, 0, 0);
        DrawIsland     (150,       650, 1  , 1  , RGB (  0, 128,   0), TX_YELLOW, 1);
        DrawMan        (620,       310,                 0.8, 0.8, RGB (192, 192, 192), TX_RED, TX_WHITE, RGB (0, 128, 128), 0, (t/30)%2 * 1, 1, 0);
        DrawTreasures  (750,       385 - (t/10)%2 * 10, 0.8, 0.8, RGB (128, 128,   0), TX_YELLOW, TX_RED, 0, 0);
        DrawIsland     (150,       650,                 1  , 1  , RGB (  0, 128,   0), TX_YELLOW, 1);
        DrawPalma      (200,       720,                 1.2, 1.2, RGB (108,  54,   0), RGB (0, 128, 0), TX_BROWN, 0, (t/40)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txEnd ();
    }

void Enjoyment ()
    {
    txBegin ();

    int t = 0;
    while (t <= 200)
        {
        DrawBascground ();
        DrawOcean      ( 15,       320,  1  ,   1  , RGB (77, 84, 225));
        DrawSmallCloud (500 + t/2, 100,  1  ,   1  , TX_WHITE, 0);
        DrawBigCloud   (100 + t/2,  50,  1  ,   1  , TX_WHITE, 0, 0);
        DrawSmallCloud (700 + t/2,  50,  1  ,   1  , TX_WHITE, 0);
        DrawBigCloud   (300 + t/2, 100,  1  ,   1  , TX_WHITE, 0, 0);
        DrawSun        (600 + t/6, 130,  0.5,   0.5, RGB (255, 255, 0), RGB (0, 238, 238), RGB (66, 132, 0),
                        TX_WHITE, RGB (128, 0, 255), (t/30)%2 * 1, 0, 0, 1, 0);
        DrawWhale      (800 - t/2, 500, 0.7, 0.8, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawWhale      (600 - t/2, 430, 0.6, 0.8, RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawWhale      (700 - t/2, 600, 0.9, 1  , RGB (128, 128, 128), TX_BLUE, RGB (0, 128, 255), (t/30)%2 * 1, (t/30)%2 * 1, (t/30)%2 * 1);
        DrawShip       (750 + t/2, 300, 0.3, 0.3, TX_GREY, TX_YELLOW, RGB (164, 82, 0), TX_PINK, TX_CYAN, TX_GREY, 0, 0, 0);
        DrawIsland     (150,       650, 1  , 1  , RGB (  0, 128, 0), TX_YELLOW, 1);
        DrawPalma      (200,       720, 1.2, 1.2, RGB (108,  54, 0), RGB (0, 128, 0), TX_BROWN, 0, (t/30)%2 * 1);

        txSleep (SleepTime);
        t ++ ;
        }

    txEnd ();
    }

void TobeContinued ()
    {
    txBegin ();

    int t = 0;
    while (t <= 70)
        {
        DrawBascground ();

        txSetColor     (RGB (255, 0, 128), 5);
        txSelectFont   ("Gabriola", 220);
        txDrawText     (20, 200 - t*2, 1210, 585 - t*2, "Продолжение следует..");

        txSleep (SleepTime);
        t ++ ;
        }

    txEnd ();
    }

void Author ()
    {
    txBegin ();

    int t = 0;
    while (t <= 70)
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

    txEnd ();
    }

void DrawBascground ()
    {
    txClear ();

    DrawTV ();
    }

void DrawTV ()
    {
    txSetColor     (RGB (112, 112, 112), 55);
    txSetFillColor (RGB (192, 244, 245));
    txRectangle    (10, 10, 1400, 800);

    txSetFillColor (RGB (112, 112, 112));
    txRectangle    (1210, 10, 1390, 790);

    txSetColor     (RGB (255, 0, 0));
    txSetFillColor (RGB (255, 0, 0));
    txRectangle    (1260, 50, 1310, 70);

    txSetColor     (RGB (0, 0, 255));
    txSetFillColor (RGB (0, 0, 255));
    txRectangle    (1310, 50, 1360, 70);

    txSetColor     (RGB (255, 255, 0));
    txSetFillColor (RGB (255, 255, 0));
    txCircle       (1310, 200, 30);

    txSetColor     (RGB (0, 255, 0));
    txSetFillColor (RGB (0, 255, 0));
    txCircle       (1310, 280, 30);

    txSetColor     (RGB (0, 0, 128));
    txSetFillColor (RGB (0, 0, 128));
    txCircle       (1310, 360, 30);

    txSetColor     (RGB (128, 0, 128));
    txSetFillColor (RGB (128, 0, 128));
    txCircle       (1310, 440, 30);

    txSetColor     (RGB (101, 88, 116), 4);
    txSetFillColor (RGB (125, 109, 146));
    txCircle       (1310, 610, 50);

    txSetColor     (RGB (101, 88, 116));
    txSetFillColor (RGB (101, 88, 116));
    txRectangle    (1300, 580, 1320, 640);

    txSetColor     (TX_BLACK, 5);
    txSelectFont   ("Arial", 40, 0, FW_BOLD);
    txDrawText     (1210,  700, 1390, 750, " Электрон");

    txSetColor     (RGB (128, 255, 255), 10);
    txSetFillColor (RGB (128, 255, 255));
    txRectangle    (20, 20, 1210, 785);
    }

void DrawOcean (int x, int y, double sizeX, double sizeY, COLORREF oceanColor)
    {
    txSetColor     (oceanColor);
    txSetFillColor (oceanColor);
    txRectangle    (x, y, x + 1200*sizeX, y + 470*sizeY);
    }

void DrawSun (int x, int y, double sizeX, double sizeY, COLORREF sunColor, COLORREF glassesColor, COLORREF eyesColor,
              COLORREF mouthColor, COLORREF hatColor, double hello, double surprise, double anger, double newHat, double ray)
    {
    txSetColor (sunColor, 3);

    if (anger >= 1)
       txSetFillColor (TX_RED);
    else
       txSetFillColor (sunColor);

    txCircle (x, y , 100*sizeX);
    txLine   (x - (190 + ray*35)*sizeX, y -  (40 + ray*35)*sizeY, x - (100 + ray*35)*sizeX, y -  (20 + ray*35)*sizeY);
    txLine   (x - (200 + ray*10)*sizeX, y,                        x - (100 + ray*10)*sizeX, y);
    txLine   (x - (200 + ray*35)*sizeX, y +  (70 + ray*35)*sizeY, x -  (95 + ray*35)*sizeX, y +  (30 + ray*35)*sizeY);
    txLine   (x - (180 + ray*10)*sizeX, y + (140 + ray*10)*sizeY, x -  (80 + ray*10)*sizeX, y +  (60 + ray*10)*sizeY);
    txLine   (x - (150 + ray*35)*sizeX, y + (210 + ray*35)*sizeY, x -  (60 + ray*35)*sizeX, y +  (80 + ray*35)*sizeY);
    txLine   (x - (100 + ray*10)*sizeX, y + (270 + ray*10)*sizeY, x -  (30 + ray*10)*sizeX, y +  (95 + ray*10)*sizeY);
    txLine   (x -   20          *sizeX, y + (270 + ray*35)*sizeY, x -   15          *sizeX, y + (100 + ray*35)*sizeY);
    txLine   (x +   50          *sizeX, y + (250 + ray*10)*sizeY, x +   20          *sizeX, y +  (95 + ray*10)*sizeY);
    txLine   (x + (200 + ray*35)*sizeX, y -  (40 + ray*35)*sizeY, x + (100 + ray*35)*sizeX, y -  (20 + ray*35)*sizeY);
    txLine   (x + (205 + ray*10)*sizeX, y,                        x + (105 + ray*10)*sizeX, y);
    txLine   (x + (205 + ray*35)*sizeX, y +   70          *sizeY, x + (100 + ray*35)*sizeX, y +   30          *sizeY);
    txLine   (x + (220 + ray*10)*sizeX, y +  140          *sizeY, x +  (80 + ray*10)*sizeX, y +   60          *sizeY);
    txLine   (x + (190 + ray*35)*sizeX, y +  210          *sizeY, x +  (60 + ray*35)*sizeX, y +   80          *sizeY);
    txLine   (x +  140          *sizeX, y + (230 + ray*10)*sizeY, x +  (40 + ray*10)*sizeX, y +  (90 + ray*10)*sizeY);

    txSetColor     (glassesColor, 4);
    txSetFillColor (glassesColor);
    txCircle (x - 30*sizeX, y - 10*sizeY, 25*sizeX);
    txCircle (x + 30*sizeX, y - 10*sizeY, 25*sizeX);
    txLine   (x - 95*sizeX, y - 35*sizeY, x - 45*sizeX, y - 10*sizeY);
    txLine   (x + 30*sizeX, y -  5*sizeY, x + 90*sizeX, y - 35*sizeY);
    txLine   (x - 10*sizeX, y - 10*sizeY, x + 10*sizeX, y - 10*sizeY);

    txSetFillColor (eyesColor);
    txCircle (x - 30*sizeX, y -  10*sizeY, (10 + surprise*5)*sizeX);
    txCircle (x + 30*sizeX, y -  10*sizeY, (10 + surprise*5)*sizeX);

    txSetColor     (TX_LIGHTGRAY, 3);
    txSetFillColor (mouthColor);
    txArc   (x - (35 + surprise*10)*sizeX, y + 20*sizeY, x + (35 + surprise*10)*sizeX, y + (55 + surprise*10)*sizeY, (sizeY >= 0)? 180:0, 180);
    txChord (x - (35 + surprise*10)*sizeX, y + 20*sizeY, x + (35 + surprise*10)*sizeX, y + (55 + surprise*10)*sizeY, (sizeY >= 0)? 180:0, 180);

    if (newHat > 0)
        {
        txSetColor     (RGB (54, 237, 50), 3);
        txSetFillColor (RGB (54, 237, 50));
        txEllipse   (x - 100*sizeX, y - (100 + hello*60)*sizeY, x + 100*sizeX, y - (50 + hello*60)*sizeY);
        txArc       (x -  60*sizeX, y - (140 + hello*60)*sizeY, x +  60*sizeX, y - (50 + hello*60)*sizeY, 0, 180);
        txRectangle (x -  60*sizeX, y - (140 + hello*60)*sizeY, x +  60*sizeX, y - (80 + hello*60)*sizeY);
        }
    else
        {
        txSetColor     (hatColor, 3);
        txSetFillColor (hatColor);
        txEllipse      (x - 100*sizeX, y - (100 + hello*60)*sizeY, x + 100*sizeX, y - (50 + hello*60)*sizeY);
        txArc          (x -  60*sizeX, y - (140 + hello*60)*sizeY, x +  60*sizeX, y - (50 + hello*60)*sizeY, 0, 180);
        txRectangle    (x -  60*sizeX, y - (140 + hello*60)*sizeY, x +  60*sizeX, y - (80 + hello*60)*sizeY);
        }
    }

void DrawBigCloud (int x, int y, double sizeX, double sizeY, COLORREF bigCloudColor, double darkBigCloud, double hit)
    {
    if (darkBigCloud < 1)
        {
        txSetColor (bigCloudColor, 25);
        txArc (x,             y,            x + 100*sizeX, y + 30*sizeY,   0, 180);
        txArc (x + 100*sizeX, y,            x + 250*sizeX, y + 40*sizeY,   0, 180);
        txArc (x,             y,            x +  50*sizeX, y + 30*sizeY, 180, 180);
        txArc (x +  50*sizeX, y,            x + 150*sizeX, y + 30*sizeY, 180, 180);
        txArc (x + 150*sizeX, y + 10*sizeY, x + 250*sizeX, y + 30*sizeY, 180, 180);
        }
    else
        {
        txSetColor (RGB (97, 97, 97), 40);
        txArc (x,             y,            x + 100*sizeX, y + 30*sizeY,   0, 180);
        txArc (x + 100*sizeX, y,            x + 250*sizeX, y + 40*sizeY,   0, 180);
        txArc (x,             y,            x +  50*sizeX, y + 30*sizeY, 180, 180);
        txArc (x +  50*sizeX, y,            x + 150*sizeX, y + 30*sizeY, 180, 180);
        txArc (x + 150*sizeX, y + 10*sizeY, x + 250*sizeX, y + 30*sizeY, 180, 180);

        txSetColor     (TX_GRAY, 2);
        txSetFillColor (RGB (255, 38, 38));
        POINT lightning [7] = {{ROUND (x + 100*sizeX), ROUND (y +  (40 + hit*50)*sizeY)},
                               {ROUND (x + 110*sizeX), ROUND (y +  (40 + hit*50)*sizeY)},
                               {ROUND (x + 105*sizeX), ROUND (y +  (60 + hit*50)*sizeY)},
                               {ROUND (x + 115*sizeX), ROUND (y +  (60 + hit*50)*sizeY)},
                               {ROUND (x +  95*sizeX), ROUND (y + (140 + hit*50)*sizeY)},
                               {ROUND (x + 105*sizeX), ROUND (y +  (70 + hit*50)*sizeY)},
                               {ROUND (x +  95*sizeX), ROUND (y +  (70 + hit*50)*sizeY)}};
        txPolygon (lightning, 7);

        POINT lightningSmall [7] = {{ROUND (x + 145*sizeX), ROUND (y +  30*sizeY)},
                                    {ROUND (x + 155*sizeX), ROUND (y +  30*sizeY)},
                                    {ROUND (x + 150*sizeX), ROUND (y +  50*sizeY)},
                                    {ROUND (x + 160*sizeX), ROUND (y +  50*sizeY)},
                                    {ROUND (x + 140*sizeX), ROUND (y + 110*sizeY)},
                                    {ROUND (x + 150*sizeX), ROUND (y +  60*sizeY)},
                                    {ROUND (x + 140*sizeX), ROUND (y +  60*sizeY)}};
        txPolygon (lightningSmall, 7);
        }
    }

void DrawSmallCloud (int x, int y, double sizeX, double sizeY, COLORREF smallCloudColor, double darkSmallCloud)
    {
    if (darkSmallCloud < 1)
        {
        txSetColor (smallCloudColor, 30);
        txArc (x,            y, x +  80*sizeX, y + 30*sizeY,   0, 180);
        txArc (x + 80*sizeX, y, x + 120*sizeX, y + 40*sizeY,   0, 180);
        txArc (x,            y, x +  30*sizeX, y + 30*sizeY, 180, 180);
        txArc (x + 30*sizeX, y, x + 120*sizeX, y + 40*sizeY, 180, 180);
        }
    else
        {
        txSetColor (RGB (97, 97, 97), 35);
        txArc (x,            y, x +  80*sizeX, y + 30*sizeY,   0, 180);
        txArc (x + 80*sizeX, y, x + 120*sizeX, y + 40*sizeY,   0, 180);
        txArc (x,            y, x +  30*sizeX, y + 30*sizeY, 180, 180);
        txArc (x + 30*sizeX, y, x + 120*sizeX, y + 40*sizeY, 180, 180);

        txSetColor     (TX_GRAY, 2);
        txSetFillColor (RGB (255, 38, 38));
        POINT lightningSmall [7] = {{ROUND (x + 45*sizeX), ROUND (y +  40*sizeY)},
                                    {ROUND (x + 55*sizeX), ROUND (y +  40*sizeY)},
                                    {ROUND (x + 50*sizeX), ROUND (y +  55*sizeY)},
                                    {ROUND (x + 60*sizeX), ROUND (y +  55*sizeY)},
                                    {ROUND (x + 40*sizeX), ROUND (y + 110*sizeY)},
                                    {ROUND (x + 50*sizeX), ROUND (y +  65*sizeY)},
                                    {ROUND (x + 40*sizeX), ROUND (y +  65*sizeY)}};
        txPolygon (lightningSmall, 7);
        }
    }

void DrawShip (int x, double y, double sizeX, double sizeY, COLORREF mastColor, COLORREF flagColor, COLORREF shipColor,
               COLORREF starboardSailColor, COLORREF portSailColor, COLORREF anchorColor, double SetSail,
               double dropAnchor, double deception)
    {
    txSetColor     (TX_GRAY, 3);
    txSetFillColor (mastColor);
    txRectangle    (x, y, x + 30*sizeX, y - 250*sizeY);

    txSetColor     (TX_GRAY, 4);
    txSetFillColor (flagColor);
    txRectangle    (x + 35*sizeX, y - 250*sizeY, x + (130 + deception*40)*sizeX, y - 180*sizeY);

    txSelectFont   ("Constantia", 40*sizeX, 0, FW_BOLD);

    int x2 = MIN (ROUND (x +  45*sizeX), ROUND (x + 120*sizeX));
    int x3 = MAX (ROUND (x +  45*sizeX), ROUND (x + 120*sizeX));
    int y2 = MIN (ROUND (y - 240*sizeY), ROUND (y - 190*sizeY));
    int y3 = MAX (ROUND (y - 240*sizeY), ROUND (y - 190*sizeY));

    if (deception > 0)
        txDrawText (x2 - 20,  y2, x3 + deception*40, y3, "Pirates");
    else
        txDrawText (x2,       y2, x3,                y3, "C++");

    txSetColor     (TX_GRAY, 3);
    txSetFillColor (shipColor);
    POINT ship [4] = {{ROUND (x - 120*sizeX), ROUND (y + 150*sizeY)},
                      {ROUND (x - 190*sizeX), ROUND (y)},
                      {ROUND (x + 230*sizeX), ROUND (y)},
                      {ROUND (x + 180*sizeX), ROUND (y + 150*sizeY)}};
    txPolygon (ship, 4);

    txSelectFont ("Gabriola", 100*sizeX, 0, FW_BOLD);

    int x0 = MIN (ROUND (x - 110*sizeX), ROUND (x +  80*sizeX));
    int x1 = MAX (ROUND (x - 110*sizeX), ROUND (x +  80*sizeX));
    int y0 = MIN (ROUND (y +  10*sizeY), ROUND (y + 140*sizeY));
    int y1 = MAX (ROUND (y +  10*sizeY), ROUND (y + 140*sizeY));

    if (deception > 0)
        txDrawText (x0, y0, x1, y1, "Cerberus");
    else
        txDrawText (x0, y0, x1, y1, "Salvation");

    txSetFillColor (starboardSailColor);
    POINT starboardSail [3] = {{ROUND (x +   35               *sizeX), ROUND (y)},
                               {ROUND (x +   35               *sizeX), ROUND (y - 180*sizeY)},
                               {ROUND (x + (230 - SetSail*200)*sizeX), ROUND (y -  10*sizeY)}};
    txPolygon (starboardSail, 3);

    txSetFillColor (portSailColor);
    POINT portSail [3] = {{ROUND (x -    5               *sizeX), ROUND (y)},
                          {ROUND (x - (200 - SetSail*200)*sizeX), ROUND (y -  10*sizeY)},
                          {ROUND (x -    5               *sizeX), ROUND (y - 250*sizeY)}};
    txPolygon (portSail, 3);

    txSetColor     (TX_GRAY, 5);
    txSetFillColor (anchorColor);
    txLine (x + 130*sizeX, y +  (25 + dropAnchor*100)*sizeY, x + 130*sizeX, y + (125 + dropAnchor*100)*sizeY);
    txLine (x + 120*sizeX, y +  (45 + dropAnchor*100)*sizeY, x + 140*sizeX, y +  (45 + dropAnchor*100)*sizeY);
    txArc  (x + 105*sizeX, y + (100 + dropAnchor*100)*sizeY, x + 155*sizeX, y + (125 + dropAnchor*100)*sizeY, 180, 180);
    txArc  (x + 105*sizeX, y + (100 + dropAnchor*100)*sizeY, x + 155*sizeX, y + (120 + dropAnchor*100)*sizeY, 180, 180);
    }

void DrawWhale (int x, int y, double sizeX, double sizeY, COLORREF whaleColor, COLORREF eyeColor, COLORREF fountainColor,
                double founUp, int finMovement, int turbo)
    {
    txSetColor     (TX_GRAY, 2);
    txSetFillColor (whaleColor);
    txPie          (x, y, x + 300*sizeX, y - 50*sizeY, (sizeY >= 0)? 0 : 180, 180);

    POINT leftFin [3] = {{ROUND (x +   80                  *sizeX), ROUND (y - 30*sizeY)},
                         {ROUND (x +  140                  *sizeX), ROUND (y - 30*sizeY)},
                         {ROUND (x + (190 - finMovement*50)*sizeX), ROUND (y + 10*sizeY)}};
    txPolygon (leftFin, 3);

    POINT rightFin [3] = {{ROUND (x +   85                  *sizeX), ROUND (y - 48*sizeY)},
                          {ROUND (x + (150 - finMovement*50)*sizeX), ROUND (y - 60*sizeY)},
                          {ROUND (x +  120                  *sizeX), ROUND (y - 50*sizeY)}};
    txPolygon (rightFin, 3);

    POINT caudalFin [4] = {{ROUND (x +  280            *sizeX), ROUND (y -  35            *sizeY)},
                           {ROUND (x + (330 + turbo*20)*sizeX), ROUND (y - (50 + turbo*20)*sizeY)},
                           {ROUND (x + (325 + turbo*15)*sizeX), ROUND (y -  30            *sizeY)},
                           {ROUND (x + (340 + turbo*20)*sizeX), ROUND (y +      (turbo*20)*sizeY)}};
    txPolygon (caudalFin, 4);

    txSetFillColor (eyeColor);
    txCircle       (x + 40*sizeX, y - 35*sizeY, 3*sizeX);

    txSetColor (fountainColor, 2);
    txLine (x + 50*sizeX, y - 50*sizeY, x + 40*sizeX, y - (80 + founUp*50)*sizeY);
    txLine (x + 50*sizeX, y - 50*sizeY, x + 50*sizeX, y - (85 + founUp*50)*sizeY);
    txLine (x + 50*sizeX, y - 50*sizeY, x + 60*sizeX, y - (80 + founUp*50)*sizeY);
    }

void DrawIsland (int x, int y, double sizeX, double sizeY, COLORREF islandColor, COLORREF sosColor, int invisible)
    {
    txSetColor     (TX_GREY, 3);
    txSetFillColor (islandColor);
    txEllipse      (x, y, x + 990*sizeX, y + 130*sizeY);

    txSetColor   (sosColor, 5);
    txSelectFont ("Arial", 100*sizeX, 0, FW_BOLD);

    int x0 = MIN (ROUND (x + 300*sizeX), ROUND (x + 800*sizeX));
    int x1 = MAX (ROUND (x + 300*sizeX), ROUND (x + 800*sizeX));
    int y0 = MIN (ROUND (y +  20*sizeY), ROUND (y + 110*sizeY));
    int y1 = MAX (ROUND (y +  20*sizeY), ROUND (y + 110*sizeY));

    if (invisible > 0)
        txDrawText (x0, y0, x1, y1, " ");
    else
        txDrawText (x0, y0, x1, y1, "SOS!!!");
    }

void DrawPalma (int x, int y, double sizeX, double sizeY, COLORREF trunkColor, COLORREF leavesColor,
                COLORREF coconutsColor, double magnificationCoconuts, double fallingCoconut)
    {
    txSetColor     (TX_GREY, 2);
    txSetFillColor (trunkColor);
    txRectangle    (x, y, x - 20*sizeX, y - 240*sizeY);

    txSetColor     (TX_LIGHTGRAY, 2);
    txSetFillColor (leavesColor);
    POINT one [3] = {{ROUND (x - 130*sizeX), ROUND (y - 180*sizeY)},
                     {ROUND (x - 110*sizeX), ROUND (y - 235*sizeY)},
                     {ROUND (x -  10*sizeX), ROUND (y - 239*sizeY)}};
    txPolygon (one, 3);

    POINT two [3] = {{ROUND (x -   5*sizeX), ROUND (y - 239*sizeY)},
                     {ROUND (x + 120*sizeX), ROUND (y - 260*sizeY)},
                     {ROUND (x +  90*sizeX), ROUND (y - 290*sizeY)}};
    txPolygon (two, 3);

    POINT three [3] = {{ROUND (x - 150*sizeX), ROUND (y - 250*sizeY)},
                       {ROUND (x - 110*sizeX), ROUND (y - 290*sizeY)},
                       {ROUND (x -  10*sizeX), ROUND (y - 239*sizeY)}};
    txPolygon (three, 3);

    POINT four [3] = {{ROUND (x -   5*sizeX), ROUND (y - 239*sizeY)},
                      {ROUND (x +  90*sizeX), ROUND (y - 190*sizeY)},
                      {ROUND (x + 120*sizeX), ROUND (y - 239*sizeY)}};
    txPolygon (four, 3);

    txSetColor     (TX_GRAY, 2);
    txSetFillColor (coconutsColor);
    txCircle (x -  10*sizeX, y -  225                      *sizeY, (15 + magnificationCoconuts*10)*sizeX);
    txCircle (x -  30*sizeX, y -  210                      *sizeY, (15 + magnificationCoconuts*10)*sizeX);
    txCircle (x,             y -  230                      *sizeY, (15 + magnificationCoconuts*10)*sizeX);
    txCircle (x -  10*sizeX, y -  215                      *sizeY, (15 + magnificationCoconuts*10)*sizeX);
    txCircle (x +  10*sizeX, y - (205 - fallingCoconut*100)*sizeY, (15 + magnificationCoconuts*10)*sizeX);
    }

void DrawTreasures (int x, int y, double sizeX, double sizeY, COLORREF chestBoxColor, COLORREF chestLidColor,
                    COLORREF $Color, double pirates, double chestLidUp)
    {
    txSetColor     (TX_GRAY, 3);
    txSetFillColor (chestBoxColor);
    txRectangle    (x, y, x + 110*sizeX, y + 80*sizeY);

    txSetColor     (TX_DARKGRAY, 3);
    txSetFillColor (chestLidColor);
    POINT cap [4] = {{ROUND (x),             ROUND (y -  (5 + chestLidUp*20)*sizeY)},
                     {ROUND (x +  25*sizeX), ROUND (y - (40 + chestLidUp*20)*sizeY)},
                     {ROUND (x +  85*sizeX), ROUND (y - (40 + chestLidUp*20)*sizeY)},
                     {ROUND (x + 110*sizeX), ROUND (y -  (5 + chestLidUp*20)*sizeY)}};
    txPolygon (cap, 4);

    txSetColor   ($Color);
    txSelectFont ("Arial", 50*sizeX, 0, FW_BOLD);

    int x0 = MIN(ROUND (x + 30*sizeX), ROUND (x + 90*sizeX));
    int x1 = MAX(ROUND (x + 30*sizeX), ROUND (x + 90*sizeX));
    int y0 = MIN(ROUND (y - 10*sizeY), ROUND (y + 80*sizeY));
    int y1 = MAX(ROUND (y - 10*sizeY), ROUND (y + 80*sizeY));

    if (pirates > 0)
        txDrawText (x0 - 25, y0, x1 + 25, y1, "junk");
    else
        txDrawText (x0,      y0, x1,      y1, "$");
    }

void DrawTorch (int x, int y, double sizeX, double sizeY, COLORREF stickColor, COLORREF fireColor, double signal)
    {
    txSetColor     (TX_GREY, 2);
    txSetFillColor (stickColor);
    POINT stick [4] = {{ROUND (x),            ROUND (y)},
                       {ROUND (x),            ROUND (y - 30*sizeY)},
                       {ROUND (x + 20*sizeX), ROUND (y - 30*sizeY)},
                       {ROUND (x + 20*sizeX), ROUND (y + 10*sizeY)}};
    txPolygon (stick, 4);

    txSetColor     (RGB (255, 0, 0));
    txSetFillColor (fireColor);
    POINT fire [6] = {{ROUND (x),                          ROUND (y -  30             *sizeY)},
                      {ROUND (x - (10 + signal*20)*sizeX), ROUND (y - (50 + signal*20)*sizeY)},
                      {ROUND (x +  10             *sizeX), ROUND (y - (70 + signal*20)*sizeY)},
                      {ROUND (x + (30 + signal*20)*sizeX), ROUND (y - (50 + signal*20)*sizeY)},
                      {ROUND (x +  20             *sizeX), ROUND (y -  30             *sizeY)},
                      {ROUND (x),                          ROUND (y -  30             *sizeY)}};
    txPolygon (fire, 6);
    }

void DrawMan (int x, int y, double sizeX, double sizeY, COLORREF headColor, COLORREF eyesColor, COLORREF mouthColor,
              COLORREF legsColor, int legsStep, int rightHandDn, int leftHandDn, double Mad)
    {
    txSetColor     (TX_DARKGRAY, 2);
    txSetFillColor (headColor);
    txCircle       (x, y - Mad*5, 20*sizeX);

    txSetFillColor (eyesColor);
    txCircle       (x - 10*sizeX, y - (5 + Mad*5)*sizeY, (4 + Mad*3)*sizeX);
    txCircle       (x + 10*sizeX, y - (5 + Mad*5)*sizeY, (4 + Mad*3)*sizeX);

    if (Mad > 0)
        {
        txSetColor     (RGB (128, 128, 92), 2);
        txSetFillColor (mouthColor);
        txChord (x - 10*sizeX, y + (5 - Mad*5)*sizeY, x + 10*sizeX, y + (15 - Mad*5)*sizeY, (sizeY >= 0)? 180:0, 180);
        }
    else
        {
        txChord (x - (10 + Mad*5)*sizeX, y + (5 - Mad*5)*sizeY, x + (10 + Mad*5)*sizeX, y + (15 - Mad*5)*sizeY, (sizeY >= 0)? 180:0, 180);
        txArc   (x - (10 + Mad*5)*sizeX, y + (5 - Mad*5)*sizeY, x + (10 + Mad*5)*sizeX, y + (15 - Mad*5)*sizeY, (sizeY >= 0)? 180:0, 180);
        }

    txSetColor (RGB (128, 128, 128), 5);
    txLine     (x, y - (4 + Mad*5)*sizeY, x, y + (4 - Mad*5)*sizeY);

    txSetColor     (TX_DARKGRAY, 1);
    txSetFillColor (headColor);
    txRectangle    (x - 20*sizeX, y + 20*sizeY, x + 20*sizeX, y + 100*sizeY);

    txSetColor     (TX_DARKGRAY, 1);
    txSetFillColor (headColor);

    POINT rightHand [4] = {{ROUND (x - 20*sizeX), ROUND (y +  40                   *sizeY)},
                           {ROUND (x - 80*sizeX), ROUND (y - (20 - rightHandDn*100)*sizeY)},
                           {ROUND (x - 80*sizeX), ROUND (y - (30 - rightHandDn*100)*sizeY)},
                           {ROUND (x - 20*sizeX), ROUND (y +  20                   *sizeY)}};
    txPolygon (rightHand, 4);

    POINT leftHand [4] = {{ROUND (x + 20*sizeX), ROUND (y +  40                  *sizeY)},
                          {ROUND (x + 20*sizeX), ROUND (y +  20                  *sizeY)},
                          {ROUND (x + 80*sizeX), ROUND (y - (30 - leftHandDn*100)*sizeY)},
                          {ROUND (x + 80*sizeX), ROUND (y - (20 - leftHandDn*100)*sizeY)}};
    txPolygon (leftHand, 4);

    txSetColor     (TX_GRAY, 1);
    txSetFillColor (legsColor);

    POINT body [5] = {{ROUND (x -   (40 - legsStep*35)*sizeX), ROUND (y + 180*sizeY)},
                      {ROUND (x -    20               *sizeX), ROUND (y + 100*sizeY)},
                      {ROUND (x +    20               *sizeX), ROUND (y + 100*sizeY)},
                      {ROUND (x +   (40 - legsStep*35)*sizeX), ROUND (y + 180*sizeY)},
                      {ROUND (x),                              ROUND (y + 130*sizeY)}};
    txPolygon (body, 5);

    txSetColor   (TX_YELLOW, 5);
    txSelectFont ("Arial", 20, 0, FW_BOLD);

    if (rightHandDn > 0 or leftHandDn > 0)
        txDrawText (x + 70, y - 150, x + 200, y + 50, "SOS!!!");
    else
        txDrawText (x - 70, y - 150, x + 130, y + 50, " ");

    if (Mad > 0)
        txDrawText (x + 70, y - 150, x + 200, y + 50, "НЕ ГУБИТЕ!");
    else
        txDrawText (x + 70, y - 150, x + 200, y + 50, " ");
    }
