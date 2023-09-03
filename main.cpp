#include <iostream>
using namespace std;

string arr[3][3]={"1","2","3","4","5","6","7","8","9"};
bool turn=true;
int pos;
string ch;
string win;
string player1, player2;
int count=0;


bool gameisfinish(){
    bool game=true;
    for(int i=0;i<3;i++){
        //checking horizontally or vertically
        if(arr[0][i] ==arr[1][i] && arr[0][i] == arr[2][i] || arr[i][0]== arr[i][1] && arr[i][0]==arr[i][2]){
            win=arr[0][i];
            game=false;
            break;
        }
    }
    //checking doaginally
    if((arr[0][0]==arr[1][1] && arr[0][0] ==arr[2][2] )|| (arr[0][2]==arr[1][1] && arr[2][0]==arr[1][1])){
        win=arr[1][1];
        game=false;
    }
    return game;
};

void displayToe(){

    cout<<endl<<"     |     |      "<<endl;
    cout<<"  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"    "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |      "<<endl;
    cout<<"  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"    "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |      "<<endl;
    cout<<"  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"    "<<endl;
    cout<<"     |     |      "<<endl;
}

void playerturn(){
    if(turn==true){
        cout<<player1<<"'s turn :-";
        cin>>pos;
        ch="X";
        
    }
    else if(turn==false){
        cout<<player2<<"'s turn :-";
        cin>>pos;
        ch="O";
        
    }
    if(pos<=3 && arr[0][pos-1]!="X" &&arr[0][pos-1]!="O"){
        arr[0][pos-1]=ch;
        turn=!turn;
        count++;
    }
    else if(pos>3 && pos<=6 &&arr[1][pos-4]!="X" &&arr[1][pos-4]!="O" ){
        arr[1][pos-4]=ch;
        turn=!turn;
        count++;
    }
    else if(pos>6 && pos<=9 &&arr[2][pos-7]!="X" &&arr[2][pos-7]!="O"){
        arr[2][pos-7]=ch;
        turn=!turn;
        count++;
    }
    else{
        cout<<"Invalid Position"<<endl;
        playerturn();
    }
    displayToe();
    
    
}

int main(){

    cout<<"Welcome to TicTacToe"<<endl;
    cout<<"Rules :- Just Press number of position , you want to place your turn (1-9)"<<endl;
    cout<<"1. Player 1(X)"<<endl<<"2. Player 2 (O)"<<endl;
    cout<<"Player 1 name:- "<<endl;
    cin>>player1;
    cout<<"Player 2 name:- "<<endl;
    cin>>player2;
   // bool draw;
	displayToe();
    while(gameisfinish() && count<9){
        playerturn();
    };
    if(win=="X"){
        cout<<"Congratulations "<<player1<<" ,you won";
    }
    else if(win=="O"){
        cout<<"Congratulations "<<player2<<" ,you won";
    }
    else{
        cout<<"It's a Draw";
    }
}


