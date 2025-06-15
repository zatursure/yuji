#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Date {
    int year, month, day;
    
    Date(string s = "") {
        if (s.empty()) return;
        year = stoi(s.substr(0, 4));
        month = stoi(s.substr(5, 2));
        day = stoi(s.substr(8, 2));
    }
    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }
    bool isNextDay(const Date& other) const {
        const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (year == other.year && month == other.month && day + 1 == other.day) return true;
        if (year == other.year && month + 1 == other.month && day == days[month] && other.day == 1) return true;
        if (year + 1 == other.year && month == 12 && other.month == 1 && day == 31 && other.day == 1) return true;
        return false;
    }
    string toString() const {
        string result = to_string(year) + "-";
        if (month < 10) result += "0";
        result += to_string(month) + "-";
        if (day < 10) result += "0";
        result += to_string(day);
        return result;
    }
};

struct Interval {
    Date start, end;
    Interval(string s, string e) : start(s), end(e) {}
    bool operator<(const Interval& other) const {
        return start < other.start;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Interval> intervals;
    
    // 读取输入
    for (int i = 0; i < n; i++) {
        string s, e;
        cin >> s >> e;
        intervals.emplace_back(s, e);
    }
    
    // 按开始时间排序
    sort(intervals.begin(), intervals.end());
    
    // 合并区间
    vector<Interval> result;
    result.push_back(intervals[0]);
    
    for (int i = 1; i < n; i++) {
        if (result.back().end.isNextDay(intervals[i].start)) {
            // 可以合并
            result.back() = Interval(result.back().start.toString(), intervals[i].end.toString());
        } else {
            // 不能合并，添加新区间
            result.push_back(intervals[i]);
        }
    }
    
    // 输出结果
    for (const auto& interval : result) {
        cout << interval.start.toString() << " " << interval.end.toString() << endl;
    }
    
    return 0;
}
