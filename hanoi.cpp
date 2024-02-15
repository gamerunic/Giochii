#include <iostream>
#include <iomanip>
using namespace std;
void visualizza_matrice(int mat[7][3]) {
    for (int k=0;k<7;k++){
        for(int r=0;r<3;r++)
        cout<<setw(7)<<mat[k][r];
        cout<<endl;
    }
}
int main() {
    int mat[7][3]={{0,0,0}, {1,0,0}, {2,0,0}, {3,0,0}, {4,0,0}, {5,0,0}, {6,0,0}}, pezzo, spostamento = 0, casella_arrivo, i_backup, j_backup, s_backup;
    bool sbagliato;
    char colonna;
    visualizza_matrice(mat);
    while (true) {
    mat[7][0] = 7;
    mat[7][2] = 7;
    spostamento = 0;
    sbagliato = 1;
    cout<<"inserire pezzo e colonna (s) (c) (d) ";
    cin>>pezzo>>colonna;
    switch (pezzo) {
        case 1:
            for (int i=0;i<7;i++) {
                for (int j=0;j<3;j++)
                if (mat[i][j] == 1) {
                    i_backup = i;
                    j_backup = j;
                    if (i == 0 or mat[i-1][j] == 0){
                        spostamento = 1;
                    }
                    else 
                    {
                        cout<<"sopra c'e' il numero: "<<mat[i-1][j]<<endl;
                    }
                }
            }
            break;
        case 2:
            for (int i=0;i<7;i++) {
                for (int j=0;j<3;j++)
                if (mat[i][j] == 2) {
                    i_backup = i;
                    j_backup = j;
                    if (i == 0 or mat[i-1][j] == 0){
                        spostamento = 2;
                    }
                    else 
                    {
                        cout<<"sopra c'e' il numero: "<<mat[i-1][j]<<endl;
                    }
                }
            }
            break;
        case 3:
            for (int i=0;i<7;i++) {
                for (int j=0;j<3;j++)
                if (mat[i][j] == 3) {
                    i_backup = i;
                    j_backup = j;
                    if (i == 0 or mat[i-1][j] == 0){
                        spostamento = 3;
                    }
                    else 
                    {
                        cout<<"sopra c'e' il numero: "<<mat[i-1][j]<<endl;
                    }
                }
            }
            break;
        case 4:
            for (int i=0;i<7;i++) {
                for (int j=0;j<3;j++)
                if (mat[i][j] == 4) {
                    i_backup = i;
                    j_backup = j;
                    if (i == 0 or mat[i-1][j] == 0){
                        spostamento = 4;
                    }
                    else 
                    {
                        cout<<"sopra c'e' il numero: "<<mat[i-1][j]<<endl;
                    }
                }
            }
            break;
        case 5:
            for (int i=0;i<7;i++) {
                for (int j=0;j<3;j++)
                if (mat[i][j] == 5) {
                    i_backup = i;
                    j_backup = j;
                    if (i == 0 or mat[i-1][j] == 0){
                        spostamento = 5;
                    }
                    else 
                    {
                        cout<<"sopra c'e' il numero: "<<mat[i-1][j]<<endl;
                    }
                }
            }
            break;
        case 6:
            for (int i=0;i<7;i++) {
                for (int j=0;j<3;j++)
                if (mat[i][j] == 6) {
                    i_backup = i;
                    j_backup = j;
                    if (i == 0 or mat[i-1][j] == 0){
                        spostamento = 6;
                    }
                    else 
                    {
                        cout<<"sopra c'e' il numero: "<<mat[i-1][j]<<endl;
                    }
                }
            }
            break;
    }
    switch (colonna) {
        case 's':
            for (int s=0;s<7;s++) {
                if ((mat[s][0] == 0) and (mat[s+1][0] != 0 and spostamento < mat[s+1][0])) {
                    casella_arrivo = s;
                    mat[casella_arrivo][0] = spostamento;
                    if (spostamento != 0){
                    mat[i_backup][j_backup] = 0;
                    sbagliato = 0;
                    }
                }
                else if ((mat[s][0] == 0 and mat[s-1][0] != 0 and mat[s-2][0] != 0 and mat[s-3][0] != 0 and mat[s-4][0] != 0 and mat[s-5][0] != 0 and mat[s-6][0] != 0) and (mat[s+1][1] != 0 and spostamento < mat[s+1][1])){
                    mat[0][0] = spostamento;
                    if (spostamento != 0){
                    mat[i_backup][j_backup] = 0;
                    sbagliato = 0;
                    }
                }
            }
            if (sbagliato) {
                cout<<"mossa non valida"<<endl;
            }
            visualizza_matrice(mat);
            break;
        case 'c':
            for (int s=0;s<7;s++) {
                if ((mat[s][1] == 0) and (mat[s+1][1] != 0 and spostamento < mat[s+1][1])) {
                    casella_arrivo = s;
                    mat[casella_arrivo][1] = spostamento;
                    if (spostamento != 0){
                    mat[i_backup][j_backup] = 0;
                    sbagliato = 0;
                    }
                }
                else if ((mat[s][1] == 0 and mat[s-1][1] != 0 and mat[s-2][1] != 0 and mat[s-3][1] != 0 and mat[s-4][1] != 0 and mat[s-5][1] != 0 and mat[s-6][1] != 0) and (mat[s+1][1] != 0 and spostamento < mat[s+1][1])){
                    mat[0][1] = spostamento;
                    if (spostamento != 0){
                    mat[i_backup][j_backup] = 0;
                    sbagliato = 0;
                    }
                }
            }
            if (sbagliato) {
                cout<<"mossa non valida"<<endl;
            }
            visualizza_matrice(mat);
            break;
        case 'd':
            for (int s=0;s<7;s++) {
                if ((mat[s][2] == 0 ) and (mat[s+1][2] != 0 and spostamento < mat[s+1][2])) {
                    casella_arrivo = s;
                    mat[casella_arrivo][2] = spostamento;
                    if (spostamento != 0) {
                    mat[i_backup][j_backup] = 0;
                    sbagliato = 0;
                    }
                }
                else if ((mat[s][2] == 0 and mat[s-1][2] != 0 and mat[s-2][2] != 0 and mat[s-3][2] != 0 and mat[s-4][2] != 0 and mat[s-5][2] != 0 and mat[s-6][2] != 0) and (mat[s+1][2] != 0 and spostamento < mat[s+1][2])){
                    mat[0][2] = spostamento;
                    if (spostamento != 0){
                    mat[i_backup][j_backup] = 0;
                    sbagliato = 0;
                    }
                }
            }
            if (sbagliato) {
                cout<<"mossa non valida"<<endl;
            }
            visualizza_matrice(mat);
            break;
    }
    if (mat[0][2] == 0 and mat[1][2] == 1 and mat[2][2] == 2 and mat[3][2] == 3 and mat[4][2] == 4 and mat[5][2] == 5 and mat[6][2] == 6){
        cout<<"HAI VINTO!";
        break;
    }
    }
}