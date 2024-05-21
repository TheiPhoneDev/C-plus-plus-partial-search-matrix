#include <iostream>

using namespace std;


const int righe=4;
const int colonne=4;

//prototipi
void caricaMatrice(int matrix[righe][colonne]);
void stampaMatrice(int matrix[righe][colonne]);
void ricercaElemento(int matrix[righe][colonne], int dato);



int main() {
  int matrix[righe][colonne];

  int dato;

  cout<<endl;

  caricaMatrice(matrix);

  cout<<endl;

  stampaMatrice(matrix);

  cout<<endl;

  cout<<"Inserisci il dato da cercare: ";
  cin>>dato;

  ricercaElemento(matrix,dato);

  
  
  
  
}

void caricaMatrice(int matrix[righe][colonne]) {

  for(int i=0; i<righe; i++) {
    for(int j=0; j<colonne; j++) {
      cout<<"Inserisci il valore della cella "<<i+1<<";"<<j+1<<": ";
      cin>>matrix[i][j];
    }
  }
  
}


void stampaMatrice(int matrix[righe][colonne]) {

  cout<<endl;

  for(int i=0; i<righe; i++) {
    for(int j=0; j<colonne; j++) {
      cout<<matrix[i][j]<<"\t";
    }
    cout<<endl;
  }
  
  cout<<endl;
  
}


void ricercaElemento(int matrix[righe][colonne], int dato) {

  bool trovato=false;
  int i=0;
  int j=0;



  for (i=0; i<righe; i++) {
    for (j=0; j<colonne; j++) {
        if(matrix[i][j]==dato) {
            trovato = true;
            break;
        }
    }
    if(trovato==true) {
        break;
    }
  }

  if(trovato==true) {
    cout<<"Dato trovato nella cella "<<i+1<<","<<j+1<<endl;
  } else {
    cout<<"Dato non trovato"<<endl;
  }

  
}
