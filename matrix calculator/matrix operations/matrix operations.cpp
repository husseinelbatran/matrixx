#include<iostream>
using namespace std;
int main()
{
    int bigger = 0;
    int lock = 0;
    //operation variables
    string operation;
    // variables of first matrix
    int first_matrix_rows = 0;
    int first_matrix_columns = 0;
    int first_matrix[100][100] = { 0 };
    // variables of second matrix
    int second_matrix_rows = 0;
    int second_matrix_columns = 0;
    int second_matrix[100][100] = { 0 };
    // variables of result matrix
    int result_matrix_rows = 0;
    int result_matrix_columns = 0;
    int result_matrix[100][100] = { 0 };
    //first matrix input
    cout << "write the first matrix\n";
    cout << "write the number rows : ";
    cin >> first_matrix_rows;
    cout << endl;
    cout << "write the number columns : ";
    cin >> first_matrix_columns;
    cout << endl;
    if (first_matrix_rows == first_matrix_columns && first_matrix_columns != 0)
        cout << "this matrix is square matrix\n";
    cout << "your matrix has " << first_matrix_rows << " rows and " << first_matrix_columns << " columns\n";
    for (int column_count = 0; column_count < first_matrix_columns; column_count++)
    {
        for (int row_count = 0; row_count < first_matrix_rows; row_count++)
        {
            cout << "write the number or value of position " << row_count + 1 << " x " << column_count + 1 << ": ";
            cin >> first_matrix[row_count][column_count];
            cout << endl;
        }
    }
    //print fisrt matrix
    for (int first_mat_rows = 0;first_mat_rows < first_matrix_rows;first_mat_rows++)
    {
        for (int first_mat_columns = 0;first_mat_columns < first_matrix_columns;first_mat_columns++)
        {
            cout << "  " << first_matrix[first_mat_rows][first_mat_columns] << "  ";
        }
        cout << endl;
    }
    //second matrix input
    cout << "now the second matrix\n";
    cout << "write the number rows : ";
    cin >> second_matrix_rows;
    cout << endl;
    cout << "write the number columns : ";
    cin >> second_matrix_columns;
    cout << endl;
    if (second_matrix_rows == second_matrix_columns && second_matrix_columns != 0)
        cout << "this matrix is square matrix\n";

    cout << "your matrix has " << second_matrix_rows << " rows and " << second_matrix_columns << " columns\n";
    for (int column_count = 0; column_count < second_matrix_columns; column_count++)
    {
        for (int row_count = 0; row_count < second_matrix_rows; row_count++)
        {
            cout << "write the number or value of position " << row_count + 1 << " x " << column_count + 1 << ": ";
            cin >> second_matrix[row_count][column_count];
            cout << endl;
        }
    }
    //print the second matrix
    for (int second_mat_rows = 0;second_mat_rows < second_matrix_rows;second_mat_rows++)
    {
        for (int second_mat_columns = 0;second_mat_columns < second_matrix_columns;second_mat_columns++)
        {
            cout << "  " << second_matrix[second_mat_rows][second_mat_columns] << "  ";
        }
        cout << endl;
    }
    //chose the operation
    cout << "1-plus\n2-minus\n3.multiblie\n";
    cout << "\nchouse the number of operation you want:";
    cin >> operation;
    //plus
    if (operation == "1")
    {
        if (first_matrix_rows != second_matrix_rows || first_matrix_columns != second_matrix_columns)
        {
            cout << "error!\nthose matris canot be added to gether\n";
            lock++;
        }
        else {
            for (int result_row = 0;result_row < first_matrix_rows;result_row++)
            {
                for (int result_column = 0;result_column < first_matrix_columns; result_column++) {
                    result_matrix[result_row][result_column] = first_matrix[result_row][result_column] + second_matrix[result_row][result_column];
                }
            }
        }
    }
    //minus
    if (operation == "2")
    {
        for (int result_row = 0;result_row < first_matrix_rows;result_row++)
        {
            for (int result_column = 0;result_column < first_matrix_columns; result_column++) {
                result_matrix[result_row][result_column] = first_matrix[result_row][result_column] - second_matrix[result_row][result_column];
            }
        }
    }
    //multiblie
    if (operation == "3")
    {
        if (first_matrix_columns == second_matrix_rows)
        {
            for (int i = 0;i < first_matrix_rows; i++)
            {
                for (int result_row = 0;result_row < second_matrix_columns;result_row++)
                {
                    for (int result_column = 0;result_column < first_matrix_columns; result_column++) {

                        result_matrix[i][result_row] += first_matrix[i][result_column] * second_matrix[result_column][result_row];
                    }
                }
            }
            //  first_matrix_rows=first_matrix_columns;
            first_matrix_columns = second_matrix_columns;
        }
        else {

            cout << "error!\ncan't multiply this matrix\n";
            lock++;
        }
    }
    // print the result 
    if (lock == 0) {

        for (int i = 0;i < first_matrix_rows;i++)
        {
            for (int t = 0;t < first_matrix_columns;t++) {
                if (result_matrix[i][t] > bigger)
                    bigger = result_matrix[i][t];
            }
        }
        for (int i = 0;i < first_matrix_rows;i++)
        {
            cout << " ";
            for (int t = 0;t < first_matrix_columns;t++) {
                cout<<result_matrix[i][t]<<" ";

            }
            cout <<endl;
        }
    }
    return 0;
}
