#include <iostream>
#include <iomanip>
using namespace std;

void mostraMatrice(char mat[7][7])
{
    cout<<"\t"<<"-----------------------------"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<"\t"<<"|";
        for(int j=0;j<7;j++)
        {
            cout<<" "<<mat[i][j]<<" |";
        }
        cout<<endl<<"\t"<<"-----------------------------"<<endl;
    }
}
int main()
{
    char mat[7][7] ={
    {' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' '},
    {'1','2','3','4','5','6','7'}}
    ;
    int scelta=5, turno=0, colonna, salva_c, salva_colonna;
    char giocatore;
    mostraMatrice(mat);
    while (true)
    {
        if(turno%2==0)
        {
            giocatore='R';
        }
        else
        {
            giocatore='G';
        }
        int c=0, orizzontali=0,verticali=0,diagonale_acuta=0,diagonale_ottusa=0;
        int vittoria_diagonale_ottusa=0,vittoria_diagonale_acuta=0, vittoria_orizzontale=0, vittoria_verticale=0;
        bool mossa_non_valida=1;
        cout<<"turno: "<<giocatore<<" inserire la colonna ";
        cin>>scelta;
        colonna = scelta - 1;
        while(c<6)
        {
            if(mat[c][colonna]==' ')
            {
                
                mat[c][colonna]= giocatore;
                salva_c=c;
                salva_colonna=colonna;
                mat[c-1][colonna]= ' ';
                mossa_non_valida=0;
            }
            c++;
        }
        if(mossa_non_valida)
        {
            cout<<"mossa non valida"<<endl;
        }
        else
        {
            turno++;
        }
        mostraMatrice(mat);
        //*vittoria orizzontale
        while(mat[salva_c][salva_colonna+orizzontali] == giocatore and salva_c>=0 and salva_colonna+orizzontali>=0 and salva_colonna+orizzontali<=6 and salva_c<=6)
        {
            vittoria_orizzontale++;
            orizzontali++;
        }
        orizzontali=1;
        while(mat[salva_c][salva_colonna-orizzontali] == giocatore and salva_colonna-orizzontali>=0 and salva_colonna-orizzontali<=6)
        {
            vittoria_orizzontale++;
            orizzontali++;
        }
        //* vittoria diagonale ottusa
        while(mat[salva_c+diagonale_ottusa][salva_colonna+diagonale_ottusa] == giocatore and salva_colonna+diagonale_ottusa<=6 and salva_colonna+diagonale_ottusa>=0 and salva_colonna+diagonale_ottusa<=6 and salva_colonna+diagonale_ottusa>=0)
        {
            vittoria_diagonale_ottusa++;
            diagonale_ottusa++;
        }
        diagonale_ottusa=1;
        while(mat[salva_c-diagonale_ottusa][salva_colonna-diagonale_ottusa] == giocatore and salva_c-diagonale_ottusa>=0 and salva_c-diagonale_ottusa<=6 and salva_colonna-diagonale_ottusa<=6 and salva_colonna-diagonale_ottusa>=0)
        {
            vittoria_diagonale_ottusa++;
            diagonale_ottusa++;
        }
        //* vittoria diagonale acuta
        while(mat[salva_c-diagonale_acuta][salva_colonna+diagonale_acuta] == giocatore and salva_c-diagonale_acuta<=6 and salva_c-diagonale_acuta>=0 and salva_colonna+diagonale_acuta>=0 and salva_colonna+diagonale_acuta<=6)
        {
            vittoria_diagonale_acuta++;
            diagonale_acuta++;
        }
        diagonale_acuta=1;
        while(mat[salva_c+diagonale_acuta][salva_colonna-diagonale_acuta] == giocatore and salva_c+diagonale_acuta<=6 and salva_c+diagonale_acuta>=0 and salva_colonna-diagonale_acuta>=0 and salva_colonna-diagonale_acuta<=6)
        {
            vittoria_diagonale_acuta++;
            diagonale_acuta++;
        }
        //* vittoria verticale
        while(mat[salva_c+verticali][salva_colonna] == giocatore and salva_c+verticali>=0 and salva_c+verticali<=6)
        {
            vittoria_verticale++;
            verticali++;
        }
        if(vittoria_orizzontale >= 4 or vittoria_verticale >= 4 or vittoria_diagonale_ottusa >= 4 or vittoria_diagonale_acuta >=4)
        {
            cout<<"i "<<giocatore<<" hanno vinto";
            break;
        }
    }
}