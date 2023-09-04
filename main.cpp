#include <iostream>
using namespace std;

string arr[3][3]={"1 ","2 ","3 ","4 ","5 ","6 ","7 ","8 ","9 "};
string med[4][4]={"1 ","2 ","3 ","4 ","5 ","6 ","7 ","8 ","9 ","10","11","12","13","14","15","16"};
string har[5][5]={"1 ","2 ","3 ","4 ","5 ","6 ","7 ","8 ","9 ","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25" };

bool turn=true;
int pos;
string ch;
string win;
string player1, player2;
int count=0;
int level=0;



bool gameL3isfinish(){
    //for level 3
    bool game= true;
    for(int i=0;i<5;i++){
        // vertically
        if(har[0][i] ==har[1][i] && har[0][i] == har[2][i]&& har[0][i]==har[3][i] && har[0][i]==har[4][i]){
            win=har[0][i];
            game=false;
            break;
        }
    }
    for(int i=0;i<4;i++){
        //horizontally 
        if (har[i][0]==har[i][1] && har[i][1]==har[i][2] && har[i][2]== har[i][3] && har[i][3]== har[i][4]){
            win=har[i][0];
            game=false;
            break;
        }
    }
    //Left diagonal
    if(har[0][0]==har[1][1] && har[0][0] == har[2][2]&& har[0][0] ==har[3][3] && har[0][0]== har[4][4] ){
        win=har[1][1];
        game=false;
    }
    //Right diagonal
    else if (har[2][2]==har[0][4] && har[2][2]==har[1][3] && har[2][2]==har[3][1] && har[2][2]==har[4][0]){
        win=har[2][2];
        game=false;
    }

    return game;
    
}
bool gameL2isfinish(){
    //for level 2
    bool game= true;
    for(int i=0;i<4;i++){
        //vertically
        if(med[0][i] ==med[1][i] && med[0][i] == med[2][i]&& med[0][i]==med[3][i] ){
            win=med[0][i];
            game=false;
            break;
        }
    }
    for(int i=0;i<4;i++){
        // horizontally
        if (med[i][0]==med[i][1] && med[i][1]==med[i][2] && med[i][2]== med[i][3] ){
            win=med[i][0];
            game=false;
            cout<<"\""<<win<<"\""<<endl;
            break;
        }
    }
    //Left Diagonal
    if(med[0][0]==med[1][1] && med[0][0] == med[2][2]&& med[0][0] ==med[3][3] ){
        win=med[1][1];
        game=false;
    }
    //Right diagonal
    else if (med[0][3]==med[1][2] && med[2][1]==med[1][2] && med[2][1]==med[3][0]){
        win=med[0][3];
        game=false;
    }

    return game;
    
}

bool gameL1isfinish(){
    bool game=true;
    //for level 1
    
    for(int i=0;i<3;i++){
        //checking horizontally or vertically
        if(arr[0][i] ==arr[1][i] && arr[0][i] == arr[2][i] || arr[i][0]== arr[i][1] && arr[i][0]==arr[i][2]){
            win=arr[0][i];
            game=false;
            break;
        }
    }
    //checking diagonally
    if((arr[0][0]==arr[1][1] && arr[0][0] ==arr[2][2] )|| (arr[0][2]==arr[1][1] && arr[2][0]==arr[1][1])){
        win=arr[1][1];
        game=false;
    }
    return game;
}

void displayToe(int level){
    //3*3 
    if(level==1){

        cout<<endl<<"     |     |      "<<endl;
        cout<<"  "<<arr[0][0]<<" |  "<<arr[0][1]<<" |  "<<arr[0][2]<<"    "<<endl;
        cout<<"_____|_____|_____"<<endl;
        cout<<"     |     |      "<<endl;
        cout<<"  "<<arr[1][0]<<" |  "<<arr[1][1]<<" |  "<<arr[1][2]<<"    "<<endl;
        cout<<"_____|_____|_____"<<endl;
        cout<<"     |     |      "<<endl;
        cout<<"  "<<arr[2][0]<<" |  "<<arr[2][1]<<" |  "<<arr[2][2]<<"    "<<endl;
        cout<<"     |     |      "<<endl;
    }

    //4*4
    else if(level==2){

        cout<<endl<<"     |     |     |    "<<endl;
        cout<<"  "<<med[0][0] <<" |  "<<med[0][1]<<" |  "<<med[0][2]<<" |  "<<med[0][3]<<"  "<<endl;
        cout<<"_____|_____|_____|_____"<<endl;
        cout<<"     |     |     |    "<<endl;
        cout<<"  "<<med[1][0] <<" |  "<<med[1][1]<<" |  "<<med[1][2]<<" |  "<<med[1][3]<<"  "<<endl;
        cout<<"_____|_____|_____|_____"<<endl;
        cout<<"     |     |     |    "<<endl;
        cout<<"  "<<med[2][0] <<" |  "<<med[2][1]<<" |  "<<med[2][2]<<" |  "<<med[2][3]<<"  "<<endl;
        cout<<"_____|_____|_____|_____"<<endl;
        cout<<"     |     |     |    "<<endl;
        cout<<"  "<<med[3][0] <<" |  "<<med[3][1]<<" |  "<<med[3][2]<<" |  "<<med[3][3]<<"  "<<endl;
        cout<<"     |     |     |    "<<endl;

    }

    //5*5
    else if(level==3){

        cout<<endl<<"     |     |     |     |     "<<endl;
        cout<<"  "<<har[0][0] <<" |  "<<har[0][1]<<" |  "<<har[0][2]<<" |  "<<har[0][3]<<" |  "<<har[0][4]<<"  "<<endl;
        cout<<"_____|_____|_____|_____|_____"<<endl;
        cout<<"     |     |     |     |     "<<endl;
        cout<<"  "<<har[1][0] <<" |  "<<har[1][1]<<" |  "<<har[1][2]<<" |  "<<har[1][3]<<" |  "<<har[1][4]<<"  "<<endl;
        cout<<"_____|_____|_____|_____|_____"<<endl;
        cout<<"     |     |     |     |     "<<endl;
        cout<<"  "<<har[2][0] <<" |  "<<har[2][1]<<" |  "<<har[2][2]<<" |  "<<har[2][3]<<" |  "<<har[2][4]<<"  "<<endl;
        cout<<"_____|_____|_____|_____|_____"<<endl;
        cout<<"     |     |     |     |     "<<endl;
        cout<<"  "<<har[3][0] <<" |  "<<har[3][1]<<" |  "<<har[3][2]<<" |  "<<har[3][3]<<" |  "<<har[3][4]<<"  "<<endl;
        cout<<"_____|_____|_____|_____|_____"<<endl;
        cout<<"     |     |     |     |     "<<endl;
        cout<<"  "<<har[4][0] <<" |  "<<har[4][1]<<" |  "<<har[4][2]<<" |  "<<har[4][3]<<" |  "<<har[4][4]<<"  "<<endl;
        cout<<"     |     |     |     |    "<<endl;

    }

}

void playerturn(){
    //choosing position for player
    if(turn==true){
        cout<<player1<<"'s turn :-";
        cin>>pos;
        ch="X ";
        
    }
    else if(turn==false){
        cout<<player2<<"'s turn :-";
        cin>>pos;
        ch="O ";
        
    }
    if(pos<=0){
        cout<<"Invalid Position"<<endl;
        playerturn();
    }
    //easy level
    if(level==1){

        if(0<pos<=3 && arr[0][pos-1]!="X " &&arr[0][pos-1]!="O "){
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
    }
    //medium level
    else if(level==2){

        if(0<pos<=4 && med[0][pos-1]!="X " &&med[0][pos-1]!="O "){
            med[0][pos-1]=ch;
            turn=!turn;
            count++;
        }
        else if(pos>4 && pos<=8 &&med[1][pos-5]!="X " &&med[1][pos-5]!="O " ){
            med[1][pos-5]=ch;
            turn=!turn;
            count++;
        }
        else if(pos>8 && pos<=12 &&med[2][pos-9]!="X " &&med[2][pos-9]!="O "){
            if(pos==9){
                med[2][pos-9]=ch;
                turn=!turn;
                count++;
            }
            else{
                
                med[2][pos-9]=ch;
                turn=!turn;
                count++;
            }
        }
        else if(pos>12 && pos<=16 &&med[3][pos-13]!="X " &&med[3][pos-13]!="O "){
            
            med[3][pos-13]=ch;
            turn=!turn;
            count++;
        }
        else{
            cout<<"Invalid Position"<<endl;
            playerturn();
        }
    }
    //Hard Level
    else if(level==3){

        if(0<pos<=5 && har[0][pos-1]!="X " &&har[0][pos-1]!="O "){
            har[0][pos-1]=ch;
            turn=!turn;
            count++;
        }
        else if(pos>5 && pos<=10 &&har[1][pos-6]!="X " &&har[1][pos-6]!="O " ){
            har[1][pos-6]=ch;
            turn=!turn;
            count++;
        }
        else if(pos>10 && pos<=15 &&har[2][pos-11]!="X " &&har[2][pos-11]!="O "){
            
            har[2][pos-11]=ch;
            turn=!turn;
            count++;
        
        }
        else if(pos>15 && pos<=20 &&har[3][pos-16]!="X " &&har[3][pos-16]!="O "){
            
            har[3][pos-16]=ch;
            turn=!turn;
            count++;
        }
        else if(pos>20 && pos<=25 &&har[4][pos-21]!="X " &&har[4][pos-21]!="O "){
            
            har[4][pos-21]=ch;
            turn=!turn;
            count++;
        }

        else{
            cout<<"Invalid Position"<<endl;
            playerturn();
        }
    }

    displayToe(level);
}

int main(){
    //Welcome Menu
    cout<<"Welcome to TicTacToe"<<endl;
    cout<<"Rules :- Just Press number of position , you want to place your turn1"<<endl;
    cout<<"Level :-"<<endl<<"1. Easy(3*3)"<<endl<<"2. Medium(4*4)"<<endl <<"3. Hard(5*5)"<<endl<<"Press Number: ";
    cin>>level;
    cout<<"1. Player 1 (X)"<<endl<<"2. Player 2 (O)"<<endl;
    cout<<"Player 1 name:- "<<endl;
    cin>>player1;
    cout<<"Player 2 name:- "<<endl;
    cin>>player2;
	displayToe(level);

    //Easy Level
    if(level==1){
        while(gameL1isfinish() && count<9){
            playerturn();
        }
    }

    //Medium Level 
    else if(level==2){
        while(gameL2isfinish() && count<16){
            playerturn();
        }
    }

    //Hard Level
    else if(level==3){
        while(gameL3isfinish() && count<25){
            playerturn();
        }
    }
    else{
        cout<<"Invalid Level"<<endl;
    }

    //winner
    if(win=="X "){
    cout<<"Congratulations "<<player1<<" ,you won";
    }
    else if(win=="O "){
    cout<<"Congratulations "<<player2<<" ,you won";
    }
    else{
    cout<<"It's a Draw";
    }
    
}


