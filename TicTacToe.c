#include<stdio.h>
int checkWin(char b[3][3],int* x)
{
    int i;

    for(i = 0; i < 3; i++)
    {
        if(b[i][0] == b[i][1] && b[i][1] == b[i][2] && b[i][0] != ' ')
            {
                if(b[i][1]=='X')
                {
                    printf("\nplayer 1 is won\n");
                   
                    *x=1;
                }
                if(b[i][1]=='O')
                {
                    printf("\nplayer 2 is won\n");

                    *x=1;
                }
                break;
            }
    }

    for(i = 0; i < 3; i++)
    {
        if(b[0][i] == b[1][i] && b[1][i] == b[2][i] && b[0][i] != ' ')
            {
                 if(b[1][i]=='X')
                {
                    printf("\nplayer 1 is won\n");*x=1;
                }
                if(b[1][i]=='O')
                {
                    printf("\nplayer 2 is won\n");*x=1;
                }
                break;
            }
    }
    if(b[0][0] == b[1][1] && b[1][1] == b[2][2] && b[0][0] != ' ')
    {
       if(b[0][0]=='X')
       {
        printf("\nplayer 1 won the match\n");*x=1;
       }     
       else{
        printf("\nPlayer 2 won the match\n");*x=1;
       }
       
    }

            
    if(b[0][2] == b[1][1] && b[1][1] == b[2][0] && b[0][2] != ' ')
      {
       if(b[0][2]=='X')
       {
        printf("\nplayer 1 won the match\n");*x=1;
       }     
       else{
        printf("\nPlayer 2 won the match\n");*x=1;
       }
       
    }
    
    if(b[0][0]!=' '&& b[0][1]!=' ' && b[0][2]!=' ' && b[1][0]!=' '&& b[1][1]!=0 && b[1][2]!=' '&& b[2][0]!=' '&& b[2][1]!=0 && b[2][2]!=' ')
    {
        printf("Game is Draw");
    }

    return 0; 
}

void entry(char arr[3][3],int i,int* y)
{
int a,b;

if(i%2!=0){
printf("Enter a co-ordinate Player 1\t");
scanf("%d%d",&a,&b);
if(arr[a][b]==' '){
arr[a][b]='X';
}
else{
*y=1;
}
}
if(i%2==0)
{
printf("Enter a co-ordinate Player 2\t");
scanf("%d%d",&a,&b);
if(arr[a][b]==' ')
{
    arr[a][b]='O';
}
else{
*y=1;
}
}
}

void display(char a[3][3])
{
printf(" %c | %c | %c \n",a[0][0],a[0][1],a[0][2]);
printf("---+---+---\n");
printf(" %c | %c | %c \n",a[1][0],a[1][1],a[1][2]);
printf("---+---+---\n");  
printf(" %c | %c | %c \n",a[2][0],a[2][1],a[2][2]);

}
void game(){
printf("Tic Tac Toe\n");
char arr[3][3]={{' ',' ', ' '},{' ',' ', ' '},{' ',' ', ' '}};

for(int i=1;i<=9;i++)
{int x=0,y=0;
char a[3];
display(arr);
entry(arr,i,&y);
checkWin(arr,&x);
if(x==1)
{ printf("\n");
  display(arr);
 break;
}
if(y==1)
{
    i=i-1;
    printf("\nInvalid input try again\n");
}
}
}
void how(){
printf("1. Initial Grid\n");
printf("   |   |   \n");
printf("---+---+---\n");
printf("   |   |   \n");
printf("---+---+---\n");  
printf("   |   |   \nPlayer 1 enter co-ordinate for X\nPlayer 2  co-ordinate for O ");
printf("i.e\n(0,0)|(0,1)|(0,2)\n-----+-----+-----\n(1,0)|(1,1)|(1,2)\n-----+-----+-----\n(2,0)|(2,1)|(2,2)\n");
printf("E.x Player 1 Enter (0,0) then \n");
printf("i.e\n X |   |   \n---+---+---\n   |   |   \n---+---+---\n   |   |   \n");
}
void boot()
{int m=1;
while(m==1){
printf("Tic Tac Toe\nPress 1 to 'Start'\nPress 2 for 'How to play' \n");
int n;
scanf("%d",&n);
if(n==1)
{game();
    break;
}
else if(n==2){
how();
printf("\n");
printf("Press 1 to 'Menu'\n");
scanf("%d",&m);
}
}

}
int main(){
boot();
return 0;
}