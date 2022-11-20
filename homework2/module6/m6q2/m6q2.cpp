/*module 6, Q2: (Card Shuffling and Dealing) Create a program to shuffle and deal a deck of cards.
      The program should consist of
class Card, class DeckOfCards and a driver program.

Class Card should provide:
a) Data members face and suit of type int.
b) A constructor that receives two int¡¯s representing the face and suit and uses
them to initialize the data members.
c) Two static arrays of strings representing the faces and suits.
d) A toString function that returns the Card as a string in the form ¡°face of suit.¡±
You can use the + operator to concatenate strings.

Class DeckOfCards should contain:
a) A vector of Cards named deck to store the Cards.
b) An integer currentCard representing the next card to deal.
c) A default constructor that initializes the Cards in the deck. The constructor
should use vector function push_back to add each Card to the end of the
vector after the Card is created and initialized. This should be done for each
of the 52 Cards in the deck.
d) A shuffle function that shuffles the Cards in the deck. The shuffle algorithm
should iterate through the vector of Cards. For each Card, randomly select
another Card in the deck and swap the two Cards.
e) A dealCard function that returns the next Card object from the deck.
f) A moreCards function that returns a bool value indicating whether there are
more Cards to deal.*/


#include <iostream>
#include <iomanip>          // for float number display format
#include <string>
#include <vector>

#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main()
{
    //Card c1(1,1);
    //cout<<c1.toString()<<endl;

    DeckOfCards d;   //create a DeckofCards object

    /*get each card in this DeckOfCards object: d
      display the cards with toString() function
      before shuffle cards*/
    for(int i=1;i<=52;i++)
        cout<<"Just create a deck of cards and not shuffled yet. loop card# "<<i<<": "<<d.dealCard().toString()<<endl;

    d.shuffle();     //shuffel the cards in DeckOfCards object: d

    cout<<endl<<endl;

    /*get each card in this DeckOfCards object: d
      display the cards with toString() function
      after shuffle cards */
    for(int i=1;i<=52;i++)
        cout<<"After shuffle cards: loop card# "<<i<<": "<<d.dealCard().toString()<<endl;

    cout<<endl<<endl;

    /*to show whether the cards has been deal out*/
    if(d.hasMoreCard())
        cout<<"There is still more cards left in the deck. "<<endl;
    else
        cout<<"There is no more cards left in the deck"<<endl;
}
