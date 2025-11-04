#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

static int n_stu = 0;
class Student
{
public:
    int arr[100][5];
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[n_stu][i];
        }
        n_stu++;
    }
    int calculateTotalScore()
    {
        n_stu = 0;
        int sum = 0, count = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += arr[n_stu][i];
        }

        return sum;
    }
};

int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
