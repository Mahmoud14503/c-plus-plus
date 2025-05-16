#include<graphics.h>
#include<string>
using namespace std;
#include<iostream>
#include<cmath>


string pieces[] = {

    "imgs/rook_black_1.ico",  //0
    "imgs/rook_white_1.ico",  //1

    "imgs/bishop_black_1.ico",  //2
    "imgs/bishop_white_1.ico",  //3

    "imgs/knight_black_1.ico",  //4
    "imgs/knight_white_1.ico",  //5

    "imgs/queen_black_1.ico",  //6
    "imgs/queen_white_1.ico",  //7

    "imgs/king_black_1.ico",  //8
    "imgs/king_white_1.ico",  //9

    "imgs/pawn_black_1.ico",  //10
    "imgs/pawn_white_1.ico",  //11
};

int board[][8] = {
    {0,4,2,6,8,2,4,0},
    {10,10,10,10,10,10,10,10},
    {-1,-1,-1,-1,-1,-1,-1,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1},
    {11,11,11,11,11,11,11,11},
    {1,5,3,7,9,3,5,1},

};

const float HEIGHT = 64 ;
const float WIDTH = 64 ;

void drawPieces(){
    for(int r = 0; r < 8; r++)
    {
        for(int c = 0; c < 8; c++)
        {
            int boardIndex = board[r][c];
            switch(boardIndex){
                case -1: break;
                /*
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                */
                default:
                    readimagefile(pieces[boardIndex].c_str(),c*WIDTH,r*HEIGHT,c*WIDTH+64,r*HEIGHT+64);
                break;
            }

        }
    }
}




void drawChessBoard()
{
    for(int i = 0; i < 8; i += 2)
    {
        for(int j = 0; j < 8; j += 2)
            bar(i*64,j*64,i*64+64,j*64+64);
    }
    for(int i = 1; i < 8; i += 2)
    {
        for(int j = 1; j < 8; j += 2)
            bar(i*64,j*64,i*64+64,j*64+64);
    }

}

bool checkEscapePressed(){

    if(kbhit()){
        char key = getch();
        if(key == 27)
            return true;
    }

    return false;
}

int getRowIndex(int mouseX){
    return ceil(mouseX/HEIGHT);
}
int getColumnIndex(int mouseY){
    return ceil(mouseY/WIDTH);
}

void mouseHandler(int x, int y){
    cout << "Row: " << getRowIndex(y) << "\t" << "Col: " << getColumnIndex(x) << endl;
}

int main()
{
    initwindow(8*64,8*64,"Chess game",550,0);
    setbkcolor(CYAN);
    cleardevice();

    drawChessBoard();
    drawPieces();

    registermousehandler(WM_LBUTTONDOWN, mouseHandler);


    while(! checkEscapePressed())
        ;
    return 0;
}
