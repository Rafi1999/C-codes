#include<stdio.h>
int n = 3, found = 0;
char maze[5][5] = { "R..",
                    "##.",
                    ".#G"
                  };
void visit(int i, int j)
{
    printf("%d %d\n", i, j);
    if( maze[i][j] == 'G' )
    {
        found = 1;
        return;
    }
    if(maze[i+1][j] != '#' && i+1 < n)
        visit(i + 1, j);
    if(maze[i][j+1] != '#' && j+1 < n)
        visit(i, j + 1);
}
int main()
{
    visit(0,0);
    return 0;
}
