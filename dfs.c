#include <stdio.h>

int G[10][10], visited[10], n;

void dfs(int i) {
  printf("%d ", i);
  visited[i] = 1;
  for(int j=0; j<n; j++) {
    if(!visited[j] && G[i][j])
      dfs(j);
  }
}

void main() {
  printf("Enter no. of vertices: ");
  scanf("%d", &n);
  printf("Enter adjacency matrx:\n");
  for(int i=0; i<n; i++) {
    visited[i] = 0;
    for(int j=0; j<n; j++)
        scanf("%d", &G[i][j]);
  }
  dfs(0);
}
