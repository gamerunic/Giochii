#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	int quit;
    bool mossa_valida_x = 1, mossa_valida_o = 1, condizione_vittoria = 0, check_pareggio = 0;
	char mat [3][3]={{'0','1','2'},{'3','4','5'},{'6','7','8'}};
	for (int k=0; k<3;k++) {
		for (int r=0;r<3;r++)
		cout<<setw(3)<<mat[k][r];
		cout<<endl;
	}
    cout<<"'x' inserisci un numero presente nella tabella per poter giocare: ";
	cin>>n;
	while (true) {
        if (mossa_valida_x) {
    		switch (n) {
                case 0:
                if (mat[0][0] != 'x' and mat[0][0] != 'o') {
                mat[0][0] = 'x';
                mossa_valida_o= 1;
                }
                else {
                    cout<<"mossa non valida"<<endl;
                    mossa_valida_o = 0;
                }
                break;
                case 1:
                if (mat[0][1] != 'x' and mat[0][1] != 'o') {
                mat[0][1] = 'x';
                mossa_valida_o = 1;
                }
                else {
                    cout<<"mossa non valida"<<endl;
                    mossa_valida_o = 0;
                }
                break;
                case 2:
                if (mat[0][2] != 'x' and mat[0][2] != 'o') {
                mat[0][2] = 'x';
              mossa_valida_o = 1;
                }
                else {
                    cout<<"mossa non valida"<<endl;
                    mossa_valida_o = 0;
                }
                break;
                case 3:
                if (mat[1][0] != 'x' and mat[1][0] != 'o') {
                mat[1][0] = 'x';
                mossa_valida_o = 1;
                }
                else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_o = 0;
                }
                break;
                case 4:
                if (mat[1][1] != 'x' and mat[1][1] != 'o') {
                mat[1][1] = 'x';
                mossa_valida_o = 1;
                }
                else {
                    cout<<"mossa non valida"<<endl;
                    mossa_valida_o = 0;
                }
                break;
                case 5:
                if (mat[1][2] != 'x' and mat[1][2] != 'o') {
                mat[1][2] = 'x';
                mossa_valida_o = 1;
                }
                else {
                    cout<<"mossa non valida"<<endl;
                    mossa_valida_o = 0;
                }
                break;
                case 6:
                if (mat[2][0] != 'x' and mat[2][0] != 'o') {
                mat[2][0] = 'x';
                mossa_valida_o = 1;
                }
                else {
                    cout<<"mossa non valida"<<endl;
                    mossa_valida_o = 0;
                }
                break;
                case 7:
                if (mat[2][1] != 'x' and mat[2][1] != 'o') {
                mat[2][1] = 'x';
                mossa_valida_o = 1;
                }
                else {
                    cout<<"mossa non valida"<<endl;
                    mossa_valida_o = 0;
                }
                break;
                case 8:
                if (mat[2][2] != 'x' and mat[2][2] != 'o') {
                mat[2][2] = 'x';
                mossa_valida_o = 1;
                }
                else {
                    cout<<"mossa non valida"<<endl;
                    mossa_valida_o = 0;
                }
                break;
            }
            condizione_vittoria = ((mat[0][0] == mat[0][1] and mat[0][1]== mat[0][2]) or (mat[1][0] == mat[1][1] and mat[1][1]== mat[1][2]) or (mat[2][0] == mat[2][1] and mat[2][1]== mat[2][2]) or (mat[0][0] == mat[1][0] and mat[1][0]== mat[2][0]) or (mat[0][1] == mat[1][1] and mat[1][1]== mat[2][1]) or (mat[0][2] == mat[1][2] and mat[1][2]== mat[2][2]) or (mat[0][0] == mat[1][1] and mat[1][1]== mat[2][2]) or (mat[0][2] == mat[1][1] and mat[1][1]== mat[2][0]));
            if (condizione_vittoria){
                for (int k=0; k<3;k++) {
		            for (int r=0;r<3;r++)
		            cout<<setw(3)<<mat[k][r];
		            cout<<endl;
	            }
                cout<<"vittoria per 'x'";
                break;
            }
            check_pareggio = ((mat[0][0] == 'x' or mat[0][0] == 'o') and (mat[0][1] == 'x' or mat[0][1] == 'o') and (mat[0][2] == 'x' or mat[0][2] == 'o') and (mat[1][0] == 'x' or mat[1][0] == 'o') and (mat[1][1] == 'x' or mat[1][1] == 'o') and (mat[1][2] == 'x' or mat[1][2] == 'o') and (mat[2][0] == 'x' or mat[2][0] == 'o') and (mat[2][1] == 'x' or mat[2][1] == 'o') and (mat[2][2] == 'x' or mat[2][2] == 'o'));
            if (check_pareggio) {
                for (int k=0; k<3;k++) {
		            for (int r=0;r<3;r++)
		            cout<<setw(3)<<mat[k][r];
		            cout<<endl;
	            }
                cout<<"pareggio";
                break;
            }
        }
        
        if (mossa_valida_o) {
			for (int k=0; k<3;k++) {
	    	for (int r=0;r<3;r++)
		    cout<<setw(3)<<mat[k][r];
	    	cout<<endl;
        	}
            cout<<"'o' inserisci un numero presente nella tabella per poter giocare: ";
	    	cin>>n;
        }
		if (mossa_valida_o) {
            switch (n) {
            case 0:
            if (mat[0][0] != 'x' and mat[0][0] != 'o') {
            mat[0][0] = 'o';
            mossa_valida_x = 1;
            }
            else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_x = 0;
            }
            break;
            case 1:
            if (mat[0][1] != 'x' and mat[0][1] != 'o') {
            mat[0][1] = 'o';
            mossa_valida_x = 1;
            }
            else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_x = 0;
            }
            break;
            case 2:
            if (mat[0][2] != 'x' and mat[0][2] != 'o') {
            mat[0][2] = 'o';
            mossa_valida_x = 1;
            }
            else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_x = 0;
            }
            break;
            case 3:
            if (mat[1][0] != 'x' and mat[1][0] != 'o') {
            mat[1][0] = 'o';
            mossa_valida_x = 1;
            }
            else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_x = 0;
            }
            break;
            case 4:
            if (mat[1][1] != 'x' and mat[1][1] != 'o') {
            mat[1][1] = 'o';
            mossa_valida_x = 1;
            }
            else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_x = 0;
            }
            break;
            case 5:
            if (mat[1][2] != 'x' and mat[1][2] != 'o') {
            mat[1][2] = 'o';
            mossa_valida_x = 1;
            }
            else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_x = 0;
            }
            break;
            case 6:
            if (mat[2][0] != 'x' and mat[2][0] != 'o') {
            mat[2][0] = 'o';
            mossa_valida_x = 1;
            }
            else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_x = 0;
            }
            break;
            case 7:
            if (mat[2][1] != 'x' and mat[2][1] != 'o') {
            mat[2][1] = 'o';
            mossa_valida_x = 1;
            }
            else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_x = 0;
            }
            break;
            case 8:
            if (mat[2][2] != 'x' and mat[2][2] != 'o') {
            mat[2][2] = 'o';
            mossa_valida_x = 1;
            }
            else {
                cout<<"mossa non valida"<<endl;
                mossa_valida_x = 0;
            }
            break;
        }
        condizione_vittoria = ((mat[0][0] == mat[0][1] and mat[0][1]== mat[0][2]) or (mat[1][0] == mat[1][1] and mat[1][1]== mat[1][2]) or (mat[2][0] == mat[2][1] and mat[2][1]== mat[2][2]) or (mat[0][0] == mat[1][0] and mat[1][0]== mat[2][0]) or (mat[0][1] == mat[1][1] and mat[1][1]== mat[2][1]) or (mat[0][2] == mat[1][2] and mat[1][2]== mat[2][2]) or (mat[0][0] == mat[1][1] and mat[1][1]== mat[2][2]) or (mat[0][2] == mat[1][1] and mat[1][1]== mat[2][0]));
        if (condizione_vittoria){
            for (int k=0; k<3;k++)
	{
		for (int r=0;r<3;r++)
		cout<<setw(3)<<mat[k][r];
		cout<<endl;
	}
            cout<<"vittoria per 'o'";
            break;
        }
        check_pareggio = ((mat[0][0] == 'x' or mat[0][0] == 'o') and (mat[0][1] == 'x' or mat[0][1] == 'o') and (mat[0][2] == 'x' or mat[0][2] == 'o') and (mat[1][0] == 'x' or mat[1][0] == 'o') and (mat[1][1] == 'x' or mat[1][1] == 'o') and (mat[1][2] == 'x' or mat[1][2] == 'o') and (mat[2][0] == 'x' or mat[2][0] == 'o') and (mat[2][1] == 'x' or mat[2][1] == 'o') and (mat[2][2] == 'x' or mat[2][2] == 'o'));
        if (check_pareggio) {
            cout<<"pareggio";
            break;
        }
        if (mossa_valida_x){
			for (int k=0; k<3;k++)
	{
		for (int r=0;r<3;r++)
		cout<<setw(3)<<mat[k][r];
		cout<<endl;

	}
        cout<<"'x' inserisci un numero presente nella tabella per poter giocare: ";
		cin>>n;
        }
		}
    }
}