#ifndef BOARD_H
#define BOARD_H
#include "Board.hpp"
#include <array>
using namespace std;
const int reSize = 10;


namespace ariel {

    //This func is help me to check if x,y is in range of the matrix 
    bool is_in_rang(unsigned int x ,unsigned int y , Direction d , unsigned int lens , unsigned int row,unsigned int col){
        if(d == Direction::Vertical){
            if( x+lens >= row || y > col-1) {return false;}
        }
        else{ // d == V 
            if(y + lens >= col || x >= row) {return false;}
        }
        return true;
    }

    //this func will help me on show method, Instead of printing the whole board I will print the part we wrote
    void Board::Limits(unsigned int x ,unsigned int y , Direction d , unsigned int lens){
        if(x<this->minI) {this->minI=x;}
        if(y<this->minJ) {this->minJ=y;}
        if(d == Direction::Horizontal){
            if(x>this->maxI) {this->maxI=x;}
            if(y+lens>this->maxJ){this->maxJ= y+lens;}
        }
        else{
            if(x+lens>this->maxI) {this->maxI=x+lens;}
            if(y>this->maxJ){this->maxJ = y;}
        }
    }

    //this method for post on the infinty board
    void Board::post(unsigned int x ,unsigned int y , Direction d ,string const& s){
        unsigned int lenS=s.length();

        //if the client what to post on place thet not init on the board 
        while(!is_in_rang(x,y,d,lenS ,row , col)){
           //resize while it is not in the domain of the board
            unsigned int new_size = row  *reSize;
            board.resize(new_size);
            for(unsigned int i = 0 ; i < new_size ; i++){
                board[i].resize(new_size,'_');    
            }
            row = col = new_size;//update the new row and col
        }

        Limits(x,y,d,lenS);//update the limits

        unsigned int ro=x;
        unsigned int co=y;

        for(unsigned int i = 0 ; i < lenS ; i++)
        {
            if(d == Direction::Horizontal){
                board[ro][co] = (char)s.at(i);
                co++;
            }
            else {
                board[ro][co] = (char)s.at(i);
                ro++;
            }
        }
    }

    //this method is to read on the infinty board
    string Board::read(unsigned int x ,unsigned  int y , Direction d , unsigned int len){
        string s = string("");
        if(d == Direction::Horizontal){
            // if not in rang so its mean that the client isnt posted ther yet so we read an line
            if(!is_in_rang(x,y,d,len,row,col)){

                int i = 0;
                unsigned int y2 = y;
                int temp = (int)col -(int)y2;

                for(i = 0 ; i <temp && x < row; i++){
                    s+=board[x][y];
                    y++;
                }
                unsigned int k = len-(unsigned int)i;
                while(k > 0){
                    s+='_';
                    k--;
                }
                return s ;    
            }
            //whene in range and there is what to read
            for(int i = 0 ; i < len ; i++){
                s+=board[x][y];
                y++;
            }
        }
        else{
            // if not in rang so its mean that the client isnt posted ther yet so we read an line
            if(!is_in_rang(x,y,d,len,row,col)){

                int i = 0 ;
                unsigned int x2 = x;
                int temp = (int)row -(int)x2;
                for(i = 0 ; i<temp && y<col ; i++){
                    s+=board[x][y];
                    x++;
                }
                unsigned int k = len-(unsigned int)i;
                while(k > 0){
                    s+='_';
                    k--;
                }
                return s;    
            }
            //whene in range and there is what to read    
            for(int i = 0 ; i<len ; i++){
                s+=board[x][y];
                x++;
            }
        }
        return s;
    }

    //show nethod who show the board
    void Board::show() {
        unsigned int i=0;
        unsigned int j=0;
        for( i = minI ; i <= maxI ; i++){
            cout << i << " :\t";
            for(j = minJ ; j< maxJ ; j++){
                cout << board[i][j];
            }
            cout<<endl;
        }
    }
};
#endif