/*this is the class DeckOfCards.h  */



#include <iostream>
#include <string>
#include <vector>

#include "Card.h"

#ifndef DeckOfCards_H
#define DeckOfCards_H
             // This header introduces string types, character traits and a set of converting functions


//header.h file can not use USING namespace


class DeckOfCards
{
public:

   /*constructor to create a vector to hold 52 Card objects. */
   DeckOfCards()
   {     /*you can use another class(Card) type as vector element's type with size in a function or construct
           you can NOT use another class's type as vector's element for a data member in DeckOfCards class
           In functions only: std::vector<Card> deck(52); */
       for(int i=1;i<=4;i++)
       {
           for(int j=1;j<=13;j++)
           {
               deck.push_back(Card(i,j));

           }
       }

       currentCard=0;
   }

   /*The shuffle function should iterate through the vector of Cards. For each Card,
     randomly select another Card in the deck and swap the two Cards.*/
   shuffle()
   {
       Card tempCard;
       /*initialize seek with computer's timing*/
       srand(static_cast<unsigned int>(time(0)));

       /*Go through the vector and exchange each element with the randomly chosen element
       in the range from itself to the end. It is possible that an element will be swap with
       itself, but no problem with that.*/
       for(std::vector<Card>::size_type i=0; i!=deck.size(); i++)
      {
           int r = i + (rand() % (52 -i));

           tempCard = deck[i];
           deck[i] = deck[r];
           deck[r] = tempCard;
      }
   }



   /*dealCard function that returns the next Card object from the deck.*/
   Card dealCard()
   {    /*test whether currentCard has reached the end of vector.
          if reach the end, reset it to 0 */
       if(!hasMoreCard())
          currentCard=0;


       if(currentCard>=0 && currentCard<=51)
       {   /*every time dealCard() function is called, increment currentCard to next position in vector */
           currentCard++;   //currentCard initialized 0 in constructor, but ++ before return to starting from 1 now

           return deck.at(currentCard-1); //currentCard start from 1 now after increment++,so make it starting from 0
       }

       else
            std::cout<<"No dealCard left in this deck! "<<std::endl;
   }


   /*A moreCards function that returns a bool value indicating whether there are more Cards to deal.*/
   bool hasMoreCard()
   {
       if(currentCard<=51)
          return true;
       else
          return false;
   }




private:
    /*Correct! array allows to use Card type as its element's type in Class. */
    //Card deck1[52];

    /*Wrong! You can NOT use Card type for vector's elements in Class with size.
      With size Only allowed in functions or constructor*/
    //std::vector<Card> deck2(52);

    /*correct! without size is ok. */
    std::vector<Card> deck;

    /*represent the next card in vecotr to be deal with*/
    int currentCard;


};

#endif // DeckOfCards_H
