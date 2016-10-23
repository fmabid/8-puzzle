#include"iGraphics.h"

int pos[10];
int posX[10];
int posY[10];

void iDraw()
{
	iClear();
	iSetColor(235,235,235);
	iFilledRectangle(0,0,900,700);

	iSetColor(169,169,169);
	iFilledRectangle(120,150,388,388);

	iSetColor(13,59,149);
	iLine(120, 150, 508,150);
	iLine(120,150,120,538);
	iLine(119,538,508,538);
	iLine(508,150,508,538);

	iShowBMP(120,151,"Num1.bmp");
	iShowBMP(120,280,"Num-6.bmp");
	iShowBMP(249,151,"Num-2.bmp");
	iShowBMP(249,280,"Num-3.bmp");
	iShowBMP(378,151,"Num-7.bmp");
	iShowBMP(378,280,"Num-5.bmp");
	iShowBMP(378,409,"Num-4.bmp");
	iShowBMP(120,409,"Num-8.bmp");
	//iLine(120,280,508,280);
	//iShowBMP(0,0,"FreeVector-Jigsaw-Puzzle.bmp");
}

void iMouseMove(int mx, int my)
{
	 
}

void iMouse(int button,int state,int mx,int my)
{
	printf("%d %d\n",mx,my);

}

void iKeyboard(unsigned char key)
{

}

void iSpecialKeyboard(unsigned char key)
{

}

int main()
{
	
	//iInitialize(900,700,"MENU");
	iInitialize(900,700,"PUZZLE");

	return 0;
}