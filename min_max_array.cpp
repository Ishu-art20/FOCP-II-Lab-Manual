// min/max in array
#include<iostream>
using namespace std;

void findMinMax(int arr[], int size, int &minVal, int &maxVal);

int main()
{
    int N;
    cout << "Enter no. of inputs : ";
    cin >> N;

    int arr[100];
    cout << "Enter Values : ";
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int minVal, maxVal;

    findMinMax(arr, N, minVal, maxVal);

    cout << "Minimum = " << minVal << endl;
    cout << "Maximum = " << maxVal << endl;

    return 0;
}

void findMinMax(int arr[], int size, int &minVal, int &maxVal)
{
    minVal = arr[0];
    maxVal = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > maxVal)
            maxVal = arr[i];

        if(arr[i] < minVal)
            minVal = arr[i];
    }
}