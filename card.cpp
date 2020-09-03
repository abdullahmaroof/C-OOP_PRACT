#include<iostream>
using namespace std;

const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

struct card{
	int number;
	int suit;
};

int main()
{
	card temp, chosen , prize;
	int position;
	card card1 = {7, clubs};
	cout<<"Card 1 is the 7 of clubs\n";
	
	card card2 = {jack, hearts};
	cout<<"Card 2 is jack of hearts\n";
	
	card card3 = {ace, spades};
	cout<<"Card 3 is the ace of spades\n";
	
	prize = card3;
	
	cout<<"I'm swapping card 1 and card 3\n";
	temp = card3;		//temp has  card3 value  card3 = 0 temp = {ace, spades};
	card3= card1;		//card3 has card1 value  card3 = {7, clubs}; , card1 = 0
	card1 = temp;		//card1 has temp value card1 = {ace, spades}; , temp =0
	
	
	cout<<"I'm swapping card 2 and card 3\n";
	temp = card3;		//temp has card3 value card3 = 0, temp= {7, clubs};
	card3= card2;		//card3 has card2 value card3 = {jack, hearts}; , card2 = 0
	card2 = temp;		//card2 has temp value card2 = {7, clubs}; , temp = 0
	
	cout<<"I'm swapping card 1 and card 2\n";
	temp = card2;		//temp has card2 value temp= {7, clubs}; , card2 = 0
	card2= card1;		//card2 has card1 value card2= {ace, spades}; , card1 = 0
	card1 = temp;		//card1 has temp value card1= {7, clubs};, temp = 0
	//card1 has card1 value
	//card2 has card3 valuw
	//card3 has card2 value
	
	cout<<"Now, where (1, 2, or 3) is the ace of shades: ";
	cin>>position;
	
	switch(position)
	{
		case 1: chosen = card1; break;
		case 2: chosen = card2; break;
		case 3: chosen = card3; break;
	}
	
	if(chosen.number == prize.number && chosen.suit == prize.suit)		//chosen number has a value of cards and prize number has card3 numbers and chosen suit has a value of cards and prizesuit has card3 values   
	{
		cout<<"That's right! You win!\n";
	}
	else
	{
		cout<<"Sorry, You lose.\n";
	}
	return 0;
}
