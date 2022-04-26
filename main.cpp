#include <iostream>
#include <fstream>
using namespace std;

char konwersja(char x,char klawiatura);
int main()
{   ifstream file; string nazwa;char znak,klawiatura;int licznik = 0;

    cout<<"podaj nazwe lub sciezke pliku";
    cin>>nazwa;
    cout<<"podaj jaki chcesz znak wyszukac w pliku\n";
    cin>>klawiatura;
    file.open (nazwa);
    if(!file.is_open())
    {
        cout<<"otwarcie pliku sie nie powiodlo\n";
        exit(-1);
    }
    while(file>>znak)//wypisujemy znaki z pliku
    {  
    
        
    
        
          if(klawiatura==konwersja(znak,klawiatura))
          {
              licznik++;

          }
    }    
    cout<<"Znak "<<klawiatura<<" wystepuej "<<licznik<<" w pliku\n";
    file.close();
    return 0;
}

char konwersja(char x,char y)
{
   if(y>=65&&y<=90)
   {
        if(122>=x&&x>=97)
        {
            return char(x-32);
        }
        else{
            return x;
        }
   }
   if(122>=y&&y>=97)
   {
       if(90>=x&&x>=65)
        {
            return char(x+32);
        }
        else{
            return x;
        }
   }
  
          
             
          

          
}