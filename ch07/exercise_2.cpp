#include <iostream>
using namespace std;
const int ArSize = 10;
int input_scores(double arr[], int n);
void display_scores(const double * arr, int n);
double mean_scores(const double * arr, int n);

int main()
{
    double golf_scores[ArSize];
    int count = input_scores(golf_scores, ArSize);
    display_scores(golf_scores, count);
    double mean = mean_scores(golf_scores, count);
    cout << "The mean score is " << mean << endl;
    return 0;
}

int input_scores(double arr[], int n)
{
    
    int count = 0;
    for(int i=0; i < n; i++)
    {
        cout << "Enter the " << i+1 << "# score (q to quit): ";
        if(cin >> arr[i])
            count++;

        else
        {
            cin.clear();
            while(cin.get() != '\n');
            break;
        }
    }
    return count;

}

void display_scores(const double * arr, int n)
{
    cout << "Scores" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "#" << i+1 << ": "<< arr[i] << " ";
    }
    cout << endl;
}

double mean_scores(const double * arr, int n)
{
    double sum = 0;
    for(int i = 0; i < n ; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}