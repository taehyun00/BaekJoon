#include <stdio.h>

int graph[100][100];  // 최대 100개의 정점까지 허용하는 그래프
int visited[100];     // 최대 100개의 정점에 대한 방문 상태
int count=0;
// 깊이 우선 탐색(DFS) 함수 정의
void DFS(int cur, int n) {
    visited[cur - 1] = 1;  // 현재 노드를 방문 처리
    count++;     // 방문한 노드를 출력

    for (int i = 0; i < n; i++) {
        // 인접하고 방문하지 않은 노드가 있으면 재귀적으로 DFS 호출
        if (graph[cur - 1][i] == 1 && visited[i] == 0) {
            DFS(i + 1, n);  // 노드 번호는 1부터 시작하므로 i+1로 호출
        }
    }
}

int main() {
    int n, e;  // n은 정점의 수, e는 간선의 수
    int start; // 탐색을 시작할 정점 번호
    scanf("%d", &n);
    scanf("%d", &e);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0; 
        }
        visited[i] = 0; 
    }
    for (int i = 0; i < e; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u - 1][v - 1] = 1;  // u와 v가 연결됨을 표시
        graph[v - 1][u - 1] = 1;  // 무방향 그래프이므로 반대도 설정
    }
    DFS(1, n);
    printf("%d",count-1);

    return 0;
}
