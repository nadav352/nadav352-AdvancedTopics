#include <iostream>
#include <cstring>
using namespace std;

enum PieceType{Rock, Paper, Scissors, Bomb, Flag };
enum Player{player1,player2 };

class Piece{
	const bool isJoker;
	PieceType type;

    Piece(PieceType type,bool isJoker):isJoker(isJoker),type(type){}

    friend ostream& operator<<(ostream& out,Piece piece);

};

ostream& operator<<(ostream& out,Piece piece){
 switch(piece.type){
 	 case(Rock):
 	     out<<'R'<<endl;
 }


}
