#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int num;

    // 정수 5개 입력
    cout << "숫자를 입력하세요: ";
    for(int i = 0; i < 5; i++) {
        cin >> num;
        v.push_back(num);
    }

    // 초기 벡터 원소 출력
    cout << "초기 벡터 원소 : ";
    for(size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 음수 삭제
    for(size_t i = 0; i < v.size(); ) {
        if(v[i] < 0) {
            v.erase(v.begin() + i); // erase 사용
        } else {
            i++; // 음수가 아니면 다음 요소로 이동
        }
    }

    // 음수 삭제 후 벡터 출력
    cout << "음수를 삭제 후 벡터원소 : ";
    for(size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 평균값 계산
    double sum = 0;
    for(size_t i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    double avg = sum / v.size();

    cout << "평균값 : " << avg << endl;

    return 0;
}
