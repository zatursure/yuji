#include <iostream>
#include <algorithm>
using namespace std;
struct Task {
    int time;
    int deadline;
};
bool cmp(Task a, Task b) {
    return a.deadline > b.deadline;
}
int main() {
    int n;
    cin >> n;
    Task tasks[10001];
    
    // 读取任务信息
    for(int i = 0; i < n; i++) {
        cin >> tasks[i].time >> tasks[i].deadline;
    }
    
    // 按截止时间从大到小排序
    sort(tasks, tasks + n, cmp);
    
    int currentTime = tasks[0].deadline;
    
    // 从后往前安排任务
    for(int i = 0; i < n; i++) {
        currentTime -= tasks[i].time;
        if(currentTime > tasks[i].deadline) {
            currentTime = tasks[i].deadline - tasks[i].time;
        }
        if(currentTime < 0) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << currentTime << endl;
    return 0;
}
