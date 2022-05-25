Input Format:

Most of the input is handled for you by the locked code in the editor.In the void Student::input() function, you must read  scores from stdin and save them to your scores instance variable.


Output Format:

In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of the values in scores ).

The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.

Sample Input

The first line contains , the number of n students in Kristen's class. The n subsequent lines contain each students 5  exam grades for this semester.

3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
Sample Output
1

Explanation:
Kristen's grades are on the first line of grades. Only 1 student scored higher than her.



                                                                 
#Solution: 
  
#include <bits/stdc++.h>
using namespace std;

class Student{
    int scores[5];
    public:
    void input(){
        for(int i=0; i<5; i++){
            cin >> scores[i];
        }
    }
    int calculateTotalScore(){
        int total = 0;
        for(int i=0; i<5; i++){
            total += scores[i];
        }
        return total;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
