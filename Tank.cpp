/*Defenisi Library*/
#include "Level.h"
#include "Tank.h"

/*PETA*//*11*/
void drawBRICK(int Row, int Colom){

    Row = Row*Item;
    Colom = Colom*Item;
    readimagefile("asset/Image/Item/Brick 15x15.bmp", Colom+20, Row+45, Colom+Item+20, Row+Item+45);
}
void drawSTEEL(int Row, int Colom){

    Row = Row*Item;
    Colom = Colom*Item;
    readimagefile("asset/Image/Item/Steel 15x15.bmp", Colom+20, Row+45, Colom+Item+20, Row+Item+45);
}
void drawSTEEL2(int Row, int Colom){

    Row = Row*Item;
    Colom = Colom*Item;
    readimagefile("asset/Image/Item/Steel 15x15.bmp", Colom+20, Row+45, Colom+14+20, Row+14+45);
}
void drawBUSH(int Row, int Colom){

    Row = Row*Item;
    Colom = Colom*Item;
    readimagefile("asset/Image/Item/Bush 15x15.bmp", Colom+20, Row+45, Colom+Item+20, Row+Item+45);
}
void drawBUSH2(int Row, int Colom){

    Row = Row*Item;
    Colom = Colom*Item;
    readimagefile("asset/Image/Item/Bush 15x15.bmp", Colom+20, Row+45, Colom+14+20, Row+14+45);
}
void drawWATER(int Row, int Colom){

    Row = Row*Item;
    Colom = Colom*Item;
    readimagefile("asset/Image/Item/Water 15x15.bmp", Colom+20, Row+45, Colom+Item+20, Row+Item+45);
}
void drawWATER2(int Row, int Colom){

    Row = Row*Item;
    Colom = Colom*Item;
    readimagefile("asset/Image/Item/Water 15x15.bmp", Colom+20, Row+45, Colom+14+20, Row+14+45);
}
void drawROAD(int Row, int Colom){

    Row = Row*Item;
    Colom = Colom*Item;
    readimagefile("asset/Image/Item/Del 15x15.bmp", Colom+20, Row+45, Colom+14+20, Row+14+45);
}
void drawCROWN(int Row, int Colom){

    Row = Row*Item;
    Colom = Colom*Item;
    readimagefile("asset/Image/Item/Crown 30x30.bmp", Colom+20, Row+45, Colom+Object+20, Row+Object+45);
}
void createMAP(int level, int *CrRow, int *CrColom, int *Row, int *Colom){
    int RowX, ColomY;
    for (RowX = 0; RowX < 34; RowX++)
	{
        for(ColomY = 0; ColomY < 34; ColomY++)
		{
		    switch (level)
		    {
		        case 1 : { map[RowX][ColomY] = level1[RowX][ColomY]; break;}
                case 2 : { map[RowX][ColomY] = level2[RowX][ColomY]; break;}
		    }
		}
    }
    switch (level)
    {
        case 1 :
            {
                *CrRow = 31;
                *CrColom = 16;
                *Row = 31;
                *Colom = 13;
                break;
            }
        case 2 :
            {
                *CrRow = 31;
                *CrColom = 11;
                *Row = 31;
                *Colom = 15;
                break;
            }
    }
}
void drawMAP(int CrRow, int CrColom){
    int Row, Colom;
    for (Row = 0; Row < 34; Row++)
	{
        for(Colom = 0; Colom < 34; Colom++)
		{
		    switch(map[Row][Colom])
		    {   case 0 : {drawROAD(Row, Colom);break;}
                case 1 : {drawBRICK(Row, Colom);break;}
                case 2 : {drawSTEEL(Row, Colom);break;}
                case 3 : {drawBUSH(Row, Colom);break;}
                case 4 : {drawWATER(Row, Colom);break;}
            }
		}
    }
    drawCROWN(CrRow, CrColom);
}
/*BOARD*//*8*/
void drawBOARDITEM(ItemControl ITEM){
    char msg[100];

    sprintf(msg, "%d", ITEM.Brick);
    outtextxy(610, 350, msg);
    sprintf(msg, "%d", ITEM.Steel);
    outtextxy(710, 350, msg);
    sprintf(msg, "%d", ITEM.Bush);
    outtextxy(610, 380, msg);
    sprintf(msg, "%d", ITEM.Water);
    outtextxy(710, 380, msg);
}
void countBOARDITEM(ItemControl *ITEM){

    int Row, Colom;
    for (Row = 0; Row < 34; Row++)
	{
        for(Colom = 0; Colom < 34; Colom++)
		{
		    switch(map[Row][Colom])
		    {   case 1 : {ITEM->Brick+=1;break;}
                case 2 : {ITEM->Steel+=1;break;}
                case 3 : {ITEM->Bush+=1;break;}
                case 4 : {ITEM->Water+=1;break;}
            }
		}
	}
}
void drawBOARDENEMY(){
    readimagefile("asset/Image/Tank/Enemy.bmp", 580, 300, 580+Item, 300+Item);
    readimagefile("asset/Image/Tank/Enemy.bmp", 600, 300, 600+Item, 300+Item);
    readimagefile("asset/Image/Tank/Enemy.bmp", 620, 300, 620+Item, 300+Item);
    readimagefile("asset/Image/Tank/Enemy.bmp", 640, 300, 640+Item, 300+Item);
    readimagefile("asset/Image/Tank/Enemy.bmp", 660, 300, 660+Item, 300+Item);
    readimagefile("asset/Image/Tank/Enemy.bmp", 680, 300, 680+Item, 300+Item);
    readimagefile("asset/Image/Tank/Enemy.bmp", 700, 300, 700+Item, 300+Item);
    readimagefile("asset/Image/Tank/Enemy.bmp", 720, 300, 720+Item, 300+Item);
    readimagefile("asset/Image/Tank/Enemy.bmp", 740, 300, 740+Item, 300+Item);
}
void drawBOARDLIFE(TankControl TANK){

    if (TANK.life == 1)
    {
        readimagefile("asset/Image/Item/Life.bmp", 580, 235, 580+Item, 235+Item);
    }
    else if (TANK.life == 2)
    {
        readimagefile("asset/Image/Item/Life.bmp", 580, 235, 580+Item, 235+Item);
        readimagefile("asset/Image/Item/Life.bmp", 600, 235, 600+Item, 235+Item);
    }
    else if (TANK.life == 3)
    {
        readimagefile("asset/Image/Item/Life.bmp", 580, 235, 580+Item, 235+Item);
        readimagefile("asset/Image/Item/Life.bmp", 600, 235, 600+Item, 235+Item);
        readimagefile("asset/Image/Item/Life.bmp", 620, 235, 620+Item, 235+Item);
    }
    else if (TANK.life == 4)
    {
        readimagefile("asset/Image/Item/Life.bmp", 580, 235, 580+Item, 235+Item);
        readimagefile("asset/Image/Item/Life.bmp", 600, 235, 600+Item, 235+Item);
        readimagefile("asset/Image/Item/Life.bmp", 620, 235, 620+Item, 235+Item);
        readimagefile("asset/Image/Item/Life.bmp", 640, 235, 640+Item, 235+Item);
    }
}
void drawBOARDSCORE(TankControl TANK){
    char msg[100];
    sprintf(msg, "%d", TANK.score);
    outtextxy(600, 165, msg);
}
void countLIFE(TankControl *TANK){

    if (TANK->life < 4)
    {
        if (TANK->score == 1000)
        {
            TANK->life+=1;
        }
        else if (TANK->score == 2000)
        {
            TANK->life+=1;
        }
        else if (TANK->score == 3000)
        {
            TANK->life+=1;
        }
        else if (TANK->score == 4000)
        {
            TANK->life+=1;
        }
        else if (TANK->score == 5000)
        {
            TANK->life+=1;
        }
        else if (TANK->score == 6000)
        {
            TANK->life+=1;
        }
        else if (TANK->score == 7000)
        {
            TANK->life+=1;
        }
    }
}
void drawBOARD(TankControl TANK, ItemControl ITEM){

    rectangle(560, 120, 780, 410);
    readimagefile("asset/Image/LOGO2.bmp", 550, 35, 770, 110);
    //BOARD SCORE
    outtextxy(570, 130, "SCORE");
    rectangle(570, 150 ,770, 195);
    drawBOARDSCORE(TANK);
    //BOARD LIFE
    outtextxy(570, 200, "LIFE");
    rectangle(570, 220 ,770, 265);
    drawBOARDLIFE(TANK);
    //BOARD ENEMY
    outtextxy(570, 270, "ENEMY");
    rectangle(570, 290 ,770, 335);
    drawBOARDENEMY();
	// BOARD ITEM
	readimagefile("asset/Image/Item/Brick 15x15.bmp", 580, 350, 580+Item, 350+Item);
    readimagefile("asset/Image/Item/Steel 15x15.bmp", 680, 350, 680+Item, 350+Item);
    readimagefile("asset/Image/Item/Bush 15x15.bmp", 580, 380, 580+Item, 380+Item);
    readimagefile("asset/Image/Item/Water 15x15.bmp", 680, 380, 680+Item, 380+Item);
    drawBOARDITEM(ITEM);
    readimagefile("asset/Image/Button/STATUSPLAY.bmp", 560, 420, 780, 470);

}
void walkBOARD(TankControl *TANK, ItemControl ITEM){

    drawBOARDSCORE(*TANK);
    //countLIFE(&*TANK);
    //drawBOARDLIFE(*TANK);
    drawBOARDITEM(ITEM);
}
/*Check Kondisi*//*3*/
void devPeluru(PeluruControl Peluru, int countHorpel, int countVerpel, int Row, int Colom, int DOOR){
    char msg[100];

    outtextxy(570, 260, "Parameter Peluru");
    rectangle(570, 280, 770, 410);

    sprintf(msg, "direc   : %d", Peluru.direc);
    outtextxy(580, 285, msg);
    sprintf(msg, "coorX : %d", Peluru.coorX);
    outtextxy(580, 305, msg);
    sprintf(msg, "coorY : %d", Peluru.coorY);
    outtextxy(680, 305, msg);
    sprintf(msg, "countHorpel : %d", countHorpel);
    outtextxy(580, 325, msg);
    sprintf(msg, "countVerpel : %d", countVerpel);
    outtextxy(680, 325, msg);
    sprintf(msg, "RowPel : %d", Row);
    outtextxy(580, 345, msg);
    sprintf(msg, "ColomPel : %d", Colom);
    outtextxy(680, 345, msg);
    sprintf(msg, "DOOR : %d", DOOR);
    outtextxy(580, 365, msg);
}
void devTANK(int turn, int countHor, int countVer, int Row, int Colom, TankControl TANK){
    char msg[100];

    outtextxy(570, 415, "Parameter TANK");
    rectangle(570, 435, 770, 545);

    sprintf(msg, "KEY   : %d", TANK.KEY);
    outtextxy(580, 440, msg);
    sprintf(msg, "turn  : %d", turn);
    outtextxy(580, 460, msg);
    sprintf(msg, "direc : %d", TANK.direc);
    outtextxy(680, 460, msg);
    sprintf(msg, "coorX : %d", TANK.coorX);
    outtextxy(580, 480, msg);
    sprintf(msg, "coorY : %d", TANK.coorY);
    outtextxy(680, 480, msg);
    sprintf(msg, "countHor  : %d", countHor);
    outtextxy(580, 500, msg);
    sprintf(msg, "countVer  : %d", countVer);
    outtextxy(680, 500, msg);
    sprintf(msg, "Row   : %d", Row);
    outtextxy(580, 520, msg);
    sprintf(msg, "Colom : %d", Colom);
    outtextxy(680, 520, msg);
}
void devMAP(int x, int Row, int Colom){
    char msg[2];
    Row = Row*Item;
    Colom = Colom*Item;
    sprintf(msg, "%d", x);
    outtextxy(Colom+20, Row+30, msg);
}
/*TANK*//*10*/
void goTANK(TankControl *TANK){

    if (TANK->KEY == UP)
    {
        TANK->coorY-=SPEED;
    }
    else if (TANK->KEY == RIGHT)
    {
        TANK->coorX+=SPEED;
    }
    else if (TANK->KEY == DOWN)
    {
        TANK->coorY+=SPEED;
    }
    else if (TANK->KEY == LEFT)
    {
        TANK->coorX-=SPEED;
    }
}
void delTANK(TankControl TANK){

    readimagefile("asset/Image/Item/Del 30x30.bmp", TANK.coorX, TANK.coorY, TANK.coorX+Object, TANK.coorY+Object);
}
void drawTANK(TankControl TANK){

    if (TANK.KEY == UP or TANK.KEY == DOWN)
    {
        if (TANK.coorY % 2 == 0)
        {
            if (TANK.KEY == UP)
            {
                readimagefile("asset/Image/Tank/UP1.bmp", TANK.coorX, TANK.coorY, TANK.coorX+Object, TANK.coorY+Object);
            }
            else if (TANK.KEY == DOWN)
            {
                readimagefile("asset/Image/Tank/DOWN1.bmp", TANK.coorX, TANK.coorY, TANK.coorX+Object, TANK.coorY+Object);
            }
        }
        else
        {
            if (TANK.KEY == UP)
            {
                readimagefile("asset/Image/Tank/UP2.bmp", TANK.coorX, TANK.coorY, TANK.coorX+Object, TANK.coorY+Object);
            }
            else if (TANK.KEY == DOWN)
            {
                readimagefile("asset/Image/Tank/DOWN2.bmp", TANK.coorX, TANK.coorY, TANK.coorX+Object, TANK.coorY+Object);
            }
        }
    }
    else if (TANK.KEY == RIGHT or TANK.KEY == LEFT)
    {
        if (TANK.coorX % 2 == 0)
        {
            if (TANK.KEY == RIGHT)
            {
                readimagefile("asset/Image/Tank/RIGHT1.bmp", TANK.coorX, TANK.coorY, TANK.coorX+Object, TANK.coorY+Object);
            }
            else if (TANK.KEY == LEFT)
            {
                readimagefile("asset/Image/Tank/LEFT1.bmp", TANK.coorX, TANK.coorY, TANK.coorX+Object, TANK.coorY+Object);
            }
        }
        else
        {
            if (TANK.KEY == RIGHT)
            {
                readimagefile("asset/Image/Tank/RIGHT2.bmp", TANK.coorX, TANK.coorY, TANK.coorX+Object, TANK.coorY+Object);
            }
            else if (TANK.KEY == LEFT)
            {
                readimagefile("asset/Image/Tank/LEFT2.bmp", TANK.coorX, TANK.coorY, TANK.coorX+Object, TANK.coorY+Object);
            }
        }
    }
}
void rotateTANK(int turn, TankControl *TANK){

    delTANK(*TANK);
    drawTANK(*TANK);
    TANK->direc = turn;
}
void condiDRIVE(TankControl TANK, int *Count, int *Index){

    if (*Count == 3 or *Count == -3)
    {
        if (TANK.KEY == UP or TANK.KEY == LEFT)
        {
            *Index-=1;
            *Count=0;
        }
        else if (TANK.KEY == DOWN or TANK.KEY == RIGHT)
        {
            *Index+=1;
            *Count=0;
        }
    }
}
void countDRIVE(TankControl TANK, int *Count, int *Index){

     if (TANK.KEY == UP or TANK.KEY == LEFT)
    {
        *Count-=1;
    }
    else if (TANK.KEY == DOWN or TANK.KEY == RIGHT)
    {
        *Count+=1;
    }
    condiDRIVE(TANK, &*Count, &*Index);
}
void REPLACE(TankControl *TANK, int *Count, int *Index){

    countDRIVE(*TANK, &*Count, &*Index);
    delTANK(*TANK);
    goTANK(&*TANK);
    drawTANK(*TANK);
}
void DRIVETANK(TankControl *TANK, int *countHor, int *countVer, int *Row, int *Colom){

    int *Index, *Vertikal, *Horizontal;
    if (TANK->KEY == UP or TANK->KEY == DOWN)
    {
        Index=&*Row;
        Vertikal=&*countHor;
        Horizontal=&*countVer;
    }
    else if (TANK->KEY == RIGHT or TANK->KEY == LEFT)
    {
        Index=&*Colom;
        Vertikal=&*countVer;
        Horizontal=&*countHor;
    }

    if (*Vertikal > 0)
    {
        if (*Horizontal!=0 and (((map[*Row][*Colom]==0 or map[*Row][*Colom]==3) and (map[*Row][*Colom+1]==0 or map[*Row][*Colom+1]==3)) and ((map[*Row-1][*Colom]==0 or map[*Row-1][*Colom]==3) and (map[*Row-1][*Colom+1]==0 or map[*Row-1][*Colom+1]==3))))
        {
            REPLACE(&*TANK, &*Horizontal, &*Index);
            if ((map[*Row][*Colom] == 3 and map[*Row][*Colom+1] == 3 and map[*Row][*Colom+1] == 3 and map[*Row+1][*Colom+1] == 3))
            {
                drawBUSH2(*Row, *Colom);
                drawBUSH2(*Row+1, *Colom);
                drawBUSH2(*Row, *Colom+1);
                drawBUSH2(*Row+1, *Colom+1);
            }
        }
        else
        {
            switch(TANK->KEY)
            {
            case UP :
                {
                    if ((map[*Row-1][*Colom]==0 or map[*Row-1][*Colom]==3)and (map[*Row-1][*Colom+1]==0 or map[*Row-1][*Colom+1]==3) and (map[*Row-1][*Colom+2]==0 or map[*Row-1][*Colom+2]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row-1][*Colom+2] == 3 and map[*Row-1][*Colom] == 3) and map[*Row-1][*Colom+1] == 3)
                        {
                            drawBUSH2(*Row-1, *Colom+2);
                            drawBUSH2(*Row-1, *Colom);
                            drawBUSH2(*Row-1, *Colom+1);
                        }
                    }break;
                }
            case DOWN :
                {
                    if ((map[*Row+2][*Colom+2]==0 or map[*Row+2][*Colom+2]==3) and (map[*Row+2][*Colom]==0 or map[*Row+2][*Colom]==3)and (map[*Row+2][*Colom+1]==0 or map[*Row+2][*Colom+1]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row+2][*Colom+2] == 3 and map[*Row+2][*Colom] == 3) and map[*Row+2][*Colom+1] == 3)
                        {
                            drawBUSH2(*Row+2, *Colom+2);
                            drawBUSH2(*Row+2, *Colom);
                            drawBUSH2(*Row+2, *Colom+1);
                        }
                    }break;
                }
            case RIGHT :
                {
                    if ((map[*Row][*Colom+2]==0 or map[*Row][*Colom+2]==3) and (map[*Row+1][*Colom+2]==0 or map[*Row+1][*Colom+2]==3) and (map[*Row+2][*Colom+2]==0 or map[*Row+2][*Colom+2]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row+2][*Colom+2] == 3 and map[*Row][*Colom+2] == 3) and map[*Row+1][*Colom+2] == 3)
                        {
                            drawBUSH2(*Row+2, *Colom+2);
                            drawBUSH2(*Row, *Colom+2);
                            drawBUSH2(*Row+1, *Colom+2);
                        }
                    }break;
                }
            case LEFT :
                {
                    if ((map[*Row][*Colom-1]==0 or map[*Row][*Colom-1]==3) and (map[*Row+2][*Colom-1]==0 or map[*Row+2][*Colom-1]==3) and (map[*Row+1][*Colom-1]==0 or map[*Row+1][*Colom-1]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row+2][*Colom-1] == 3 and map[*Row][*Colom-1] == 3) and map[*Row+1][*Colom-1] == 3)
                        {
                            drawBUSH2(*Row+2, *Colom-1);
                            drawBUSH2(*Row, *Colom-1);
                            drawBUSH2(*Row+1, *Colom-1);
                        }
                    }break;
                }
            }
        }
    }
    else if (*Vertikal < 0)
    {
        if (*Horizontal!=0 and (((map[*Row][*Colom]==0 or map[*Row][*Colom]==3) and (map[*Row][*Colom+1]==0 or map[*Row][*Colom+1]==3)) and ((map[*Row-1][*Colom]==0 or map[*Row-1][*Colom]==3) and (map[*Row-1][*Colom+1]==0 or map[*Row-1][*Colom+1]==3))))
        {
            REPLACE(&*TANK, &*Horizontal, &*Index);
            if ((map[*Row][*Colom] == 3 and map[*Row][*Colom+1] == 3 and map[*Row][*Colom+1] == 3 and map[*Row+1][*Colom+1] == 3))
            {
                drawBUSH2(*Row, *Colom);
                drawBUSH2(*Row+1, *Colom);
                drawBUSH2(*Row, *Colom+1);
                drawBUSH2(*Row+1, *Colom+1);
            }
        }
        else
        {
            switch(TANK->KEY)
            {
            case UP :
                {
                    if ((map[*Row-1][*Colom]==0 or map[*Row-1][*Colom]==3)and (map[*Row-1][*Colom+1]==0 or map[*Row-1][*Colom+1]==3) and (map[*Row-1][*Colom-1]==0 or map[*Row-1][*Colom-1]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row-1][*Colom-1] == 3 and map[*Row-1][*Colom] == 3) and map[*Row-1][*Colom+1] == 3)
                        {
                            drawBUSH2(*Row-1, *Colom-1);
                            drawBUSH2(*Row-1, *Colom);
                            drawBUSH2(*Row-1, *Colom+1);
                        }
                    }break;
                }
            case DOWN :
                {
                    if ((map[*Row+2][*Colom-1]==0 or map[*Row+2][*Colom-1]==3) and (map[*Row+2][*Colom]==0 or map[*Row+2][*Colom]==3)and (map[*Row+2][*Colom+1]==0 or map[*Row+2][*Colom+1]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row+2][*Colom-1] == 3 and map[*Row+2][*Colom] == 3) and map[*Row+2][*Colom+1] == 3)
                        {
                            drawBUSH2(*Row+2, *Colom-1);
                            drawBUSH2(*Row+2, *Colom);
                            drawBUSH2(*Row+2, *Colom+1);
                        }
                    }break;
                }
            case RIGHT :
                {
                    if ((map[*Row-1][*Colom+2]==0 or map[*Row-1][*Colom+2]==3) and (map[*Row][*Colom+2]==0 or map[*Row][*Colom+2]==3) and (map[*Row+1][*Colom+2]==0 or map[*Row+1][*Colom+2]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row-1][*Colom+2] == 3 and map[*Row][*Colom+2] == 3) and map[*Row+1][*Colom+2] == 3)
                        {
                            drawBUSH2(*Row-1, *Colom+2);
                            drawBUSH2(*Row, *Colom+2);
                            drawBUSH2(*Row+1, *Colom+2);
                        }
                    }break;
                }
            case LEFT :
                {
                    if ((map[*Row-1][*Colom-1]==0 or map[*Row-1][*Colom-1]==3) and (map[*Row][*Colom-1]==0 or map[*Row][*Colom-1]==3) and (map[*Row+1][*Colom-1]==0 or map[*Row+1][*Colom-1]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row-1][*Colom-1] == 3 and map[*Row][*Colom-1] == 3) and map[*Row+1][*Colom-1] == 3)
                        {
                            drawBUSH2(*Row-1, *Colom-1);
                            drawBUSH2(*Row, *Colom-1);
                            drawBUSH2(*Row+1, *Colom-1);
                        }
                    }break;
                }
            }
        }
    }
    else if (*Vertikal == 0)
    {
        if (*Horizontal!=0 and (map[*Row][*Colom]==0 or map[*Row][*Colom]==3) and (map[*Row][*Colom+1]==0 or map[*Row][*Colom+1]==3) and (map[*Row+1][*Colom]==0 or map[*Row+1][*Colom]==3) and (map[*Row+1][*Colom+1]==0 or map[*Row+1][*Colom+1]==3))
        {
            REPLACE(&*TANK, &*Horizontal, &*Index);
            if ((map[*Row][*Colom] == 3 and map[*Row][*Colom+1] == 3 and map[*Row][*Colom+1] == 3 and map[*Row+1][*Colom+1] == 3))
            {
                drawBUSH2(*Row, *Colom);
                drawBUSH2(*Row+1, *Colom);
                drawBUSH2(*Row, *Colom+1);
                drawBUSH2(*Row+1, *Colom+1);
            }
        }
        else
        {
            switch(TANK->KEY)
            {
            case UP :
                {
                    if ((map[*Row-1][*Colom]==0 or map[*Row-1][*Colom]==3) and (map[*Row-1][*Colom+1]==0 or map[*Row-1][*Colom+1]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if (map[*Row-1][*Colom]==3 and map[*Row-1][*Colom+1]==3)
                        {
                            drawBUSH2(*Row-1, *Colom);
                            drawBUSH2(*Row-1, *Colom+1);
                        }
                    }break;
                }
            case DOWN :
                {
                    if ((map[*Row+2][*Colom]==0 || map[*Row+2][*Colom]==3) && (map[*Row+2][*Colom+1]==0 || map[*Row+2][*Colom+1]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if (map[*Row+2][*Colom]==3 and map[*Row+2][*Colom+1]==3)
                        {
                            drawBUSH2(*Row+2, *Colom);
                            drawBUSH2(*Row+2, *Colom+1);
                        }
                    }break;
                }
            case RIGHT :
                {
                    if ((map[*Row][*Colom+2]==0 or map[*Row][*Colom+2]==3) and (map[*Row+1][*Colom+2]==0 or map[*Row+1][*Colom+2]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row][*Colom+2] == 3 and map[*Row+1][*Colom+2] == 3))
                        {
                            drawBUSH2(*Row, *Colom+2);
                            drawBUSH2(*Row+1, *Colom+2);
                        }
                    }
                    break;
                }
            case LEFT :
                {
                    if ((map[*Row][*Colom-1]==0 or map[*Row][*Colom-1]==3) and (map[*Row+1][*Colom-1]==0 or map[*Row+1][*Colom-1]==3))
                    {
                        REPLACE(&*TANK, &*Horizontal, &*Index);
                        if ((map[*Row][*Colom-1] == 3 and map[*Row+1][*Colom-1] == 3))
                        {
                            drawBUSH2(*Row, *Colom-1);
                            drawBUSH2(*Row+1, *Colom-1);
                        }
                    }break;
                }
            }
        }
    }
}
void MOVETANK(TankControl *TANK, int *countHor, int *countVer, int *Row, int *Colom){

    int turn;
    switch(TANK->KEY)
    {
    case UP :
        {
            turn = 1;
            break;
        }
    case RIGHT :
        {
            turn = 2;
            break;
        }
    case DOWN :
        {
            turn = 3;
            break;
        }
    case LEFT :
        {
            turn = 4;
            break;
        }
    }

    if (TANK->direc != turn)
    {
        rotateTANK(turn, &*TANK);
    }
    else
    {
        DRIVETANK(&*TANK, &*countHor, &*countVer, &*Row, &*Colom);
    }
    //devTANK(turn, *countHor, *countVer, *Row, *Colom, *TANK);
}
void respawnTANK(TankControl *TANK, int Row, int Colom){

    TANK->coorX=(Colom*Item)+20;
    TANK->coorY=(Row*Item)+45;
    drawTANK(*TANK);
}
/*Peluru*//*5*/
void LAUNCHPeluru(PeluruControl *Peluru, TankControl TANK, int *DOOR){

    if (*DOOR == 0)
    {
        PlaySound(TEXT("asset/Sound/tembak.wav"), NULL, SND_ASYNC); //efek suara tembak
        switch(TANK.direc)
        {
            case 1 :
            {
                Peluru->direc = 1;
                Peluru->coorX = TANK.coorX+Item;
                Peluru->coorY = TANK.coorY;
                break;
            }
            case 2 :
            {
                Peluru->direc = 2;
                Peluru->coorX = TANK.coorX+Object-5;
                Peluru->coorY = TANK.coorY+Item;
                break;
            }
            case 3 :
            {
                Peluru->direc = 3;
                Peluru->coorX = TANK.coorX+Item;
                Peluru->coorY = TANK.coorY+24;
                break;
            }
            case 4 :
            {
                Peluru->direc = 4;
                Peluru->coorX = TANK.coorX;
                Peluru->coorY = TANK.coorY+Item;
                break;
            }
        }
    }
    *DOOR = 1;
}
void drawPeluru(PeluruControl Peluru){

    readimagefile("asset/Image/Item/Peluru 5x5.bmp", Peluru.coorX, Peluru.coorY, Peluru.coorX+5, Peluru.coorY+5);
}
void delPeluru(PeluruControl Peluru){

    readimagefile("asset/Image/Item/Del 5x5.bmp", Peluru.coorX, Peluru.coorY, Peluru.coorX+5, Peluru.coorY+5);
}
void goPeluru(PeluruControl *Peluru){

    if (Peluru->direc == 1)
    {
        Peluru->coorY-=SPEED;
    }
    else if (Peluru->direc == 2)
    {
        Peluru->coorX+=SPEED;
    }
    else if (Peluru->direc == 3)
    {
        Peluru->coorY+=SPEED;
    }
    else if (Peluru->direc == 4)
    {
        Peluru->coorX-=SPEED;
    }
}
void replacePeluru(PeluruControl *Peluru){

    delPeluru(*Peluru);
    goPeluru(&*Peluru);
    drawPeluru(*Peluru);
}
/*GAME UTAMA*//*5*/
void choiceLEVEL(){

    TankControl TANK;
    int level = 1;
    //TANK KONDISI AWAL
    TANK.KEY = UP;
    TANK.coorX = 0;
    TANK.coorY = 0;
    TANK.direc = 1;
    TANK.score = 0;
    TANK.life = 3;
    PLAY(level, TANK);
}
void checkLEVEL(ItemControl ITEM, TankControl TANK, int level, int *loop){

    if (ITEM.Brick == 350)
    {
        level+=1;
        *loop=0;
        TANK.KEY = UP;
        TANK.coorX = 0;
        TANK.coorY = 0;
        TANK.direc = 1;
        PLAY(level, TANK);
    }
    else
    {
        *loop=1;
    }

}
void PLAY(int level, TankControl TANK){

    PeluruControl Peluru;
    ItemControl ITEM;
    int loop = 1;

    //KONDISI PETA
    int countHor = 0;
    int countVer = 0;
    int Row = 0;
    int Colom = 0;
    int CrRow = 0;
    int CrColom = 0;
    createMAP(level, &CrRow, &CrColom, &Row, &Colom);
    //ITEM KONDISI AWAL
    ITEM.Brick = 0;
    ITEM.Bush = 0;
    ITEM.Steel = 0;
    ITEM.Water = 0;
    countBOARDITEM(&ITEM);
    //KONDISI PELURU
    int DOOR = 0;
    int countPelHor = 0;
    int countPelVer = 0;
    int RowPel = 0;
    int ColomPel = 0;
    int IndexPel = 0;

    drawMAP(CrRow, CrColom);
    drawBOARD(TANK, ITEM);
    respawnTANK(&TANK, Row, Colom);
    while (loop == 1)
    {
        walkBOARD(&TANK, ITEM);
        checkLEVEL(ITEM, TANK, level, &loop);
        if (kbhit())
        {
            TANK.KEY = getch();
            switch(TANK.KEY)
            {
                case UP :
                {
                    MOVETANK(&TANK, &countHor, &countVer, &Row, &Colom);
                    break;
                }
                case RIGHT :
                {
                    MOVETANK(&TANK, &countHor, &countVer, &Row, &Colom);
                    break;
                }
                case DOWN :
                {
                    MOVETANK(&TANK, &countHor, &countVer, &Row, &Colom);
                    break;
                }
                case LEFT :
                {
                    MOVETANK(&TANK, &countHor, &countVer, &Row, &Colom);
                    break;
                }
                case FIRE :
                {
                    LAUNCHPeluru(&Peluru, TANK, &DOOR);
                    countPelVer = countVer;
                    countPelHor = countHor;
                    break;
                }
                case ESC :
                {
                    loop = 0;
                    fflush(stdin);
                    PAUSE(&loop);
                    break;
                }
            }
        }

        if (DOOR==1)
        {
            ColomPel=Colom;
            RowPel=Row;
            switch(Peluru.direc)
            {
            case 1 :
                {
                    countPelVer-=1;
                    if (countPelVer == 3 or countPelVer == -3)
                    {
                        countPelVer = 0;
                        IndexPel+=1;
                    }
                    if ((map[RowPel-IndexPel][ColomPel] == 0 and map[RowPel-IndexPel][ColomPel+1] == 0) or (map[RowPel-IndexPel][ColomPel] == 3 and map[RowPel-IndexPel][ColomPel+1] == 3) or (map[RowPel-IndexPel][ColomPel] == 4 and map[RowPel-IndexPel][ColomPel+1] == 4))
                    {
                        replacePeluru(&Peluru);
                        if ((map[RowPel-IndexPel][ColomPel] == 4 and map[RowPel-IndexPel][ColomPel+1] == 4))
                        {
                            drawWATER2(RowPel-IndexPel, ColomPel);
                            drawWATER2(RowPel-IndexPel, ColomPel+1);
                        }
                        else if ((map[RowPel-IndexPel][ColomPel] == 3 and map[RowPel-IndexPel][ColomPel+1] == 3))
                        {
                            drawBUSH2(RowPel-IndexPel, ColomPel);
                            drawBUSH2(RowPel-IndexPel, ColomPel+1);
                        }
                    }
                    else if ((map[RowPel-IndexPel][ColomPel] == 1 and map[RowPel-IndexPel][ColomPel+1] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel-IndexPel][ColomPel] = 0;
                        map[RowPel-IndexPel][ColomPel+1] = 0;
                        drawROAD(RowPel-IndexPel, ColomPel);
                        drawROAD(RowPel-IndexPel, ColomPel+1);
                        ITEM.Brick-=2;
                        TANK.score+=10;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel-IndexPel][ColomPel] == 1 and map[RowPel-IndexPel][ColomPel+1] == 0))
                    {
                        delPeluru(Peluru);
                        map[RowPel-IndexPel][ColomPel] = 0;
                        drawROAD(RowPel-IndexPel, ColomPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel-IndexPel][ColomPel] == 0 and map[RowPel-IndexPel][ColomPel+1] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel-IndexPel][ColomPel+1] = 0;
                        drawROAD(RowPel-IndexPel, ColomPel+1);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel-IndexPel][ColomPel] == 1 and map[RowPel-IndexPel][ColomPel+1] == 3))
                    {
                        delPeluru(Peluru);
                        map[RowPel-IndexPel][ColomPel] = 0;
                        drawROAD(RowPel-IndexPel, ColomPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel-IndexPel][ColomPel] == 3 and map[RowPel-IndexPel][ColomPel+1] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel-IndexPel][ColomPel+1] = 0;
                        drawROAD(RowPel-IndexPel, ColomPel+1);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel-IndexPel][ColomPel] == 1 and map[RowPel-IndexPel][ColomPel+1] == 4))
                    {
                        delPeluru(Peluru);
                        map[RowPel-IndexPel][ColomPel] = 0;
                        drawROAD(RowPel-IndexPel, ColomPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel-IndexPel][ColomPel] == 4 and map[RowPel-IndexPel][ColomPel+1] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel-IndexPel][ColomPel+1] = 0;
                        drawROAD(RowPel-IndexPel, ColomPel+1);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel-IndexPel][ColomPel] == 2 and map[RowPel-IndexPel][ColomPel+1] == 2))
                    {
                        delPeluru(Peluru);
                        drawSTEEL2(RowPel-IndexPel, ColomPel);
                        drawSTEEL2(RowPel-IndexPel, ColomPel+1);
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel-IndexPel][ColomPel] == 5 and map[RowPel-IndexPel][ColomPel+1] == 5))
                    {
                        delPeluru(Peluru);
                        loop = 0;
                        fflush(stdin);
                        SAVESCORE(TANK);
                        cleardevice();
                        GAMEOVER();
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    break;
                }
            case 3 :
                {
                    countPelVer+=1;
                    if (countPelVer == 3 or countPelVer == -3)
                    {
                        countPelVer = 0;
                        IndexPel+=1;
                    }
                    if ((map[RowPel+1+IndexPel][ColomPel] == 0 and map[RowPel+1+IndexPel][ColomPel+1] == 0) or (map[RowPel+1+IndexPel][ColomPel] == 3 and map[RowPel+1+IndexPel][ColomPel+1] == 3) or (map[RowPel+1+IndexPel][ColomPel] == 4 and map[RowPel+1+IndexPel][ColomPel+1] == 4))
                    {
                        replacePeluru(&Peluru);
                        if ((map[RowPel+1+IndexPel][ColomPel] == 4 and map[RowPel+1+IndexPel][ColomPel+1] == 4))
                        {
                            drawWATER2(RowPel+1+IndexPel, ColomPel);
                            drawWATER2(RowPel+1+IndexPel, ColomPel+1);
                        }
                        else if ((map[RowPel+1+IndexPel][ColomPel] == 3 and map[RowPel+1+IndexPel][ColomPel+1] == 3))
                        {
                            drawBUSH2(RowPel+1+IndexPel, ColomPel);
                            drawBUSH2(RowPel+1+IndexPel, ColomPel+1);
                        }
                    }
                    else if ((map[RowPel+1+IndexPel][ColomPel] == 1 and map[RowPel+1+IndexPel][ColomPel+1] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1+IndexPel][ColomPel] = 0;
                        map[RowPel+1+IndexPel][ColomPel+1] = 0;
                        drawROAD(RowPel+1+IndexPel, ColomPel);
                        drawROAD(RowPel+1+IndexPel, ColomPel+1);
                        ITEM.Brick-=2;
                        TANK.score+=10;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel+1+IndexPel][ColomPel] == 1 and map[RowPel+1+IndexPel][ColomPel+1] == 0))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1+IndexPel][ColomPel] = 0;
                        drawROAD(RowPel+1+IndexPel, ColomPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel+1+IndexPel][ColomPel] == 0 and map[RowPel+1+IndexPel][ColomPel+1] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1+IndexPel][ColomPel+1] = 0;
                        drawROAD(RowPel+1+IndexPel, ColomPel+1);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel+1+IndexPel][ColomPel] == 1 and map[RowPel+1+IndexPel][ColomPel+1] == 3))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1+IndexPel][ColomPel] = 0;
                        drawROAD(RowPel+1+IndexPel, ColomPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel+1+IndexPel][ColomPel] == 3 and map[RowPel+1+IndexPel][ColomPel+1] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1+IndexPel][ColomPel+1] = 0;
                        drawROAD(RowPel+1+IndexPel, ColomPel+1);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel+1+IndexPel][ColomPel] == 1 and map[RowPel+1+IndexPel][ColomPel+1] == 4))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1+IndexPel][ColomPel] = 0;
                        drawROAD(RowPel+1+IndexPel, ColomPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel+1+IndexPel][ColomPel] == 4 and map[RowPel+1+IndexPel][ColomPel+1] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1+IndexPel][ColomPel+1] = 0;
                        drawROAD(RowPel+1+IndexPel, ColomPel+1);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel+1+IndexPel][ColomPel] == 2 and map[RowPel+1+IndexPel][ColomPel+1] == 2))
                    {
                        delPeluru(Peluru);
                        drawSTEEL2(RowPel+1+IndexPel, ColomPel);
                        drawSTEEL2(RowPel+1+IndexPel, ColomPel+1);
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel+1+IndexPel][ColomPel] == 5 and map[RowPel+1+IndexPel][ColomPel+1] == 5))
                    {
                        delPeluru(Peluru);
                        loop = 0;
                        fflush(stdin);
                        SAVESCORE(TANK);
                        cleardevice();
                        GAMEOVER();
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    break;
                }
                case 2 :
                {
                    countPelHor+=1;
                    if (countPelHor == 3 or countPelHor == -3)
                    {
                        countPelHor = 0;
                        IndexPel+=1;
                    }
                    if ((map[RowPel][ColomPel+1+IndexPel] == 0 and map[RowPel+1][ColomPel+1+IndexPel] == 0) or (map[RowPel][ColomPel+1+IndexPel] == 3 and map[RowPel+1][ColomPel+1+IndexPel] == 3) or (map[RowPel][ColomPel+1+IndexPel] == 4 and map[RowPel+1][ColomPel+1+IndexPel] == 4))
                    {
                        replacePeluru(&Peluru);
                        if ((map[RowPel][ColomPel+1+IndexPel] == 4 and map[RowPel+1][ColomPel+1+IndexPel] == 4))
                        {
                            drawWATER2(RowPel, ColomPel+1+IndexPel);
                            drawWATER2(RowPel+1, ColomPel+1+IndexPel);
                        }
                        else if ((map[RowPel][ColomPel+1+IndexPel] == 3 and map[RowPel+1][ColomPel+1+IndexPel] == 3))
                        {
                            drawBUSH2(RowPel, ColomPel+1+IndexPel);
                            drawBUSH2(RowPel+1, ColomPel+1+IndexPel);
                        }
                    }
                    else if ((map[RowPel][ColomPel+1+IndexPel] == 1 and map[RowPel+1][ColomPel+1+IndexPel] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel][ColomPel+1+IndexPel] = 0;
                        map[RowPel+1][ColomPel+1+IndexPel] = 0;
                        drawROAD(RowPel, ColomPel+1+IndexPel);
                        drawROAD(RowPel+1, ColomPel+1+IndexPel);
                        ITEM.Brick-=2;
                        TANK.score+=10;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel+1+IndexPel] == 1 and map[RowPel+1][ColomPel+1+IndexPel] == 0))
                    {
                        delPeluru(Peluru);
                        map[RowPel][ColomPel+1+IndexPel] = 0;
                        drawROAD(RowPel, ColomPel+1+IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel+1+IndexPel] == 0 and map[RowPel+1][ColomPel+1+IndexPel] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1][ColomPel+1+IndexPel] = 0;
                        drawROAD(RowPel+1, ColomPel+1+IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel+1+IndexPel] == 1 and map[RowPel+1][ColomPel+1+IndexPel] == 3))
                    {
                        delPeluru(Peluru);
                        map[RowPel][ColomPel+1+IndexPel] = 0;
                        drawROAD(RowPel, ColomPel+1+IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel+1+IndexPel] == 3 and map[RowPel+1][ColomPel+1+IndexPel] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1][ColomPel+1+IndexPel] = 0;
                        drawROAD(RowPel+1, ColomPel+1+IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel+1+IndexPel] == 1 and map[RowPel+1][ColomPel+1+IndexPel] == 4))
                    {
                        delPeluru(Peluru);
                        map[RowPel][ColomPel+1+IndexPel] = 0;
                        drawROAD(RowPel, ColomPel+1+IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel+1+IndexPel] == 4 and map[RowPel+1][ColomPel+1+IndexPel] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1][ColomPel+1+IndexPel] = 0;
                        drawROAD(RowPel+1, ColomPel+1+IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel+1+IndexPel] == 2 and map[RowPel+1][ColomPel+1+IndexPel] == 2))
                    {
                        delPeluru(Peluru);
                        drawSTEEL2(RowPel, ColomPel+1+IndexPel);
                        drawSTEEL2(RowPel+1, ColomPel+1+IndexPel);

                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }else if ((map[RowPel][ColomPel+1+IndexPel] == 5 and map[RowPel+1][ColomPel+1+IndexPel] == 5))
                    {
                        delPeluru(Peluru);
                        loop = 0;
                        fflush(stdin);
                        SAVESCORE(TANK);
                        cleardevice();
                        GAMEOVER();
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }break;
                }
                case 4 :
                {
                    countPelHor-=1;
                    if (countPelHor == 3 or countPelHor == -3)
                    {
                        countPelHor = 0;
                        IndexPel+=1;
                    }
                    if ((map[RowPel][ColomPel-IndexPel] == 0 and map[RowPel+1][ColomPel-IndexPel] == 0) or (map[RowPel][ColomPel-IndexPel] == 3 and map[RowPel+1][ColomPel-IndexPel] == 3) or (map[RowPel][ColomPel-IndexPel] == 4 and map[RowPel+1][ColomPel-IndexPel] == 4))
                    {
                        replacePeluru(&Peluru);
                        if ((map[RowPel][ColomPel-IndexPel] == 4 and map[RowPel+1][ColomPel-IndexPel] == 4))
                        {
                            drawWATER2(RowPel, ColomPel-IndexPel);
                            drawWATER2(RowPel+1, ColomPel-IndexPel);
                        }
                        else if ((map[RowPel][ColomPel-IndexPel] == 3 and map[RowPel+1][ColomPel-IndexPel] == 3))
                        {
                            drawBUSH2(RowPel, ColomPel-IndexPel);
                            drawBUSH2(RowPel+1, ColomPel-IndexPel);
                        }
                    }
                    else if ((map[RowPel][ColomPel-IndexPel] == 1 and map[RowPel+1][ColomPel-IndexPel] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel][ColomPel-IndexPel] = 0;
                        map[RowPel+1][ColomPel-IndexPel] = 0;
                        drawROAD(RowPel, ColomPel-IndexPel);
                        drawROAD(RowPel+1, ColomPel-IndexPel);
                        ITEM.Brick-=2;
                        TANK.score+=10;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel-IndexPel] == 1 and map[RowPel+1][ColomPel-IndexPel] == 0))
                    {
                        delPeluru(Peluru);
                        map[RowPel][ColomPel-IndexPel] = 0;
                        drawROAD(RowPel, ColomPel-IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel-IndexPel] == 0 and map[RowPel+1][ColomPel-IndexPel] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1][ColomPel-IndexPel] = 0;
                        drawROAD(RowPel+1, ColomPel-IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel-IndexPel] == 1 and map[RowPel+1][ColomPel-IndexPel] == 3))
                    {
                        delPeluru(Peluru);
                        map[RowPel][ColomPel-IndexPel] = 0;
                        drawROAD(RowPel, ColomPel-IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel-IndexPel] == 3 and map[RowPel+1][ColomPel-IndexPel] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1][ColomPel-IndexPel] = 0;
                        drawROAD(RowPel+1, ColomPel-IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel-IndexPel] == 1 and map[RowPel+1][ColomPel-IndexPel] == 4))
                    {
                        delPeluru(Peluru);
                        map[RowPel][ColomPel-IndexPel] = 0;
                        drawROAD(RowPel, ColomPel-IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel-IndexPel] == 4 and map[RowPel+1][ColomPel-IndexPel] == 1))
                    {
                        delPeluru(Peluru);
                        map[RowPel+1][ColomPel-IndexPel] = 0;
                        drawROAD(RowPel+1, ColomPel-IndexPel);
                        ITEM.Brick-=1;
                        TANK.score+=5;
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel-IndexPel] == 2 and map[RowPel+1][ColomPel-IndexPel] == 2))
                    {
                        delPeluru(Peluru);
                        drawSTEEL2(RowPel, ColomPel-IndexPel);
                        drawSTEEL2(RowPel+1, ColomPel-IndexPel);
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }
                    else if ((map[RowPel][ColomPel-IndexPel] == 5 and map[RowPel+1][ColomPel-IndexPel] == 5))
                    {
                        delPeluru(Peluru);
                        loop = 0;
                        fflush(stdin);
                        SAVESCORE(TANK);
                        cleardevice();
                        GAMEOVER();
                        DOOR = 0;
                        countPelVer = 0;
                        countPelHor = 0;
                        IndexPel = 0;
                        break;
                    }break;
                }
            }
        }
    delay(SPEED);
    }
}
void PAUSE(int *loop){

    int KEY;
    int choice = 1;
    readimagefile("asset/Image/Button/STATUSPAUSE.bmp", 560, 420, 780, 470);
    readimagefile("asset/Image/Button/CHOOSERESUME.bmp", 560, 490, 620, 520);
    readimagefile("asset/Image/Button/REPLAY.bmp", 645, 490, 705, 520);
    readimagefile("asset/Image/Button/EXIT.bmp", 730, 490, 780, 520);
    while (*loop == 0)
    {
       if (kbhit())
        {
            KEY = getch();
            switch(KEY)
            {
            case LEFT :
                {
                    choice-=1;
                    if (choice == 0)
                    {
                        choice = 3;
                    }
                    switch(choice)
                    {
                    case 1 :
                        {
                            PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC);
                            readimagefile("asset/Image/Button/REPLAY.bmp", 645, 490, 705, 520);
                            readimagefile("asset/Image/Button/CHOOSERESUME.bmp", 560, 490, 620, 520);
                            break;
                        }
                    case 2 :
                        {
                            PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC);
                            readimagefile("asset/Image/Button/EXIT.bmp", 730, 490, 780, 520);
                            readimagefile("asset/Image/Button/CHOOSEREPLAY.bmp", 645, 490, 705, 520);
                            break;
                        }
                    case 3 :
                        {
                            PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC);
                            readimagefile("asset/Image/Button/RESUME.bmp", 560, 490, 620, 520);
                            readimagefile("asset/Image/Button/CHOOSEEXIT.bmp", 730, 490, 780, 520);
                            break;
                        }
                    }
                    break;
                }
            case RIGHT :
                {
                    choice+=1;
                    if (choice == 4)
                    {
                        choice = 1;
                    }
                    switch(choice)
                    {
                    case 1 :
                        {
                            PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC);
                            readimagefile("asset/Image/Button/EXIT.bmp", 730, 490, 780, 520);
                            readimagefile("asset/Image/Button/CHOOSERESUME.bmp", 560, 490, 620, 520);
                            break;
                        }
                    case 2 :
                        {
                            PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC);
                            readimagefile("asset/Image/Button/RESUME.bmp", 560, 490, 620, 520);
                            readimagefile("asset/Image/Button/CHOOSEREPLAY.bmp", 645, 490, 705, 520);
                            break;
                        }
                    case 3 :
                        {
                            PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC);
                            readimagefile("asset/Image/Button/REPLAY.bmp", 645, 490, 705, 520);
                            readimagefile("asset/Image/Button/CHOOSEEXIT.bmp", 730, 490, 780, 520);
                            break;
                        }
                    }
                    break;
                }
            case ENTER :
                {
                    PlaySound(TEXT("asset/Sound/select.wav"), NULL, SND_ASYNC);
                    switch(choice)
                    {
                    case 1 :
                        {
                            *loop = 1;
                            readimagefile("asset/Image/Button/STATUSPLAY.bmp", 560, 420, 780, 470);
                            readimagefile("asset/Image/Button/REPLACEPAUSE.bmp", 560, 490, 780, 550);
                            fflush(stdin);
                            break;
                        }
                    case 2 :
                        {
                            *loop = 0;
                            fflush(stdin);
                            cleardevice();
                            choiceLEVEL();
                            break;
                        }
                    case 3 :
                        {
                           *loop = 0;
                            fflush(stdin);
                            cleardevice();
                            OPEN();
                        }
                    }
                    break;
                }
            }
        }
    }
}
void GAMEOVER(){

    PlaySound(TEXT("asset/Sound/gameover.wav"), NULL, SND_ASYNC);
    readimagefile("asset/Image/GAME OVER.bmp", 100, 100, 700, 300);
    //BUTTON
    readimagefile("asset/Image/Button/CHOOSEREPLAY.bmp", 330, 300, 390, 330);
    readimagefile("asset/Image/Button/EXIT.bmp", 410, 300, 460, 330);
    int choice = 1;
    int KEY;
    while (true)
    {
        if (kbhit())
        {
            KEY = getch();
            switch (KEY)
            {
                case LEFT :
                    {
                        choice-=1;
                        if (choice == 0)
                        {
                            choice = 2;
                        }
                        switch (choice)
                        {
                        case 1 :
                            {
                                readimagefile("asset/Image/Button/EXIT.bmp", 410, 300, 460, 330);
                                readimagefile("asset/Image/Button/CHOOSEREPLAY.bmp", 330, 300, 390, 330);
                                break;
                            }
                        case 2 :
                            {
                                readimagefile("asset/Image/Button/REPLAY.bmp", 330, 300, 390, 330);
                                readimagefile("asset/Image/Button/CHOOSEEXIT.bmp", 410, 300, 460, 330);
                                break;
                            }
                        }
                        break;
                    }
                case RIGHT :
                    {
                        choice+=1;
                        if (choice == 3)
                        {
                            choice = 1;
                        }
                        switch (choice)
                        {
                        case 2 :
                            {
                                readimagefile("asset/Image/Button/REPLAY.bmp", 330, 300, 390, 330);
                                readimagefile("asset/Image/Button/CHOOSEEXIT.bmp", 410, 300, 460, 330);
                                break;
                            }
                        case 1 :
                            {

                                readimagefile("asset/Image/Button/EXIT.bmp", 410, 300, 460, 330);
                                readimagefile("asset/Image/Button/CHOOSEREPLAY.bmp", 330, 300, 390, 330);
                                break;
                            }
                        }
                        break;
                    }
                case ENTER :
                    {
                        switch (choice)
                        {
                        case 1 :
                            {
                                fflush(stdin);
                                cleardevice();
                                choiceLEVEL();
                                break;
                            }
                        case 2 :
                            {
                                fflush(stdin);
                                cleardevice();
                                OPEN();
                                break;
                            }
                        }
                        break;
                    }
            }
        }
    }
}
/*OPERASI FILE*//*2*/
void SAVESCORE(TankControl TANK){

	FILE *SCORE;

	if ((SCORE=fopen("asset/File/Score.dat", "ab+")) == NULL)
	{
		outtextxy(250, 300, "File tidak dapat dibuka");
	}
    fflush(stdin);
    fprintf(SCORE, " %d", TANK.score);
	fclose(SCORE);
}
void SORTSCORE(){/*MASIH GAGAL...*/

    FILE *SCORE;
	long i=0, j;
	TankControl Tank, Temp;

	if ((SCORE=fopen("asset/File/Score.dat", "rb+")) == NULL)
	{
		outtextxy(250, 300, "File tidak dapat dibuka");
	}

	while (!feof(SCORE))
	{
		fseek(SCORE, (i*(sizeof(TankControl)+1))+i, SEEK_SET);
		fscanf(SCORE, "%d", &Tank.score);
		j = i;
		while (!feof(SCORE))
		{
			j++;
			fseek(SCORE, (j*(sizeof(TankControl)+1))+i, SEEK_SET);
			fscanf(SCORE, "%d", &Tank.score);
			if (Tank.score > Temp.score)
			{
				fseek(SCORE, j*(sizeof(TankControl)+1)+i, SEEK_SET);
				fprintf(SCORE, "%d", Temp.score);
				fseek(SCORE, j*(sizeof(TankControl)+1)+j, SEEK_SET);
				fprintf(SCORE, "%d", Tank.score);

				Tank.score = Temp.score;
			}
		}
		if (i<j)
		{
			fseek(SCORE, 0, SEEK_SET);
			i++;
		}
	}
	fclose(SCORE);
}
/*User Interface*//*5*/
void INTRO(){
    int KEY;

    readimagefile("asset/image/Logo/awal.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(1000);//0,02detik
    //loading();
    readimagefile("asset/image/Logo/awal2.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal3.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal4.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal5.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal6.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal7.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal8.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal9.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal10.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal11.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal12.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal13.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal14.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal15.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal16.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal17.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal18.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal19.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal20.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal21.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal22.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal23.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal24.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal25.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal26.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal27.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal28.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal29.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal30.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal31.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal32.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal33.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal34.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal35.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal36.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal37.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal38.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal39.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal40.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal41.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal42.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal43.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal44.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal45.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal46.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal47.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal48.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal49.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal50.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    delay(20); //0,02detik
    readimagefile("asset/image/Logo/awal51.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    PlaySound(TEXT("asset/Sound/Menu Utama.wav"), NULL, SND_ASYNC|| SND_LOOP); //efek suaras

    outtextxy(295,500,"( PRESS ENTER TO CONTINUE )"); //x,y,karakterstring
    while(true)
    {
        if (kbhit())
        {
            KEY = getch(); //input
            if (KEY == ENTER)
            {
                PlaySound(TEXT("asset/Sound/select.wav"), NULL, SND_ASYNC); //efek suara
                fflush(stdin); //agar tidak terjadi penuhnya input buffer
                cleardevice(); //menghapus
                OPEN();
            }
        }
    }
}
void OPEN(){

    readimagefile("asset/Image/LOGO1.bmp", 250, 50, 550, 250); //kiri, atas, kanan,bawah
    //BUTTON
    readimagefile("asset/Image/Button/CHOOSEPLAY.bmp", 375, 300, 425, 330); //kiri, atas, kanan,bawah
    readimagefile("asset/Image/Button/HOWTOPLAY.bmp", 345, 340, 455, 370); //kiri, atas, kanan,bawah
    readimagefile("asset/Image/Button/HIGHSCORE.bmp", 345, 380, 455, 410); //kiri, atas, kanan,bawah
    readimagefile("asset/Image/Button/EXIT.bmp", 375, 420, 425, 450); //kiri, atas, kanan,bawah
    int choice = 1;
    int KEY;

    while (true)
    {
        if (kbhit()) //baca keyboard
        {
            KEY = getch(); //baca input keyboard di masukkan ke key
            switch (KEY)
            {
                case UP :
                    {
                        choice-=1; //choice dikuranng 1
                        if (choice == 0)
                        {
                            choice = 4;
                        }
                        switch (choice)
                        {
                        case 1 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/HOWTOPLAY.bmp", 345, 340, 455, 370); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSEPLAY.bmp", 375, 300, 425, 330); //kiri, atas, kanan,bawah
                                break;
                            }
                        case 2 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/HIGHSCORE.bmp", 345, 380, 455, 410); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSEHOWTOPLAY.bmp", 345, 340, 455, 370); //kiri, atas, kanan,bawah
                                break;
                            }
                        case 3 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/EXIT.bmp", 375, 420, 425, 450); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSEHIGHSCORE.bmp", 345, 380, 455, 410); //kiri, atas, kanan,bawah
                                break;
                            }
                        case 4 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/PLAY.bmp", 375, 300, 425, 330); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSEEXIT.bmp", 375, 420, 425, 450); //kiri, atas, kanan,bawah
                                break;
                            }
                        }
                        break;
                    }
                case DOWN :
                    {
                        choice+=1; //choice ditambah 1
                        if (choice == 5)
                        {
                            choice = 1;
                        }
                        switch (choice)
                        {
                        case 1 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/EXIT.bmp", 375, 420, 425, 450); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSEPLAY.bmp", 375, 300, 425, 330); //kiri, atas, kanan,bawah
                                break;
                            }
                        case 2 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/PLAY.bmp", 375, 300, 425, 330); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSEHOWTOPLAY.bmp", 345, 340, 455, 370); //kiri, atas, kanan,bawah
                                break;
                            }
                        case 3 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/HOWTOPLAY.bmp", 345, 340, 455, 370); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSEHIGHSCORE.bmp", 345, 380, 455, 410); //kiri, atas, kanan,bawah
                                break;
                            }
                        case 4 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/HIGHSCORE.bmp", 345, 380, 455, 410); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSEEXIT.bmp", 375, 420, 425, 450); //kiri, atas, kanan,bawah
                                break;
                            }
                        }
                        break;
                    }
                case ENTER :
                    {
                        PlaySound(TEXT("asset/Sound/select.wav"), NULL, SND_ASYNC); //efek suara
                        switch (choice)
                        {
                        case 1 :
                            {
                                fflush(stdin); //menghapus input key
                                cleardevice(); //menghapus tampilan sebelumnya
                                choiceLEVEL(); //memanggil modul Play
                                break;
                            }
                        case 2 :
                            {
                                fflush(stdin); //menghapus input key
                                cleardevice(); //menghapus tampilan sebelumnya
                                HOWTOPLAY(); //memanggil modul How To Play
                                break;
                            }
                        case 3 :
                            {
                                fflush(stdin); //menghapus input key
                                cleardevice(); //menghapus tampilan sebelumnya
                                HIGHSCORE(); //memanggil modul Open
                                break;
                            }
                        case 4 :
                            {
                                fflush(stdin); //menghapus input key
                                cleardevice(); //menghapus tampilan sebelumnya
                                EXITGAME(); //memanggil modul Exit Game
                                break;
                            }
                        }
                        break;
                    }
            }
        }
    }
}
void HOWTOPLAY(){

    int KEY;
    int choice = 1;
    readimagefile("asset/Image/RULES OF GAME.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
    while (true)
    {
       if (kbhit()) //baca keyboard
        {
            KEY = getch();
            if (KEY == ENTER)
            {
                PlaySound(TEXT("asset/Sound/select.wav"), NULL, SND_ASYNC); //efek suara
                switch(choice)
                {
                case 1 :
                    {
                        cleardevice();
                        readimagefile("asset/Image/CONTROL.bmp", 0, 0, 800, 600); //kiri, atas, kanan,bawah
                        choice+=1;
                        break;
                    }
                case 2 :
                    {
                        fflush(stdin); //menghapus input key
                        cleardevice(); //menghapus tampilan sebelumnya
                        OPEN(); //memanggil modul open
                        break;
                    }

                }
            }
        }
    }
}
void HIGHSCORE(){

    int KEY;
    TankControl TANK;
	FILE *SCORE;
    readimagefile("asset/Image/LOGO1.bmp", 250, 50, 550, 250);
    char msg[100];
	int Enter = 0, i=1;

    if ((SCORE=fopen("asset/File/SCORE.dat", "rb")) == NULL)
	{
		outtextxy(250, 300, "File tidak dapat dibuka");
	}
	if(!feof(SCORE))
	{
		for (i=1; i<6; i++)
        {
            fscanf(SCORE, " %d", &TANK.score);
            sprintf(msg, "%d. %d", i, TANK.score);
            outtextxy(300, 300+Enter, msg);
            Enter+=Item;
        }
	}
	fclose(SCORE);
    while (true)
    {
       if (kbhit())
        {
            KEY = getch();
            if (KEY == ENTER)
            {
                fflush(stdin);
                cleardevice();
                OPEN();
            }
        }
    }
}
void EXITGAME(){

    int choice = 1;
    int KEY;
    outtextxy(340, 300, "( ARE YOU SURE ? )"); //x,y,texr
    readimagefile("asset/Image/Button/CHOOSENO.bmp", 350, 350, 400, 380); //kiri, atas, kanan,bawah
    readimagefile("asset/Image/Button/YES.bmp", 410, 350, 460, 380); //kiri, atas, kanan,bawah

    while (true)
    {
        if (kbhit()) //membaca keyboard
        {
            KEY = getch();
            switch (KEY)
            {
                case LEFT :
                    {
                        choice-=1;
                        if (choice == 0)
                        {
                            choice = 2;
                        }
                        switch (choice)
                        {
                        case 1 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/YES.bmp", 410, 350, 460, 380); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSENO.bmp", 350, 350, 400, 380); //kiri, atas, kanan,bawah
                                break;
                            }
                        case 2 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/CHOOSEYES.bmp", 410, 350, 460, 380); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/NO.bmp", 350, 350, 400, 380); //kiri, atas, kanan,bawah
                                break;
                            }
                        }
                        break;
                    }
                case RIGHT :
                    {
                        choice+=1;
                        if (choice == 3)
                        {
                            choice = 1;
                        }
                        switch (choice)
                        {
                        case 1 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/YES.bmp", 410, 350, 460, 380); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSENO.bmp", 350, 350, 400, 380); //kiri, atas, kanan,bawah
                                break;
                            }
                        case 2 :
                            {
                                PlaySound(TEXT("asset/Sound/pilih.wav"), NULL, SND_ASYNC); //efek suara
                                readimagefile("asset/Image/Button/NO.bmp", 350, 350, 400, 380); //kiri, atas, kanan,bawah
                                readimagefile("asset/Image/Button/CHOOSEYES.bmp", 410, 350, 460, 380); //kiri, atas, kanan,bawah
                                break;
                            }
                        }
                        break;
                    }
                case ENTER :
                    {
                        PlaySound(TEXT("asset/Sound/select.wav"), NULL, SND_ASYNC); //efek suara
                        switch (choice)
                        {
                        case 1 :
                            {
                                fflush(stdin); //menghapus input key
                                cleardevice(); //menghapus tampilan
                                OPEN(); //memanggil modul open
                                break;
                            }
                        case 2 :
                            {
                                cleardevice(); //menghapus tampilan
                                exit(0); //keluar dari tampilan
                                break;
                            }
                        }
                        break;
                    }
            }
        }
    }
}
