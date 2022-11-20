/*this is the class Card: Card.h
*/

#include <iostream>
#include <string>              // This header introduces string types, character traits and a set of converting functions

#ifndef CARD_H
#define CARD_H

//header.h file can not use USING namespace

class Card
{
public:
    /*write default constructor, so a vector can use it.
      If I don't write an explicit default constructor, other program can not use default version of constructor */
      Card()
      {}

    /*A constructor that receives two int representing the face and suit
    and uses them to initialize the data members.*/
    Card (int suitN, int faceN)
     {
         if(suitN>=1 && suitN<=4)
            suit=suitN;
         if(faceN>=1 && faceN<=13)
            face=faceN;
     }


     /* toString function that returns the Card as a string in the form ¡°face of suit.¡±*/
     std::string toString()
     {
         std::string f,s;

         switch(suit)
         {
            case 1:
               s=suitName[0];
               break;
            case 2:
               s=suitName[1];
               break;
            case 3:
                s=suitName[2];
                break;
            case 4:
                s=suitName[3];
                break;
            default:
                std::cout<<"! Must choose suit between 1 - 4: ";
         }

         switch(face)
         {
            case 1:
                f=faceNum[0];
                break;
            case 2:
                f=faceNum[1];
                break;
            case 3:
                f=faceNum[2];
                break;
            case 4:
                f=faceNum[3];
                break;
            case 5:
                f=faceNum[4];
                break;
            case 6:
                f=faceNum[5];
                break;
            case 7:
                f=faceNum[6];
                break;
            case 8:
                f=faceNum[7];
                break;
            case 9:
                f=faceNum[8];
                break;
            case 10:
                f=faceNum[9];
                break;
            case 11:
                f=faceNum[10];
                break;
            case 12:
                f=faceNum[11];
                break;
            case 13:
                f=faceNum[12];
                break;
            default:
                std::cout<<"! Must choose face Number between 1 - 13. ";
         }

         return "Face="+f+" of Suit="+s;
     }



private:
    int face;
    int suit;
    std::string suitName[4] = {"club","heart","diamond","spade"};
    std::string faceNum[13] = {"Ace","King","Queen","Jack","10","9","8","7","6","5","4","3","2"};


};

#endif // CARD_H
