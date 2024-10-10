//! TODO: DEBBUGGER NON PRONTO

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

int genera_numero_casuale() 
{
    srand(unsigned(time(NULL)));
    int numero_generato = ((rand() % 3) + 1);
    switch (numero_generato)
    {
        case 1:
            numero_generato = 2;
            break;
        case 2:
            numero_generato = 4;
            break;
        case 3:
            numero_generato = 8;
            break;
    }
    return numero_generato;
}

void coordinate_casuali(int& a, int& b)  
{
    srand(unsigned(time(NULL)));
    int numero_generato_1 = (rand() % 4);
    int numero_generato_2 = (rand() % 4);
    a = numero_generato_1;
    b = numero_generato_2;
}

int cambia_char(char carattere)
{
    int intero;
    switch (carattere)
    {
        case 'r':
            intero = 1;
            break;
        case 'l':
            intero = 2;
            break;
        case 'u':
            intero = 3;
            break;
        case 'd':
            intero = 4;
            break;
    }
    return intero;
}

void visualizza_matrice(int mat[4][4])
{
    for(int i= 0; i<4; i++)
    {
        for(int j= 0; j<4; j++)
        {
            cout<<setw(4)<<mat[i][j];
        }
        cout<<endl;
    }
}

int main()  
{
    int mat[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}}, x, y, x2, y2, arrivo0, arrivo1, arrivo2, arrivo3,temp = 0, count= 1,turno=1,tentativi=0;
    bool q = 0;
    coordinate_casuali(x, y);
    // !assegnazione importante disabilitata per test
    mat[x][y] = 2;
    coordinate_casuali(x2, y2);
    while (x2 == x or y2 == y)
    {
        coordinate_casuali(x2, y2);
    }
    //! assegnazione importante disabilitata per test
    mat[x2][y2] = 2;
    visualizza_matrice(mat);
    char mossa_carattere;
    while (turno<15)
    {
        cout<<"inserire mossa (r)destra (l)sinistra (u)sopra (d)sotto o finisici con (q)uit"<<endl;
        cin>>mossa_carattere;
        int mossa=1;
        if (mossa_carattere != 'q')
        {
        mossa = cambia_char(mossa_carattere);
        }
        else
        {
            break;
        }
        switch (mossa)
        {
            case 1:
                for(int k=0; k<4;k++)
                {
                    for(int i = 3; i>=0; i--)
                    {
                        if(mat[k][i] != 0 and i != 3)
                        {
                            
                            while (((mat[k][i+count] == 0) or (mat[k][i+count] == mat[k][i+count-1])) and i+count<4)
                            {
                                if (mat[k][i+count] != mat[k][i+count-1])
                                {
                                    mat[k][i+count] = mat[k][i+(count-1)];
                                    mat[k][i+(count-1)] = 0;
                                    count++;
                                }
                                else
                                {
                                    mat[k][i+count] = mat[k][i+(count-1)]*2;
                                    mat[k][i+(count-1)] = 0;
                                    count++;
                                }
                            }
                            count = 1;
                        }
                    }
                }
                break;
            case 2:
                for(int k=0; k<4;k++)
                {
                    for(int i = 0; i<4; i++)
                    {
                        if(mat[k][i] != 0 and i != 0)
                        {
                            temp = mat[k][i];
                            while((mat[k][i-count] == 0 or mat[k][(i-count)+1]==mat[k][i-count]) and (i-count)>=0)
                            {
                                if(mat[k][(i-count)+1]!=mat[k][i-count])
                                {
                                    mat[k][i-count]= mat[k][(i-count)+1];
                                    mat[k][(i-count)+1] =0;
                                    count++;
                                }
                                else
                                {
                                    mat[k][i-count]=mat[k][(i-count)+1]*2;
                                    mat[k][(i-count)+1] =0;
                                    count++;
                                }
                            }
                            count =1;
                        }
                    }
                }
                break;
            case 3:
                for(int k=0; k<4; k++)
                {
                        for(int i = 0; i<4; i++)
                    {
                        if(mat[i][k] != 0 and i != 0)
                        {
                            temp = mat[i][k];
                            while((mat[i-count][k] == 0 or mat[(i-count)+1][k]==mat[i-count][k]) and (i-count)>=0)
                            {
                                if(mat[(i-count)+1][k]!=mat[i-count][k])
                                {
                                    mat[i-count][k]= mat[(i-count)+1][k];
                                    mat[(i-count)+1][k] =0;
                                    count++;
                                }
                                else
                                {
                                    mat[i-count][k]=mat[(i-count)+1][k]*2;
                                    mat[(i-count)+1][k] =0;
                                    count++;
                                }
                            }
                            count =1;
                        }
                    }
                }
                break;
            case 4:
                for(int k=0;k<4;k++)
                {
                    for(int i = 3; i>=0; i--)
                    {
                        if(mat[i][k] != 0 and i != 3)
                        {
                            
                            while (((mat[i+count][k] == 0) or (mat[i+count][k] == mat[i+count-1][k])) and i+count<4)
                            {
                                if (mat[i+count][k] != mat[i+count-1][k])
                                {
                                    mat[i+count][k] = mat[i+(count)-1][k];
                                    mat[i+(count-1)][k] = 0;
                                    count++;
                                }
                                else
                                {
                                    mat[i+count][k] = mat[i+(count-1)][k]*2;
                                    mat[i+(count-1)][k] = 0;
                                    count++;
                                }
                            }
                            count = 1;
                        }
                    }
                }
                break;
        }
        if(turno == 1)
        {
            coordinate_casuali(x,y);
            while(mat[x][y] != 0)
            {
                coordinate_casuali(x,y);
            }
            mat[x][y]=2;
        }
        else if(turno==2)
        {
            coordinate_casuali(x,y);
            while(mat[x][y] != 0)
            {
                coordinate_casuali(x,y);
            }
            mat[x][y]=4;
        }
        else
        {
            coordinate_casuali(x,y);
            while(mat[x][y] != 0 and tentativi<16)
            {
                coordinate_casuali(x,y);
                tentativi++;
            }
            tentativi=0;
            mat[x][y]=genera_numero_casuale();
        }
        turno++;
        visualizza_matrice(mat);
    }
}
