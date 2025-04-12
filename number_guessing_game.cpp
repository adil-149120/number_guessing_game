#include<bits/stdc++.h>
using namespace std;

int random_number(){
    srand(time(0)); 
    int randomNumber = (rand() % 100)+1;
    return randomNumber;
}

void starting(){
    cout<<endl<<".....WELCOME TO NUMBER GUESSING GAME....."<<endl<<endl;
    cout<<"I'm thinking of a number between 1 and 100."<<endl;
    cout<<"can u guess the number??"<<endl;
    cout<<"please choose the difficulty level"<<endl<<endl;
    cout<<"1. Easy(10 chances)"<<endl;
    cout<<"2. Medeium(5 chances)"<<endl;
    cout<<"3. Hard(3 chances)"<<endl<<endl;   
}

void result(int a,int b){
    cout<<":::RESTLT:::"<<endl;
    cout<<"WIN :"<<a<<"\t\t"<<"LOSS :"<<b<<endl;
}

int main(){
    starting();   
    int lv_choice,choice,randomNumber,game;
    int rounds=0;

    do{         
        do{
            cout<<endl<<endl<<"Enter your choice for difficulty level :";
            cin>>lv_choice;
            if(lv_choice==1)cout<<endl<<"You have chosed Easy difficulty level.";
            else if(lv_choice==2)cout<<endl<<"OK! You have chosed Medium difficulty level.";
            else if(lv_choice==3)cout<<endl<<"Great! You have chosed Hard difficulty level.";
            else cout<<"please choose among 1 or 2 or 3"<<endl;
        }while(lv_choice>3 || lv_choice<1);
        
            cout<<endl<<"Now let's start the game:"<<endl;
            
        randomNumber=random_number();  
        cout<<endl<<endl;
        rounds++;
        cout<<"Round Number :"<<rounds<<endl<<endl<<endl;
        cout<<"Enter Your guess:";
        cin>>choice;
        int attempts=1;
        int win=0,loss=0;
        while(randomNumber!=choice){
            
            attempts++; 
            //cout<<attempts<<endl;
            if(randomNumber>choice){
                cout<<"Wrong! The guessed number is greater than "<<choice<<"."<<endl<<endl;
            }
            else if(randomNumber<choice){
                cout<<"Wrong! The guessed nubmer is less than "<<choice<<"."<<endl<<endl;
            }
            if(lv_choice==1 && attempts==10){ 
                loss++;
                cout<<"You are out of attempts.";    
                break;
            }
            else if(lv_choice==2 && attempts==5){
                loss++;
                cout<<"You are out of attempts.";            
                break;
            }
            else if(lv_choice==3 && attempts==3){ 
                loss++;
                cout<<"You are out of attempts.";
                break;
            }
            cout<<"Renter Your guess:";
            cin>>choice;
        }  

        if(randomNumber==choice){
            win++;
            cout<<"Congrats! You have guessed the correct number.\t"<<"Number of attempts:"<<attempts<<endl<<endl;
        }

        result(win,loss);
        cout<<endl<<endl;
        cout<<"press 1 to play more rounds or to quit press 2"<<endl;
        cin>>game;
        if(game==2){
            cout<<"Thak You";
            exit(0);
        }
    }while(game==1);
    
    
     
    return 0;
}