// 재귀함수가 뭔가요? bj.17478
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string str_start = "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.";
string str[] = {"\"재귀함수가 뭔가요?\"",
                "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.",
                "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.",
                "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"",
                "라고 답변하였지."};
string str_last = "\"재귀함수는 자기 자신을 호출하는 함수라네\"";

void print_recursive(int n, int max)
{
    string under_bar = "";

    for (int i=0; i < max - n; i++) under_bar += "____";
    if (n == max) cout << str_start << '\n';
    cout << under_bar + str[0] << '\n';
    if (n > 0)
    {
        for (int i=1; i < 4; i++)
            cout << under_bar + str[i] << '\n';
        print_recursive(--n, max);
    }
    else
        cout << under_bar + str_last << '\n';
    cout << under_bar + str[4] << '\n';
}

int main()
{
    fast;
    int n;

    cin >> n;
    print_recursive(n, n);
    return (0);
}