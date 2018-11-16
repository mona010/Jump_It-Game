///Cairo University.
///Faculty of Computers and Information.
///Program: Jump_It Game.
///Purpose: Doing Recursion Function to calculate The Minimum Cost.
///Author:  Mona Mohamed Fathy.
///ID:      20170300      Group: 11
///------------------------------------------------
#include <iostream>
using namespace std;

void CreateArray(int arr[], int Size);
int Cost(int arr[], int Start, int End);

int main()
{
    int s;
    cout << "Enter the size of the array : " << endl ;
    cin >> s; //Taking the size of array from the user.
    int a[s];
    CreateArray(a, s);
    cout << "\nThe result is : " << Cost(a, 0, s-1) << endl ;
    return 0;
}
//Create an array with size was taken from the user.
void CreateArray(int arr[], int Size)
{
    arr[0] = 0;
    cout << "The element of the index 0 = 0" << endl ; //Default value.
    for(int i = 1; i < Size; i++)
    {
        cout << "The element of the index " << i << " = " ;
        cin >> arr[i]; //Taking the elements of the array from the user.
    }
    cout << endl << "The array is : \n" << endl ;

    for(int i = 0; i < Size; i++)
    {
        cout << arr[i] << " " ; //Display the elements of the array in the console.
    }
    cout << endl ;
}

int Cost(int arr[], int Start, int End)
{

    if (Start == End) //Base case.
    {
        return arr[Start] ;
    }

    if ((Start+1) == End)
    {
        return arr[Start] + Cost(arr, Start+1, End);
    }

    else if ((Start+2) == End)
    {
        return arr[Start] + Cost(arr, Start+2,End);
    }
    else
    {
        if ((arr[Start] + arr[Start+1]) >= (arr[Start] + arr[Start+2]))
        {
            return arr[Start] + Cost(arr , Start+2 , End);
        }

        else //if ((arr[Start] + arr[Start+1]) < (arr[Start] + arr[Start+2]))
        {
            return arr[Start] + Cost(arr , Start+1 , End) ;
        }
    }
}
