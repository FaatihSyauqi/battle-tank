#ifndef Tank_h
#define Tank_h

/*Defenisi Library*/
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>

/*Defenisi Control Key*/
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define FIRE 32
#define ENTER 13
#define ESC 27

/*Defenisi Kondisi TANK*/
#define SPEED 5

/*Defenisi Size*/
#define Object 29
#define Item 15
#pragma GCC diagnostic ignored "-Wwrite-strings"

/*Defenisi TankPosition*/
/*Struck yang digunakan oleh TANK untuk pengkondisian TANK*/
typedef struct{
int Row;
int Colom;
int countHor;
int countVer;
}TankPosition;
/*Defenisi TankControl*/
/*Struck yang digunakan oleh TANK untuk pengkondisian TANK*/
typedef struct{
int KEY;
int coorX;
int coorY;
int direc;
int score;
int life;
TankPosition *Pos;
}TankControl;
/*Defenisi ItemControl*/
/*Struck yang digunakan untuk menghitung dan mengetahui jumlah Item pada Array MAP*/
typedef struct{
int Brick;
int Steel;
int Bush;
int Water;
}ItemControl;
/*Defenisi PeluruControl*/
/*Struck yang digunakan oleh Peluru untuk pengkondisian Peluru*/
typedef struct{
int coorX;
int coorY;
int direc;
}PeluruControl;

/****** Modul PETA *******/

void drawBRICK(int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Item Brick belum ditampilkan */
/*FS : Item Brick telah ditampilkan sesuai Row dan Colom pada MAP */

void drawSTEEL(int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Item Steel belum ditampilkan */
/*FS : Item Steel telah ditampilkan sesuai Row dan Colom pada MAP */

void drawSTEEL2(int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Item Steel pada MAP setelah tertembak belum ditampilkan */
/*FS : Item Steel telah ditampilkan sesuai Row dan Colom pada MAP */

void drawBUSH(int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Item Bush belum ditampilkan */
/*FS : Item Bush telah ditampilkan sesuai Row dan Colom pada MAP */

void drawBUSH2(int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Item Steel pada MAP setelah tertembak belum ditampilkan */
/*FS : Item Steel telah ditampilkan sesuai Row dan Colom pada MAP */

void drawWATER(int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Item Water belum ditampilkan */
/*FS : Item Water telah ditampilkan sesuai Row dan Colom pada MAP */

void drawWATER2(int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Item Water pada MAP setelah tertembak belum ditampilkan */
/*FS : Item Water telah ditampilkan sesuai Row dan Colom pada MAP */

void drawROAD(int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Item Road belum ditampilkan */
/*FS : Item Road telah ditampilkan sesuai Row dan Colom pada MAP */

void drawCROWN(int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Item Crown belum ditampilkan */
/*FS : Item Crown telah ditampilkan sesuai Row dan Colom pada MAP */

void createMAP(int level, int *CrRow, int *CrColom, int *Row, int *Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*IS : Nilai index Array MAP sembarang */
/*FS : Nilai index Array MAP telah diisi oleh Nilai tertentu*/

void drawMAP(int CrRow, int CrColom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*IS : MAP belum ditampilkan */
/*FS : MAP telah ditampilkan sesuai Row dan Colom pada MAP */

/****** Modul PAPAN NILAI *******/

void drawBOARDITEM(ItemControl ITEM);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Struck ITEM : Parameter by Value*/
/*IS : Item pada Papan Nilai belum ditampilkan*/
/*FS : Item pada Papan Nilai telah ditambilkan*/

void countBOARDITEM(ItemControl *ITEM);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Struck ITEM : Parameter by Address*/
/*IS : Jumlah Item pada Array MAP belum diketahui*/
/*FS : Jumlah item pada Array MAP telah diketahui*/
/*Menghitung jumlah item pada Array MAP*/

void drawBOARDENEMY();
/*Pembuat : MUGHIE ARIEF M.S*/
/*Belum Terpakai*/
/*IS : Item Enemy pada Papan Nilai belum ditampilkan*/
/*FS : Item Enemy pada Papan Nilai telah ditambilkan*/

void drawBOARDLIFE(TankControl TANK);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Struck TANK : Parameter by Value*/
/*IS : Item Life pada Papan Nilai belum ditampilkan*/
/*FS : Item Life pada Papan Nilai telah ditampilkan*/

void drawBOARDSCORE(TankControl TANK);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Struck TANK : Parameter by Value*/
/*IS : Score pada Papan Nilai belum ditampilkan*/
/*FS : Score pada Papan Nilai telah ditampilkan*/

void countLIFE(TankControl *TANK);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Pembuat : NOVILAWATI*/
/*Struck TANK : Parameter by Address*/
/*IS : Jumlah LIFE masih sembarang*/
/*FS : Jumlah LIFE telah bertambah*/
/*Menambahkan LIFE sesuai dengan score yang diperoleh*/

void drawBOARD(TankControl TANK, ItemControl ITEM);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Struck TANK : Parameter by Value*/
/*Struck ITEM : Parameter by Value*/
/*IS : Papan Nilai belum ditampilkan*/
/*FS : Papan Nilai telah ditampilkan*/

void walkBOARD(TankControl *TANK, ItemControl ITEM);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Struck TANK : Parameter by Address*/
/*Struck ITEM : Parameter by Value*/
/*IS : Nilai pada Papan Nilai sembarang*/
/*FS : Nilai pada Papan Nilai telah sesuai dengan keadaan Permainan*/
/*Menampilkan Score, Menghitung LIFE, Menampilkan LIFE, dan Menampilkan Item pada Papan nilai*/

/****** Modul Check Kondisi ******/

void devTANK(int turn, int countHor, int countVer, int Row, int Colom, TankControl TANK);
/*Pembuat : MUGHIE ARIEF M.S*/
/* int turn, countHor, countVer, Row, Colom : Parameter by Value*/
/* STRUCT TANK : Parameter by Value*/
/* IS : Belum menampilkan kondisi-kondisinya*/
/* FS : Menampilkan kondisi - kondisinya*/
/* Menampilkan turn, countHor, countVer, Row, Colom, dan STRUCT TANK */

void devPeluru(PeluruControl Peluru, int countHorpel, int countVerpel, int Row, int Colom, int DOOR);
/*Pembuat : MUGHIE ARIEF M.S*/
/* int countHorpel, countVerpel, Row, Colom, DOOR : Parameter by Value*/
/* STRUCT Peluru : Parameter by Value*/
/* IS : Belum menampilkan kondisi-kondisinya*/
/* FS : Menampilkan kondisi - kondisinya*/
/* Menampilkan countHorpel, countVerpel, Row, Colom, DOOR, dan STRUCT Peluru */

void devMAP(int x, int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*x     : Parameter by Value*/
/*Row   : Parameter by Value*/
/*Colom : Parameter by Value*/
/*IS : Nilai index pada Row dan Colom belum diketahui */
/*FS : Menampilkan index pada Row dan Colom di MAP */

/****** Modul TANK *******/

void goTANK(TankControl *TANK);
/*Pembuat : KARTIKA SARI*/
/* STRUCT TANK : Parameter by Address*/
/* IS : Posisi tank di koordinat tertentu*/
/* FS : Posisi tank berubah sesuai dengan arah yang ditentukan sebanyak SPEED*/

void delTANK(TankControl TANK);
/*Pembuat : KARTIKA SARI*/
/* STRUCT TANK : Parameter by Value */
/* IS : Tank belum tehapus */
/* FS : Tank telah terhapus */

void drawTANK(TankControl TANK);
/*Pembuat : KARTIKA SARI*/
/* STRUCT TANK : Parameter by Value */
/* IS : Tank belum ditampilkan */
/* FS : Menampilkan tank sesuai arahnya */

void rotateTANK(int turn, TankControl *TANK);
/*Pembuat : KARTIKA SARI*/
/*Pembuat : MUGHIE ARIEF M.S*/
/* STRUCT TANK : Parameter by Address */
/* int turn : Parameter by Value */
/* IS : Menampilkan arah tank yang tidak sesuai TANK.direct */
/* FS : Menampilkan arah tank yang sesuai TANK.direct */

void condiDRIVE(TankControl TANK, int *Count, int *Index);
/*Pembuat : MUGHIE ARIEF M.S*/
/* STRUCT TANK : Parameter by Value */
/* int Count, Index : Parameter by Address */
/* IS : Index sembarang */
/* FS : Index ditambah 1 */
/* Mengubah index Row atauColom pada kondisi tank */

void countDRIVE(TankControl TANK, int *Count, int *Index);
/*Pembuat : MUGHIE ARIEF M.S*/
/* STRUCT TANK : Parameter by Value */
/* int Count, Index : Parameter by Address */
/* IS : Count sembarang */
/* FS : Count ditambah 1 */
/* Menghitung perubahan kondisi tank pada Array MAP */

void REPLACE(TankControl *TANK, int *Count, int *Index);
/*Pembuat : KARTIKA SARI*/
/* STRUCT TANK : Parameter by Address */
/* int Count, Index : Parameter by Address */
/* IS : Menampilkan posisi tank di koordinat yang lama */
/* FS : Menghapus tank di posisi yang lama dan menampilkan tank di posisi baru */

void DRIVETANK(TankControl *TANK, int *countVer, int *countHor, int *Row, int *Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Pembuat : NOVILAWATI*/
/* STRUCT TANK : Parameter by Address */
/* int countVer, countHor, Row, Colom : Parameter by Address */
/* IS : Kondisi tank pada Array MAP sembarang */
/* FS : Mengetahui kondisi tank pada Array MAP */
/* Mengecek kondisi tank pada Array MAP */

void MOVETANK(TankControl *TANK, int *countHor, int *countVer, int *Row, int *Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/* STRUCT TANK : Parameter by Address */
/* int countHor, countVer, Row, Colom : Parameter by Address */
/* IS : Arah tank sembarang */
/* FS : Arah tank sesuai */

void respawnTANK(TankControl *TANK, int Row, int Colom);
/*Pembuat : MUGHIE ARIEF M.S*/
/* STRUCT TANK : Parameter by Address */
/* int Row, Colom : Parameter by Value */
/* IS : Tank belum ditampilkan */
/* FS : Tank telah ditampilkan */

/******* Modul Peluru ********/

void LAUNCHPeluru(PeluruControl *Peluru, TankControl TANK, int *DOOR);
/*Pembuat : AGIT PRASETYA*/
/* STRUCT Peluru : Parameter by Address */
/* STRUCT TANK : Parameter by Value */
/* int DOOR : Parameter by Address */
/* IS : Arah tembakan dan koordinat posisi awal peluru belum ditentukan, DOOR bernilai 0 */
/* FS : Arah tembakan dan koordinat posisi awal peluru sudah ditentukan, DOOR bernilai 1 */

void drawPeluru(PeluruControl Peluru);
/*Pembuat : AGIT PRASETYA*/
/* STRUCT Peluru : Parameter by Value */
/* IS : Peluru belum ditampilkan */
/* FS : Menampilkan Peluru */

void delPeluru(PeluruControl Peluru);
/*Pembuat : AGIT PRASETYA*/
/* STRUCT Peluru : Parameter by Value */
/* IS : Peluru belum terhapus */
/* FS : Peluru telah terhapus */

void goPeluru(PeluruControl *Peluru);
/*Pembuat : AGIT PRASETYA*/
/* STRUCT Peluru : Parameter by Address*/
/* IS : Posisi peluru di koordinat tertentu*/
/* FS : Posisi peluru berubah sesuai dengan arah yang ditentukan sebanyak SPEED*/

void replacePeluru(PeluruControl *Peluru);
/*Pembuat : AGIT PRASETYA*/
/* STRUCT Peluru : Parameter by Address */
/* IS : Peluru masih ada di koordinat lama */
/* FS : Menghapus peluru di koordinat lama dan menampilkan peluru di koordinat baru*/

/***************************/
/******* GAME UTAMA ********/
/***************************/

void choiceLEVEL();
/*Pembuat : MUGHIE ARIEF M.S*/
/*IS : Level permainan sembarang*/
/*FS : Level permainan adalah level 1*/

void checkLEVEL(ItemControl ITEM, TankControl TANK, int level, int *loop);
/*Pembuat : MUGHIE ARIEF M.S*/
/*IS : Level permainan sembarang*/
/*FS : Level permainan sesuai dengan score, life, dan item yeng telah ditentukan*/

void PLAY(int level, TankControl TANK);
/*Pembuat : MUGHIE ARIEF M.S*/
/*Pembuat : NOVILAWATI*/
/*Pembuat : AGIT PRASETYA*/
/*IS : Permainan belum dijalankan*/
/*FS : Permainan telah dijalankan*/

void PAUSE(int *loop);
/*Pembuat : MUGHIE ARIEF M.S*/
/*IS : Permainan sedang dijalankan*/
/*FS : Permainan berhenti berjalan*/

void GAMEOVER();
/*Pembuat : M. FAATIH SYAUQI*/
/*IS : Belum menampilkan layar Game Over*/
/*FS : Menampilkan layar Game Over*/

/******* OPERASI FILE ********/

void SAVESCORE(TankControl TANK);
/*Pembuat : MUGHIE ARIEF M.S*/
/*IS : nilai Score belum disimpan pada file*/
/*FS : nilai Score telah disimpan pada file*/

void SORTSCORE();
/*Pembuat : MUGHIE ARIEF M.S*/
/*IS : nilai Score sembarang*/
/*FS : nilai Score telah disort*/

/******* USER INTERFACE ********/

void INTRO();
/*Pembuat : M. FAATIH SYAUQI*/
/*IS : Belum menampilkan layar Intro*/
/*FS : Menampilkan layar Intro*/

void OPEN();
/*Pembuat : M. FAATIH SYAUQI*/
/*IS : Menu utama belum ditampilkan*/
/*FS : Menampilkan menu utama*/

void HOWTOPLAY();
/*Pembuat : M. FAATIH SYAUQI*/
/*Pembuat : NOVILAWATI*/
/*IS : Belum menampilkan layar How to Play dan Control*/
/*FS : Menampilkan layar How to Play dan Control*/

void HIGHSCORE();
/*Pembuat : M. FAATIH SYAUQI*/
/*Pembuat : MUGHIE ARIEF M.S*/
/*IS : Belum menampilkan layar High Score*/
/*FS : Menampilkan layar High Score*/

void EXITGAME();
/*Pembuat : M. FAATIH SYAUQI*/
/*IS : Program masih dijalankan*/
/*FS : Program di close*/

#endif // Tank_h
