#include <bits/stdc++.h>

using namespace std;

int round(int grade) {
    if(grade < 38 ) 
        return grade;
    int diff = grade % 5;
    if(diff >= 3) 
        return grade + (5 - diff);
    else
        return grade;
}

vector < int > solve(vector < int > grades){
    for(auto i = grades.begin(); i!=grades.end(); i++) {
        *i = round(*i);
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
        cin >> grades[grades_i];

    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");

    }
    cout << endl;

    cout << round(74);


    return 0;

}

