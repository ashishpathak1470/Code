#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> cal(vector<string>& dates) {
    vector<string> month = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < dates.size(); ++i) {
        stringstream ss(dates[i]);
        string temp;
        vector<string> tempVec;
        while (getline(ss, temp, ' ')) {
            tempVec.push_back(temp);
        }
        dates[i] = tempVec;
    }

    for (int i = 0; i < dates.size(); ++i) {
        if (dates[i][0].size() == 3) {
            dates[i][0] = '0' + dates[i][0][0];
        } else {
            dates[i][0] = dates[i][0].substr(0, 2);
        }
    }

    for (auto& date : dates) {
        int monthIndex = distance(month.begin(), find(month.begin(), month.end(), date[1])) + 1;
        if (monthIndex < 10) {
            date[1] = '0' + to_string(monthIndex);
        } else {
            date[1] = to_string(monthIndex);
        }
    }

    for (auto& date : dates) {
        reverse(date.begin(), date.end());
    }

    for (int i = 0; i < dates.size(); ++i) {
        dates[i] = dates[i][0] + '-' + dates[i][1] + '-' + dates[i][2];
    }

    return dates;
}

int main() {
    vector<string> dates = {"25 Feb 2023", "4 Mar 2022", "12 Dec 2021"};
    vector<string> result = cal(dates);
    for (const auto& date : result) {
        cout << date << endl;
    }
    return 0;
}
