#include<iostream>
using namespace std;

class matrix
{
    int mat[100][100], i, j;
    static int count;

public:
    void getMatrix()
    {
        cout<<"Enter the element of "<<count++<<" matrix: "<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>mat[i][j];
            }
        }
    }

    matrix operator+(matrix m)
    {
        matrix temp;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return temp;
    }

    void displayMatrix()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<mat[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
};

int matrix::count=1;

int main()
{
    matrix A, B, sum;
    A.getMatrix();
    B.getMatrix();

    cout<<"Matrix A is\n";
    A.displayMatrix();

    cout<<"\nMatrix B is\n";
    B.displayMatrix();
    
    sum=A+B;
    cout<<"A+B matrix is\n";
    sum.displayMatrix();
    
    return 0;
}
