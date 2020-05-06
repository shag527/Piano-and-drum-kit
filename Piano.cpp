#include<graphics.h>
#include<Windows.h>
#include<conio.h>
#include<bits/stdc++.h>
#include<dos.h>
using namespace std;
void beat(int ,int);
void flood(int ,int ,int ,int);
void piano(int ,int);
void drum(int ,int);
int main()
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"");
	int x=getmaxx();
    int y=getmaxy();
    setfillstyle(11,9);
	bar(0,0,x,y);
    piano(x,y);
    drum(x,y);
    beat(x,y);
	getch();
	closegraph();
	return 0;
}
void flood(int x,int y, int color_fill, int color)
{
    if(getpixel(x,y)==color)
    {
        delay(1);
        putpixel(x,y,color_fill);
        flood(x+1,y,color_fill,color);
        flood(x,y-1,color_fill,color);
        flood(x-1,y,color_fill,color);
        flood(x,y+1,color_fill,color);
    }
}
void piano(int x,int y)
{
	//setfillstyle(11,9);
	//bar(0,0,x,y);
	drum(x,y);                                                    //background
	setfillstyle(1,7);
	bar(10,y/3+20+(2*y/3-40)/6,x/2+15,y-30-(2*y/3-40)/6);               //piano body
	setcolor(MAGENTA);
	line(35-(x/2-85)/10,y/3+20+(2*y/3-40)/6+15,x/2+15,y/3+20+(2*y/3-40)/6+15);           //piano lines
	line(35-(x/2-85)/10,y/3+20+(2*y/3-40)/6+20,x/2+15,y/3+20+(2*y/3-40)/6+20);

	setfillstyle(1,15);
	bar(35-(x/2-85)/10,y/3+20+(2*y/3-40)/6+90,35,y/3+20+(2*y/3-40)/6+150);
	bar(45,y/3+20+(2*y/3-40)/6+90,35+(x/2-85)/10+10,y/3+20+(2*y/3-40)/6+150);
	bar(45+(x/2-85)/10+10,y/3+20+(2*y/3-40)/6+90,45+2*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
	bar(55+2*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,55+3*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);          //piano white notes
	bar(65+3*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,65+4*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
	bar(75+4*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,75+5*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
	bar(85+5*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,85+6*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
	bar(95+6*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,95+7*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
	bar(105+7*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,105+8*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
	bar(115+8*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,115+9*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);

	setfillstyle(1,0);
	bar(35-5,y/3+20+(2*y/3-40)/6+40,45+5,y/3+20+(2*y/3-40)/6+90);
	bar(2*((x/2-85)/10)+16,y/3+20+(2*y/3-40)/6+40,45+(x/2-85)/10+10+5,y/3+20+(2*y/3-40)/6+90);
	bar(55+3*((x/2-85)/10)+10-5,y/3+20+(2*y/3-40)/6+40,65+3*((x/2-85)/10)+10+5,y/3+20+(2*y/3-40)/6+90);       //piano black notes
	bar(65+4*((x/2-85)/10)+10-5,y/3+20+(2*y/3-40)/6+40,75+4*((x/2-85)/10)+10+5,y/3+20+(2*y/3-40)/6+90);
	bar(75+5*((x/2-85)/10)+10-5,y/3+20+(2*y/3-40)/6+40,85+5*((x/2-85)/10)+10+5,y/3+20+(2*y/3-40)/6+90);
	bar(95+7*((x/2-85)/10)+10-5,y/3+20+(2*y/3-40)/6+40,105+7*((x/2-85)/10)+10+5,y/3+20+(2*y/3-40)/6+90);
	bar(105+8*((x/2-85)/10)+10-5,y/3+20+(2*y/3-40)/6+40,115+8*((x/2-85)/10)+10+5,y/3+20+(2*y/3-40)/6+90);

	//settextstyle(3,0,1);
	setcolor(14);
	setbkcolor(7);
	outtextxy(35-(x/2-85)/10+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"z");
	outtextxy(45+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"a");
	outtextxy(45+(x/2-85)/10+10+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"s");
	outtextxy(55+2*((x/2-85)/10)+10+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"d");
	outtextxy(65+3*((x/2-85)/10)+10+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"f");
	outtextxy(75+4*((x/2-85)/10)+10+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"g");
	outtextxy(85+5*((x/2-85)/10)+10+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"h");
	outtextxy(95+6*((x/2-85)/10)+10+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"j");
	outtextxy(105+7*((x/2-85)/10)+10+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"k");
	outtextxy(115+8*((x/2-85)/10)+10+((x/2-85)/10)/3,y/3+20+(2*y/3-40)/6+150,"l");
}
void drum(int x,int y)
{
	setcolor(15);
	    setfillstyle(1,15);
	    bar(x/2+25+15,y/3+20,x-25+15,y-20);

	    setfillstyle(1,6);                                                                      //drum squares
		bar(x/2+25+15+5,y/3+20+5,x/2+x/6-(50/3)+25+15-5,y/3+2*y/9-(40/3)+20-5);
		setbkcolor(6);
		outtextxy(x/2+25+(x/6-(50/3))/2+15,y/3+20+(2*y/9-(40/3))/2,"1");

		setfillstyle(1,5);
		bar(x/2+x/6-(50/3)+5+25+15,y/3+20+5,x/2+2*(x/6-(50/3))-5+25+15,y/3+2*y/9-(40/3)+20-5);
		setbkcolor(5);
		outtextxy(x/2+(x/6-(50/3))+(x/6-(50/3))/2+25+15,y/3+(2*y/9-(40/3))/2+20,"2");

		setfillstyle(1,GREEN);
		bar(x/2+2*(x/6-(50/3))+25+15+5,y/3+20+5,x-25+15-5,y/3+2*y/9-(40/3)+20-5);
		setbkcolor(GREEN);
		outtextxy(x/2+2*(x/6-(50/3))+25+(x/6-(50/3))/2+15,y/3+(2*y/9-(40/3))/2+20,"3");

		setfillstyle(1,BLUE);
		bar(x/2+25+15+5,y/3+2*y/9-(40/3)+20+5,x/2+x/6-(50/3)+25+15-5,y/3+20+2*(2*y/9-(40/3))-5);
		setbkcolor(BLUE);
		outtextxy(x/2+25+(x/6-(50/3))/2+15,y/3+20+(2*y/9-(40/3))+(2*y/9-(40/3))/2,"4");

	    setfillstyle(1,4);
		bar(x/2+x/6-(50/3)+25+15+5,y/3+2*y/9-(40/3)+20+5,x/2+2*(x/6-(50/3))+25+15-5,y/3+20+2*(2*y/9-(40/3))-5);
		setbkcolor(4);
		outtextxy(x/2+(x/6-(50/3))+(x/6-(50/3))/2+25+15,y/3+20+(2*y/9-(40/3))+(2*y/9-(40/3))/2,"5");

		setfillstyle(1,0);
		bar(x/2+2*(x/6-(50/3))+25+15+5,y/3+2*y/9-(40/3)+20+5,x-25+15-5,y/3+20+2*(2*y/9-(40/3))-5);
		setbkcolor(0);
		outtextxy(7*x/8+20,2*y/3,"6");

		setfillstyle(1,12);
		bar(x/2+25+15+5,y/3+20+2*(2*y/9-(40/3))+5,x/2+x/6-(50/3)+25+15-5,y-20-5);
		setbkcolor(12);
		outtextxy(x/2+25+(x/6-(50/3))/2+15,y/3+20+2*(2*y/9-(40/3))+(2*y/9-(40/3))/2,"7");

		setfillstyle(1,8);
		bar(x/2+x/6-(50/3)+25+15+5,y/3+20+2*(2*y/9-(40/3))+5,x/2+2*(x/6-(50/3))+25+15-5,y-20-5);
		setbkcolor(8);
		outtextxy(x/2+(x/6-(50/3))+(x/6-(50/3))/2+25+15,y/3+20+2*(2*y/9-(40/3))+(2*y/9-(40/3))/2,"8");

		setfillstyle(1,3);
		bar(x/2+2*(x/6-(50/3))+25+15+5,y/3+20+2*(2*y/9-(40/3))+5,x-25+15-5,y-20-5);
		setbkcolor(3);
		outtextxy(x/2+2*(x/6-(50/3))+25+(x/6-(50/3))/2+15,y/3+20+2*(2*y/9-(40/3))+(2*y/9-(40/3))/2,"9");
}
void beat(int x,int y)
{
		for(;;)
		{
		char a=getch();
		if(a=='1')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
			bar(x/2+25+15+5,y/3+20+5,x/2+x/6-(50/3)+25+15-5,y/3+2*y/9-(40/3)+20-5);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-13 at 01.52.02.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(100);
			drum(x,y);

		}
		if(a=='2')
		{
			setfillstyle(1,13);
			bar(x/2+x/6-(50/3)+5+25+15,y/3+20+5,x/2+2*(x/6-(50/3))-5+25+15,y/3+2*y/9-(40/3)+20-5);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-13 at 01.52.04.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(100);
			drum(x,y);
		}
		if(a=='3')
		{
			setfillstyle(1,10);
			bar(x/2+2*(x/6-(50/3))+25+15+5,y/3+20+5,x-25+15-5,y/3+2*y/9-(40/3)+20-5);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-13 at 01.52.05.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(100);
			drum(x,y);
		}
		if(a=='4')
		{
			setfillstyle(1,9);
			bar(x/2+25+15+5,y/3+2*y/9-(40/3)+20+5,x/2+x/6-(50/3)+25+15-5,y/3+20+2*(2*y/9-(40/3))-5);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-13 at 01.52.06.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(100);
			drum(x,y);
		}
		if(a=='5')
		{
			setfillstyle(1,12);
			bar(x/2+x/6-(50/3)+25+15+5,y/3+2*y/9-(40/3)+20+5,x/2+2*(x/6-(50/3))+25+15-5,y/3+20+2*(2*y/9-(40/3))-5);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-13 at 01.52.04.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(100);
			drum(x,y);
		}
		if(a=='6')
		{
			setfillstyle(1,8);
			bar(x/2+2*(x/6-(50/3))+25+15+5,y/3+2*y/9-(40/3)+20+5,x-25+15-5,y/3+20+2*(2*y/9-(40/3))-5);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-13 at 01.52.04.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(100);
			drum(x,y);
		}
		if(a=='7')
		{
			setfillstyle(1,4);
			bar(x/2+25+15+5,y/3+20+2*(2*y/9-(40/3))+5,x/2+x/6-(50/3)+25+15-5,y-20-5);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-13 at 01.52.02.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(100);
			drum(x,y);
		}
		if(a=='8')
		{
			setfillstyle(1,7);
			bar(x/2+x/6-(50/3)+25+15+5,y/3+20+2*(2*y/9-(40/3))+5,x/2+2*(x/6-(50/3))+25+15-5,y-20-5);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-13 at 01.52.04.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(100);
			drum(x,y);
		}
		if(a=='9')
		{
			setfillstyle(1,11);
			bar(x/2+2*(x/6-(50/3))+25+15+5,y/3+20+2*(2*y/9-(40/3))+5,x-25+15-5,y-20-5);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-13 at 01.52.05.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(100);
			drum(x,y);
		}
		if(a=='z'||a=='Z')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
			bar(35-(x/2-85)/10,y/3+20+(2*y/3-40)/6+90,35,y/3+20+(2*y/3-40)/6+150);
			PlaySound("C:\\Users\\HP\\Downloads\\projectaudio\\audio1.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(50);
			piano(x,y);
		}
		if(a=='a'||a=='A')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
			bar(45,y/3+20+(2*y/3-40)/6+90,35+(x/2-85)/10+10,y/3+20+(2*y/3-40)/6+150);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-12 at 18.16.15.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(50);
			piano(x,y);
		}
		if(a=='s'||a=='S')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
			bar(45+(x/2-85)/10+10,y/3+20+(2*y/3-40)/6+90,45+2*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-12 at 18.16.18.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(50);
			piano(x,y);
		}
		if(a=='d'||a=='D')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
	        bar(55+2*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,55+3*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);          //piano white notes
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-12 at 18.16.19.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(50);
			piano(x,y);
		}
		if(a=='f'||a=='F')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
			bar(65+3*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,65+4*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-12 at 18.16.21.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(50);
			piano(x,y);
		}if(a=='g'||a=='G')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
			bar(75+4*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,75+5*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-12 at 18.16.24.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(50);
			piano(x,y);
		}
		if(a=='h'||a=='H')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
			bar(85+5*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,85+6*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-12 at 18.16.26.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(50);
			piano(x,y);
		}
		if(a=='j'||a=='J')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
			bar(95+6*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,95+7*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-12 at 18.16.27.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(50);
			piano(x,y);
		}
		if(a=='k'||a=='K')                                                                                                                         //sounds
		{
			setfillstyle(1,14);
			bar(105+7*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,105+8*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
			PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-12 at 18.16.28.wav",NULL,SND_FILENAME|SND_ASYNC);
			Sleep(50);
			piano(x,y);
		}
		if(a=='L'||a=='l')
        {   setfillstyle(1,14);
            bar(115+8*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+90,115+9*((x/2-85)/10)+10,y/3+20+(2*y/3-40)/6+150);
            PlaySound("C:\\Users\\hp\\Downloads\\projectaudio\\WhatsApp Audio 2019-11-12 at 18.16.29.wav",NULL,SND_FILENAME|SND_ASYNC);
            Sleep(50);
			piano(x,y);
        }
        if(a=='e'||a=='E')
		break;
	}
}
