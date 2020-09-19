#include<iostream>
using namespace std;

void printing(char arr2[][3], int n, int m){
     for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            cout<<arr2[i][j]<<"   ";
        }
        cout<<endl<<endl;
     }
}

void Tic_Tac(char input[][3],int nRows,int mCols){
    int count = 0;
    int i;
    int j;
    char player_1[20];
    char player_2[20];

    cout<<"Player 1, enter your name :";
    cin>>player_1;

    cout<<"Player 2, enter your name :";
    cin>>player_2;

    while(count <= nRows * mCols){
        cout<<player_1<<", Enter your coordinates"<<endl;
        cin>>i>>j;

        if(input[i][j] != '_'){
            cout<<"These coordinates are already occupied. Please enter coordinates again"<<endl;
            continue;
        }
        input[i][j] = '*';
        count++;
        cout<<endl;

        printing(input , nRows , mCols);

        if(input[0][0] == '*' && input[0][1] == '*' && input[0][2] == '*' || input[1][0] =='*' && input[1][1] == '*' && input[1][2] =='*' || input[2][0] == '*' && input[2][1] == '*' && input[2][2] =='*' || input[0][0] =='*' && input[1][0] =='*' && input[2][0] =='*' || input[0][1] =='*' && input[1][1] == '*' && input[2][1] == '*' || input[0][2] == '*' && input[1][2] == '*' && input[2][2] == '*' || input[0][0] == '*' && input[1][1] == '*' && input[2][2] == '*' || input[0][2] == '*' && input[1][1] == '*' && input[2][0] == '*' ){
            cout<<"Congrats,"<<player_1<<" is the winner"<<endl;
            break;
        }

        if(count == nRows * mCols){
            cout<<"It,s a tie"<<endl;
            break;
        }

        cout<<player_2<<" , Enter your coordinates"<<endl;
        cin>>i>>j;

        if(input[i][j] != '_'){

            while(input[i][j] != '_'){
            cout<<"These coordinates are already occupied. Please enter coordinates again"<<endl;
            cin>>i>>j;
            }
        }
        input[i][j] = 'O';
        count++;
        cout<<endl;

        printing(input , nRows , mCols);

         if(input[0][0] == 'O' && input[0][1] == 'O' && input[0][2] == 'O' || input[1][0] =='O' && input[1][1] == 'O' && input[1][2] =='O' || input[2][0] == 'O' && input[2][1] == 'O' && input[2][2] =='O' || input[0][0] =='O' && input[1][0] =='O' && input[2][0] =='O' || input[0][1] =='O' && input[1][1] == 'O' && input[2][1] == 'O' || input[0][2] == 'O' && input[1][2] == 'O' && input[2][2] == 'O' || input[0][0] == 'O' && input[1][1] == 'O' && input[2][2] == 'O' || input[0][2] == 'O' && input[1][1] == 'O' && input[2][0] == 'O'  ){
            cout<<"Congrats,"<< player_2<<" is the winner"<<endl;
            break;
        }
    }

}
int main(){
    char input[3][3];
    int nRows = 3;
    int mCols = 3;

    for(int i = 0; i < nRows; i++){

        for(int j = 0; j < mCols; j++){
            input[i][j] = '_';
        }
    }
     for(int i = 0; i < nRows; i++){

        for(int j = 0; j < mCols; j++){
            cout<<input[i][j]<<"   ";
        }
        cout<<endl<<endl;
     }
     Tic_Tac(input , nRows , mCols);
}
