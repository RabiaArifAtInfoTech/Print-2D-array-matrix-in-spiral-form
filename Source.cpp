#include<iostream>

using namespace std;




int* print2DArrayInSpiralForm(int arr[3][3], int row, int col) {
    int* arrTemp = new int [row*col];
    int k = 0;
    int i = 0;
        for (int j = 0; j < col; j++)
        {
            cout << i << " " << j << endl;
            arrTemp[k]= arr[i][j];
            cout << "arrtemp[" << k << "]: " << arrTemp[k]<<endl;
            k++;
        }
    
        cout << "\n\n1st loop done\n\n" << endl;
      
        i++;
        int l = col-1;
        for (int m = i; m < row; m++)
        {
            cout << m << " " << l << endl;
            arrTemp[k] = arr[m][l];
            cout << "arrtemp[" << k << "]: " << arrTemp[k] << endl;
            k++;
        }
        i++;

        cout << "\n\n2nd loop done\n\n" << endl;


        int z = row - 1;
        for (int o = col - 2; o >= 0; o--)
        {
            cout << z << " " << o << endl;
            arrTemp[k] = arr[z][o];
            cout << "arrtemp[" << k << "]: " << arrTemp[k] << endl;
            k++;
        }
        i++;

        cout << "\n\n3rd loop done\n\n" << endl;

        int y = 0;
        for (int u = row - 2; u > 0; u--)
        {
            cout << u << " " << y << endl;
            arrTemp[k] = arr[u][y];
            cout << "arrtemp[" << k << "]: " << arrTemp[k] << endl;
            k++;
        }

        i++;

        cout << "\n\n4th loop done\n\n" << endl;

        int c = 1;
        for (int h = 1; h < col - 1; h++)
        {
            cout << c << " " << h << endl;
            arrTemp[k] = arr[c][h];
            cout << "arrtemp[" << k << "]: " << arrTemp[k] << endl;
            k++;
        }

    

    return arrTemp;
}




int main()
{
	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    int* matrix = print2DArrayInSpiralForm(arr, 3,3);
    cout << "\n\n\n";
    for (int i = 0; i < 9; i++) {
        //for (int j = 0; j < 3; j++) {
            cout << matrix[i] << " ";
        //}
      
    }



	cout << "\n\n\n";
	return 0;
}
