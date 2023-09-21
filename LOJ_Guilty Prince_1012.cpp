//LOJ_Guilty Prince_1012.cpp
//BFS_flood_fill
#include<bits/stdc++.h>
using namespace std;
//large integer
#define inf 1<<30

using namespace std;
typedef pair <int, int> pi;

char maze[101][101];
int dist[101][101];
int reach[101][101];
int fx[]= {0,-1, 0,1};
int fy[]= {1, 0,-1,0};
int row ,col;

void bfs_flood_fill(int i , int j)
{
   reach[i][j] = 1;
   dist[i][j]  = 0;
   queue<pi> q;
    //queue<pair<int, int>> q;
   q.push(make_pair(i,j));
   while(!q.empty())
   {
       int a , b;
       a = q.front().first;
       b = q.front().second;
       q.pop();
       for(i = 0; i < 4; i++)
       {
           int x , y;
           x = a + fx[i];
           y = b + fy[i];

           if(x >= 0 and x < row and y >= 0 and y < col and maze[x][y] != '#' and reach[x][y] == -1)
           {
               dist[x][y] = dist[a][b] + 1;
               reach[x][y] = 1;
               q.push(make_pair(x,y));
           }
       }
   }
}

void setx ()
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j ++)
        {
            reach[i][j] = -1;
            dist[i][j] = 0;
        }
    }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, case_no =0;
   cin >> t;

   while(t--)
   {

       case_no++;
       cin >> col >> row;
       int x,y;
       for(int i = 0; i < row; i++){
           for(int j = 0; j < col; j++){
               cin >> maze[i][j];

               if(maze[i][j] == '@'){
                   x = i;
                   y = j;
               }
           }
       }


       setx();
       bfs_flood_fill(x,y);
       int cnt = 0;
       for(int i = 0; i < row; i++){
           for(int j = 0;  j < col; j++){
               if(reach[i][j] == 1){
                   cnt++;
               }
           }
       }
       printf("Case %d: %d\n",case_no, cnt);

   }


}

// Q -> 7 , 2 , 6 , 1
/*
4 4
 ..#.
 ...#
 @...
 ....
 12

 2 0

 Dist
 0 0 0 0
 1 2 0 0
 0 1 2 0
 1 2 0 0

 2 0

 -1 -1 -1 -1
 1 1 -1 -1
 1 1 1 -1
 1 1 -1 -1

 Queue ->
 First step -> {2,0} ->
 a = 2
 b = 0
 q.pop() - { 2, 0}
 q-> empty()

 second step -> ,  { 1, 0 }, { 3 , 0}

 third step

 { 2 , 1 }

*/



