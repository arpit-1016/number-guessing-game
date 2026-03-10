#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int main ()
{
    char playagain='y';
    while (playagain=='y' || playagain=='Y')
    {

    srand(time(0));
    int secretnumber = rand() % 100 +1;
     cout<<"welecome to number guessing game!"<<endl;
     cout<<" I am thinking of a number between 1 and 100 "<<endl;
     int attempt =0 ;
     int guess=0 ;
     while (guess != secretnumber)
     {
        cout<<"enter the guess";
        cin>> guess;
        attempt ++ ;
        if(secretnumber >1 && secretnumber< 25) cout << "number is between 1 - 25"<<endl;
        if(secretnumber >26 && secretnumber< 50) cout << "number is between 26 - 50"<<endl;
        if(secretnumber >56 && secretnumber< 75) cout << "number is between 56 - 75"<<endl;
        if(secretnumber >76&& secretnumber< 100) cout << "number is between 76 - 100"<<endl;
        if(secretnumber < guess)
        {
            if (secretnumber % 2 == 0)
            {
                cout << "AI HINT : The number you have guessed is too high and the number is even"<<endl ;
            }
            else
             cout << "AI HINT : The number you have guessed is too high and the number is odd "<<endl ;
        }
        else if(secretnumber > guess)
        {
            if (secretnumber % 2 == 0)
            {
                cout << "AI HINT : The number you have guessed is too low and the number is even"<<endl ;
            }
            else
             cout << "AI HINT : The number you have guessed is too low and the number is odd "<<endl ;
        }
        else 
        cout << "congratulations you have guessed the right number in" <<attempt <<"attemts ! "<<endl;

     }
     if( attempt <= 3) cout<< "amazing";
     if( attempt <= 6) cout<< "good";
     if( attempt <= 9) cout<< "better";

      cout << "DO YOU WANT TO PLAY AGAIN (y/n) "<<endl;
      cin >> playagain;
    }

    cout <<"THANK YOU FOR PLAYING GAME ";
     return 0;
}