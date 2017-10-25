#include <iostream>
#include<SFML/Graphics.hpp>
#include<vector>
#include<cmath>

using namespace std;
using namespace sf;

vector <Sprite>blacks,whites,blackQueens,whiteQueens;
Texture blackQueen,whiteQueen;
Sprite swQueen,sbQueen;
short W=56,H=56;
int nX,mY,selectedX,selectedY;
char selectedColor, looserElementColor ;
int looserElementPos ;
bool selected = false;
short w=0,b=0;

bool isFullCell(int x,int y);

void detectPosition(float posX,float posY)
{
    posX -= 23;
    posY -= 23;
    nX = posX/56 ;
    nX++;
    mY = posY/56 ;
    mY++;
    if(nX>8)
        nX--;
    if(mY>8)
        mY--;
    //cout << "nX = "<<nX<<endl <<"mY = " <<mY<<endl;
}

void Move (Sprite &target)
{
    if(selectedColor=='W' && (mY==selectedY+1 ||mY==selectedY-1) && (nX==selectedX+1 || nX==selectedX-1) )
    {
        if(looserElementColor == 'E' && mY == selectedY-1)
        {
            nX--;
            mY--;
            float newX, newY ;
            newX = 23 + nX*W + 9;
            newY = 23 + mY*H + 9;
            target.setPosition(newX,newY);
            if(mY==0)
            {
                target.setPosition(700,700);
                whiteQueens[w].setPosition(newX,newY);
                w++;
            }
        }
        else if(looserElementColor == 'B')
        {

            if(mY == selectedY -1 && nX < selectedX )
            {
                nX-=2;
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY -1 && nX > selectedX)
            {
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY + 1 && nX <selectedX )
            {
                nX-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY + 1 && nX >selectedX)
            {
                //do nothing
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            float newX, newY ;
            newX = 23 + nX*W + 9;
            newY = 23 + mY*H + 9;
            target.setPosition(newX,newY);
            blacks[looserElementPos].setPosition(700,700);
            if(mY==0)
            {
                target.setPosition(700,700);
                whiteQueens[w].setPosition(newX,newY);
                w++;
            }
        }
         else if(looserElementColor == 'Z')
        {

            if(mY == selectedY -1 && nX < selectedX )
            {
                nX-=2;
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY -1 && nX > selectedX)
            {
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY + 1 && nX <selectedX )
            {
                nX-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY + 1 && nX >selectedX)
            {
                //do nothing
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            float newX, newY ;
            newX = 23 + nX*W + 9;
            newY = 23 + mY*H + 9;
            target.setPosition(newX,newY);
            blackQueens[looserElementPos].setPosition(700,700);
    }
    }
    else if(selectedColor=='B' && (mY==selectedY+1 || mY==selectedY-1) && (nX==selectedX+1 || nX==selectedX-1) )
    {
        if(looserElementColor == 'E' && mY == selectedY+1)
        {
            nX--;
            mY--;
            float newX, newY ;
            newX = 23 + nX*W + 9;
            newY = 23 + mY*H + 9;
            target.setPosition(newX,newY);
            if(mY==7)
            {
                target.setPosition(700,700);
                blackQueens[b].setPosition(newX,newY);
                b++;
            }

        }
        else if(looserElementColor == 'W')
        {

            if(mY == selectedY -1 && nX < selectedX )
            {
                nX-=2;
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY -1 && nX > selectedX)
            {
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY + 1 && nX <selectedX )
            {
                nX-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY + 1 && nX >selectedX)
            {
                //do nothing
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            float newX, newY ;
            newX = 23 + nX*W + 9;
            newY = 23 + mY*H + 9;
            target.setPosition(newX,newY);
            whites[looserElementPos].setPosition(700,700);
            if(mY==7)
            {
                target.setPosition(700,700);
                blackQueens[b].setPosition(newX,newY);
                b++;
            }
        }
        else if(looserElementColor == 'D')
        {

            if(mY == selectedY -1 && nX < selectedX )
            {
                nX-=2;
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY -1 && nX > selectedX)
            {
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY + 1 && nX <selectedX )
            {
                nX-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY == selectedY + 1 && nX >selectedX)
            {
                //do nothing
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            float newX, newY ;
            newX = 23 + nX*W + 9;
            newY = 23 + mY*H + 9;
            target.setPosition(newX,newY);
            whiteQueens[looserElementPos].setPosition(700,700);
    }
    }
    //this code is processing.    D-is White Queen
    else if(selectedColor=='D' &&  (abs(selectedX-nX) == abs(selectedY-mY)))
    {
        if(looserElementColor == 'E'  )
        {
            nX--;
            mY--;
            float newX, newY ;
            newX = 23 + nX*W + 9;
            newY = 23 + mY*H + 9;
            target.setPosition(newX,newY);
        }
        else if(looserElementColor == 'B' || looserElementColor == 'Z')
        {

            if(mY < selectedY && nX < selectedX )
            {
                nX-=2;
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY < selectedY  && nX > selectedX)
            {
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY > selectedY  && nX <selectedX )
            {
                nX-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY > selectedY  && nX >selectedX)
            {
                //do nothing
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            float newX, newY ;
            newX = 23 + nX*W + 9;
            newY = 23 + mY*H + 9;
            target.setPosition(newX,newY);
            blacks[looserElementPos].setPosition(700,700);
            blackQueens[looserElementPos].setPosition(701,701);

        }
    }
////////Z-is Black Queen
else if(selectedColor=='Z' && (abs(selectedX-nX) == abs(selectedY-mY)))
{
    if(looserElementColor == 'E' )
    {
        nX--;
        mY--;
        float newX, newY ;
        newX = 23 + nX*W + 9;
        newY = 23 + mY*H + 9;
        target.setPosition(newX,newY);
    }
        else if(looserElementColor == 'W' || looserElementColor == 'D')
        {

            if(mY < selectedY && nX < selectedX )
            {
                nX-=2;
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY < selectedY && nX > selectedX)
            {
                mY-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY > selectedY && nX <selectedX )
            {
                nX-=2;
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            else if(mY > selectedY && nX >selectedX)
            {
                //do nothing
                if(isFullCell(nX,mY))
                {
                    return;
                }
            }
            float newX, newY ;
            newX = 23 + nX*W + 9;
            newY = 23 + mY*H + 9;
            target.setPosition(newX,newY);
            whites[looserElementPos].setPosition(700,700);
            whiteQueens[looserElementPos].setPosition(701,701);
        }
    }
//this code is processing
}
short getSelectedSprite(float posX, float posY,char &element)
{
    detectPosition(posX,posY);
    int xInterval, yInterval;
    xInterval = 23 + (nX-1)*W ;
    yInterval = 23 + (mY-1)*H ;

    for(int i = 0 ; i < 12 ; i++)
    {
        if(blacks[i].getPosition().x >= xInterval && blacks[i].getPosition().x <= xInterval+W
                && blacks[i].getPosition().y >=yInterval && blacks[i].getPosition().y<=yInterval+H)
        {
            element = 'B';
            return i;
        }
        if(whites[i].getPosition().x >= xInterval && whites[i].getPosition().x <= xInterval+W
                && whites[i].getPosition().y >=yInterval && whites[i].getPosition().y<=yInterval+H)
        {
            element = 'W';
            return i;
        }
    }
    for( int w=0; w<12; w++)
    {
        if(whiteQueens[w].getPosition().x >= xInterval && whiteQueens[w].getPosition().x <= xInterval+W
                && whiteQueens[w].getPosition().y >=yInterval && whiteQueens[w].getPosition().y<=yInterval+H)
        {
            element = 'D';
            return w ;
        }
    }
    for(int b=0; b<12; b++)
    {
        if(blackQueens[b].getPosition().x >= xInterval && blackQueens[b].getPosition().x <= xInterval+W
                && blackQueens[b].getPosition().y >=yInterval && blackQueens[b].getPosition().y<=yInterval+H)
        {
            element = 'Z';
            return b;
        }
    }
    element = 'E';
    return -1 ; // clicked empty area ;
}

int main()

{

    VideoMode vMode(504,504);
    RenderWindow playGround(vMode,"Checker",Style::None);
    Texture board;
    board.loadFromFile("images/board.png");
    Sprite sBoard(board);
    Texture bT,wT,highlightT;
    bT.loadFromFile("images/black.png");
    wT.loadFromFile("images/white.png");
    highlightT.loadFromFile("images/highlight.png");
    Sprite sB(bT),sW(wT),sHighlight(highlightT);
    sHighlight.setPosition(600,600);
    whiteQueen.loadFromFile("images/wdama.png");
    blackQueen.loadFromFile("images/bdama.png");
    swQueen.setTexture(whiteQueen);
    sbQueen.setTexture(blackQueen);
    sbQueen.setPosition(700,700);
    swQueen.setPosition(750,750);
    int X,Y,dX=9,dY=9;
    int k=23;
    for(int i=0; i<12; i++)
    {
        blacks.push_back(sB);
        whites.push_back(sW);
    }
    for(int i=0; i<12; i++)
    {
        whiteQueens.push_back(swQueen);
        blackQueens.push_back(sbQueen);
    }
    X=dX+k+W;
    Y=dY+k;
    for(int i=0; i<12; i++)
    {
        blacks[i].setPosition(X,Y);
        whites[i].setPosition(i>3 && i<8 ? X+W:X-W,504-k-dY-dY-dY-Y);
        X=X+W+W;
        if(i+1==8)
        {
            X=k+W+dX;
            Y=Y+H;
        }
        else  if((i+1)%4==0)
        {
            X=dX+k;
            Y=Y+H;
        }
    }
    int posX,posY;
    while(playGround.isOpen())
    {
        Event action;
        while(playGround.pollEvent(action))
        {
            if(action.type==Event::Closed)
                playGround.close();
            if (action.type == Event::KeyPressed)
                if (action.key.code == Keyboard::Escape)
                    playGround.close();
            if(action.type==Event::MouseButtonPressed)
            {
                posX=action.mouseButton.x;
                posY=action.mouseButton.y;
                int pos ;
                if(!selected)
                {
                    pos = getSelectedSprite(posX,posY,selectedColor);
                    cout << selectedColor <<endl ;
                    if(pos != -1)
                    {
                        selected = true ;
                        sHighlight.setPosition(23 + (nX-1)*W+2,23+(mY-1)*H+2);
                        selectedX = nX;
                        selectedY = mY;
                    }
                }
                else
                {
                    detectPosition(posX,posY);
                    looserElementPos = getSelectedSprite(posX,posY,looserElementColor);
                    cout << looserElementColor<<endl;
                    if(selectedColor=='W')
                    {
                        Move(whites[pos]);
                        selected = false;
                        sHighlight.setPosition(600,600);
                    }
                    else if(selectedColor=='B')
                    {
                        Move(blacks[pos]);
                        selected = false;
                        sHighlight.setPosition(600,600);
                    }
                    else if(selectedColor=='D')
                    {
                        Move(whiteQueens[pos]);
                        selected=false;
                        sHighlight.setPosition(600,600);
                    }
                    else if(selectedColor=='Z')
                    {
                        Move(blackQueens[pos]);
                        selected=false;
                        sHighlight.setPosition(600,600);
                    }
                }
            }
        }
        playGround.draw(sBoard);
        for(int i=0; i<12; i++)
        {
            playGround.draw(blacks[i]);
            playGround.draw(whites[i]);
            playGround.draw(whiteQueens[i]);
            playGround.draw(blackQueens[i]);
        }
        playGround.draw(sHighlight);
        playGround.display();
    }
    return 0;

}

bool isFullCell(int x,int y)
{
    if(x<0 || x>7)
    {
        return true;
    }
    if(y<0 || y>7)
    {
        return true;
    }
    int xInterval, yInterval;
    xInterval = 23 + x*W ;
    yInterval = 23 + y*H ;

    for(int i = 0 ; i < 12 ; i++)
    {
        if(blacks[i].getPosition().x >= xInterval && blacks[i].getPosition().x <= xInterval+W
                && blacks[i].getPosition().y >=yInterval && blacks[i].getPosition().y<=yInterval+H)
        {
            return true;
        }
        if(whites[i].getPosition().x >= xInterval && whites[i].getPosition().x <= xInterval+W
                && whites[i].getPosition().y >=yInterval && whites[i].getPosition().y<=yInterval+H)
        {
            return true;
        }
    }
    for( int w=0; w<12; w++)
    {
        if(whiteQueens[w].getPosition().x >= xInterval && whiteQueens[w].getPosition().x <= xInterval+W
                && whiteQueens[w].getPosition().y >=yInterval && whiteQueens[w].getPosition().y<=yInterval+H)
        {
            return true;
        }
    }
    for(int b=0; b<12; b++)
    {
        if(blackQueens[b].getPosition().x >= xInterval && blackQueens[b].getPosition().x <= xInterval+W
                && blackQueens[b].getPosition().y >=yInterval && blackQueens[b].getPosition().y<=yInterval+H)
        {
            return true;
        }
    }
    return false;
}
