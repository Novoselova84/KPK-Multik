# include "TXLib.h"

void DrawOcean      (int x, int y, double sizeX, double sizeY, COLORREF oceanColor, double wave);

void DrawSun        (int x, int y, double sizeX, double sizeY, COLORREF sunColor, COLORREF glassesColor, COLORREF eyesColor,
                     COLORREF mouthColor, COLORREF hatColor, double hello, double surprise, double anger, double newHat, double ray);

void DrawBigCloud   (int x, int y, double sizeX, double sizeY, COLORREF bigCloudColor, double darkBigCloud, double hit);

void DrawSmallCloud (int x, int y, double sizeX, double sizeY, COLORREF smallCloudColor, double darkSmallCloud);

void DrawShip       (int x, double y, double sizeX, double sizeY, COLORREF mastColor, COLORREF flagColor, COLORREF shipColor,
                     COLORREF starboardSailColor, COLORREF portSailColor, COLORREF anchorColor, double SetSail,
                     double dropAnchor, double deception);

void DrawWhale      (int x, int y, double sizeX, double sizeY, COLORREF whaleColor, COLORREF eyeColor, COLORREF fountainColor,
                     double founUp, int finMovement, int turbo);

void DrawIsland     (int x, int y, double sizeX, double sizeY, COLORREF islandColor, COLORREF sosColor, int invisible);

void DrawPalma      (int x, int y, double sizeX, double sizeY, COLORREF trunkColor, COLORREF leavesColor,
                     COLORREF coconutsColor, double magnificationCoconuts, double fallingCoconut);

void DrawTreasures  (int x, int y, double sizeX, double sizeY, COLORREF chestBoxColor, COLORREF chestLidColor,
                    COLORREF dollarColor, double pirates, double chestLidUp);

void DrawTorch      (int x, int y, double sizeX, double sizeY, COLORREF stickColor, COLORREF fireColor, double signal);

void DrawMan        (int x, int y, double sizeX, double sizeY, COLORREF headColor, COLORREF eyesColor, COLORREF mouthColor,
                    COLORREF legsColor, int legsStep, int rightHandDn, int leftHandDn, double Mad);

void DrawTextDraw   (int x, int y, int x0, int y0, const char text[], COLORREF textColor, COLORREF shadowColor);

void DrawTV         ();

void DrawTextDraw   (int x, int y, int x0, int y0, const char text[], COLORREF textColor, COLORREF shadowColor)
    {
    txSelectFont ("Constantia", 200);
    txSetColor   (textColor, 5);
    txDrawText   (x, y, x0, y0, text);
    txSetColor   (shadowColor, 5);
    txDrawText   (x + 5, y + 5, x0 + 5, y0 + 5, text);
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
    txDrawText     (1210,  700, 1390, 750, " ›ÎÂÍÚÓÌ");

    txSetColor     (RGB (128, 255, 255), 10);
    txSetFillColor (RGB (128, 255, 255));
    txRectangle    (20, 20, 1210, 785);
    }

void DrawOcean (int x, int y, double sizeX, double sizeY, COLORREF oceanColor, double wave)
    {
    if (wave >= 1)
        {
        txSetColor     (RGB (60, 35, 197));
        txSetFillColor (RGB (60, 35, 197));
        txRectangle    (x, y, x + 1200*sizeX, y + 470*sizeY);
        }
    else
        {
        txSetColor     (oceanColor);
        txSetFillColor (oceanColor);
        txRectangle    (x, y, x + 1200*sizeX, y + 470*sizeY);
        }
    }

void DrawSun (int x, int y, double sizeX, double sizeY, COLORREF sunColor, COLORREF glassesColor, COLORREF eyesColor,
              COLORREF mouthColor, COLORREF hatColor, double hello, double surprise, double anger, double newHat, double ray)
    {
    txSetColor (sunColor, 2);

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

    if (anger >= 1)
        {
        txSetColor   (RGB (54, 237, 50), 3);
        txSelectFont ("Arial", 30);
        txDrawText   (x - (35 + anger*10)*sizeX, y + 30*sizeY, x + (35 + anger*10)*sizeX, y + 70*sizeY, "NO");
        }
    else
        {
        txSetColor     (TX_LIGHTGRAY, 3);
        txSetFillColor (mouthColor);
        txArc   (x - (35 + surprise*10)*sizeX, y + 20*sizeY, x + (35 + surprise*10)*sizeX, y + (55 + surprise*10)*sizeY, (sizeY >= 0)? 180:0, 180);
        txChord (x - (35 + surprise*10)*sizeX, y + 20*sizeY, x + (35 + surprise*10)*sizeX, y + (55 + surprise*10)*sizeY, (sizeY >= 0)? 180:0, 180);
        }

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

    if (deception > 0)
        txTextOut (x +  45*sizeX, y - 240*sizeY, "Pirates");
    else
        txTextOut (x +  45*sizeX, y - 240*sizeY, "C++");

    txSetColor     (TX_GRAY, 3);
    txSetFillColor (shipColor);
    POINT ship [4] = {{ROUND (x - 120*sizeX), ROUND (y + 150*sizeY)},
                      {ROUND (x - 190*sizeX), ROUND (y)},
                      {ROUND (x + 230*sizeX), ROUND (y)},
                      {ROUND (x + 180*sizeX), ROUND (y + 150*sizeY)}};
    txPolygon (ship, 4);

    txSelectFont ("Gabriola", 100*sizeX, 0, FW_BOLD);

    if (deception > 0)
        txTextOut (x - 110*sizeX, y +  10*sizeY, "Cerberus");
    else
        txTextOut (x - 110*sizeX, y +  10*sizeY, "Salvation");

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

    if (invisible > 0)
        txTextOut (x + 400*sizeX, y +  20*sizeY, " ");
    else
        txTextOut (x + 400*sizeX, y +  20*sizeY, "SOS!!!");
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
    txCircle (x -  30*sizeX, y - (210 - fallingCoconut*120)*sizeY, (15 + magnificationCoconuts*10)*sizeX);
    txCircle (x,             y -  230                      *sizeY, (15 + magnificationCoconuts*10)*sizeX);
    txCircle (x -  10*sizeX, y - (215 - fallingCoconut*150)*sizeY, (15 + magnificationCoconuts*10)*sizeX);
    txCircle (x +  10*sizeX, y - (205 - fallingCoconut*170)*sizeY, (15 + magnificationCoconuts*10)*sizeX);
    }

void DrawTreasures (int x, int y, double sizeX, double sizeY, COLORREF chestBoxColor, COLORREF chestLidColor,
                    COLORREF dollarColor, double pirates, double chestLidUp)
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

    txSetColor   (dollarColor);
    txSelectFont ("Arial", 50*sizeX, 0, FW_BOLD);

    if (pirates > 0)
        txTextOut (x + 15*sizeX, y + 10*sizeY, "junk");
    else
        txTextOut (x + 45*sizeX, y + 10*sizeY, "$");
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
        txSetColor     (RGB (128, 128, 92), 3);
        txSetFillColor (mouthColor);
        txLine (x - 10*sizeX, y + 5*sizeY, x + 10*sizeX, y + 5*sizeY);
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

    if (rightHandDn > 0 || leftHandDn > 0)
        txDrawText (x + 70, y - 150, x + 200, y + 50, "SOS!!!");
    else
        txDrawText (x - 70, y - 150, x + 130, y + 50, " ");

    if (Mad > 0)
        txDrawText (x + 70, y - 150, x + 200, y + 50, "Õ≈ √”¡»“≈!");
    else
        txDrawText (x + 70, y - 150, x + 200, y + 50, " ");
    }
