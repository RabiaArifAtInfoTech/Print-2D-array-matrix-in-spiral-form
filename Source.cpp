#include<iostream>
using namespace std;

int k = 0;

void print2DArrayInSpiralForm(int **arr, int rowI, int colI, int rowF, int colF) {

    int element;

    if (rowI >= rowF || colI >= colF)
    {
        return;
    }

    int i = rowI;

    //cout << "1st row\n\n" << endl;

    for (int j = colI; j < colF; j++)
    {
       // cout << i << " " << j << endl;
        element = arr[i][j];
        cout << element << " ";
      //  cout << "arrtemp[" << k << "]: " << element << endl;
        k++;
    }

   // cout << "\n\nLast col\n\n" << endl;

    int l = colF - 1;
    for (int m = rowI + 1; m < rowF; m++)
    {
      //  cout << m << " " << l << endl;
        element = arr[m][l];
        cout << element << " ";
        //  cout << "arrtemp[" << k << "]: " << element << endl;
        k++;
    }
  

   
  //  cout << "\n\nlast row\n\n" << endl;


    int z = rowF - 1;
    for (int o = colF - 2; o >= colI; o--)
    {
       // cout << z << " " << o << endl;
        element = arr[z][o];
        cout << element << " ";
        //  cout << "arrtemp[" << k << "]: " << element << endl;
        k++;
    }
   

  //  cout << "\n\nFirst col\n\n" << endl;

    int y = colI;
    for (int u = rowF - 2; u > rowI; u--)
    {
       // cout << u << " " << y << endl;
        element = arr[u][y];
        cout << element <<" ";
        //  cout << "arrtemp[" << k << "]: " << element << endl;
        k++;
    }

    print2DArrayInSpiralForm(arr, rowI + 1, colI + 1, rowF - 1, colF - 1);

}




int main()
{
    //int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

 //   int* matrix = print2DArrayInSpiralForm(arr, 3,3);
 //   cout << "\n\n\n";
 //   for (int i = 0; i < 9; i++) {
 //       //for (int j = 0; j < 3; j++) {
 //           cout << matrix[i] << " ";
 //       //}
 //     
 //   }
    int** arr = new int* [4];
    for (int i = 0; i < 4; i++) {
        arr[i] = new int[4];
    }

    // Initialize the array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = i * 4 + j + 1;
        }
    }

    print2DArrayInSpiralForm(arr, 0, 0, 4, 4);

    cout << "\n\n\n";

    int** arr1 = new int* [5];
    for (int i = 0; i < 5; i++) {
        arr1[i] = new int[5];
    }

    // Initialize the array
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr1[i][j] = i * 5 + j + 1;
        }
    }

    print2DArrayInSpiralForm(arr1, 0, 0, 5, 5);


  
    cout << "\n\n\n";
    return 0;
}
