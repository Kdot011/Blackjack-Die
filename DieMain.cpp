//Kevin Au
//CS236 
//Fall 2024

#include <iostream>
#include "Die.h"
using namespace std;
int main(){
    Die userDie,computerDie;
    char choice;
    int userTotal=0,computerTotal=0;

    cout<< "Let's play a game of 21!"<<endl;
    cout<<"The winner is the player with the higher total but not over 21."<<endl;

    do{
        //User rolls dice
        cout<< " "<<endl;
        cout<<"Would you like to roll the dice? Enter Y for yes or N for no:";
        cin>>choice;
        if(choice=='Y' || choice == 'y'){
            userDie.roll();
            computerDie.roll();
            //Update totals
            userTotal+=userDie.getValue();
            //Display totals
            cout<< " "<<endl;
            cout<<"You rolled a "<<userDie.getValue()<<"."<<endl;
            cout<<"You have "<<userTotal<<" points."<<endl;
          
          //Computer's turn to roll the dice
          if(computerTotal<17){ //computer rolls until it reaches 17
            int computerRoll=computerDie.getValue();
            computerTotal+=computerRoll;
            cout<< " "<<endl;
            cout<<"Computer rolled a "<<computerRoll<<"."<<endl;
            cout<<"Computer has "<<computerTotal<<" points."<< endl;
          } else{
            cout<< "Computer stands with "<< computerTotal<<" points."<< endl;
          }

            //Check if any player has exceeded 21
            if(userTotal> 21 || computerTotal> 21){
                break;
            }
        }else {
            break;
        }
    }while(userTotal<= 21 && computerTotal<= 21);

    //Determination of winner
    cout<< " "<<endl;
    cout<<"\nFinal Scores:"<<endl;
    cout<<"You had "<<userTotal<<" points."<<endl;
    cout<<"Computer had "<<computerTotal<<" points."<<endl;
    if((userTotal> computerTotal && userTotal<= 21) || computerTotal > 21){
        cout<<"Congratulations! You won!"<<endl;
    }else if((computerTotal > userTotal && computerTotal <= 21) || userTotal > 21){
        cout<<"Sorry! Computer won!"<<endl;
    }else{
        cout<<"It's a tie!"<<endl;
    }
    cout<<"Game Over."<<endl;
    return 0;
}