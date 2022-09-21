#include <iostream>
using namespace std;

const int MAX = 30;

void transposta(int mat[][MAX], int transp[][MAX], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			transp[j][i] = mat[i][j];
		}
	}
    for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << transp[i][j] << " ";
		}
		cout << endl;
	}
}
int main () {
	int n, m, mat[MAX][MAX], transp[MAX][MAX];

	cin >> n >> m;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mat[i][j];
		}
	}
    cout << "Matriz" << endl;
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Transposta" << endl;
    transposta(mat, transp, n, m);

return 0;
}
