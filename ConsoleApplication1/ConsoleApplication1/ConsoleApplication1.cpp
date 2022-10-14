// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int values[1025][1025];
int N, M;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{ 
			int value;
			cin >> value;
			if (j != 0)
			{
				values[i][j] = value + values[i][j - 1];
			}
			else
			{
				values[i][j] = value;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		int x1, y1, x2, y2;
		int answer=0;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j <= x2; j++)
		{
			answer += values[j][y2] - values[j][y1-1];
		}
		cout << answer<<'\n';
	}
}

