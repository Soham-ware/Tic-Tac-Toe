#include<stdio.h>
void entry(char arr[3][3],int i)
{
int a,b;

if(i%2!=0){
printf("Enter a co-ordinate Player 1\t");
scanf("%d%d",&a,&b);
arr[a][b]='X';
}
if(i%2==0)
{
printf("Enter a co-ordinate Player 2\t");
scanf("%d%d",&a,&b);
arr[a][b]='O';
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
{
display(arr);
entry(arr,i);
if(((arr[0][0]==arr[0][1])&&(arr[0][0]==arr[0][2])&&(arr[0][0]=='X'))||((arr[0][0]==arr[0][1])&&(arr[0][0]==arr[0][2])&&(arr[0][0]=='O')))
{   display(arr);
    if(arr[0][0]=='X'){
    printf("Player 1 Won ");    
    break;}
    if(arr[0][0]=='O'){
    printf("Player 2 Won ");    
    break;}
}
if(((arr[1][0]==arr[1][1])&&(arr[1][0]==arr[1][2])&&(arr[1][0]=='X'))||((arr[1][0]==arr[1][1])&&(arr[1][0]==arr[1][2])&&(arr[1][0]=='O')))
{   display(arr);
   if(arr[1][0]=='X'){
    printf("Player 1 Won ");    
    break;}
    if(arr[1][0]=='O'){
    printf("Player 2 Won ");    
    break;}
}
if(((arr[2][0]==arr[2][1])&&(arr[2][0]==arr[2][2])&&(arr[2][0]=='X'))||((arr[2][0]==arr[2][1])&&(arr[2][0]==arr[2][2])&&(arr[2][0]=='O')))
{   display(arr);
   if(arr[2][0]=='X'){
    printf("Player 1 Won ");    
    break;}
    if(arr[2][0]=='O'){
    printf("Player 2 Won ");    
    break;}
}
if(((arr[0][0]==arr[1][0])&&(arr[2][0]==arr[1][0])&&(arr[1][0]=='X'))||((arr[0][0]==arr[1][0])&&(arr[2][0]==arr[1][0])&&(arr[0][0]=='O')))
{   display(arr);
    if(arr[0][0]=='X'){
    printf("Player 1 Won ");    
    break;}
    if(arr[0][0]=='O'){
    printf("Player 2 Won ");    
    break;}
}
if(((arr[1][1]==arr[2][1])&&(arr[0][1]==arr[2][1])&&(arr[1][1]=='X'))||((arr[0][1]==arr[1][1])&&(arr[2][0]==arr[1][1])&&(arr[1][1]=='O')))
{   display(arr);
   if(arr[1][1]=='X'){
    printf("Player 1 Won ");    
    break;}
    if(arr[1][1]=='O'){
    printf("Player 2 Won ");    
    break;}
}
if(((arr[1][1]==arr[2][2])&&(arr[0][0]==arr[2][2])&&(arr[2][2]=='X'))||((arr[1][1]==arr[0][0])&&(arr[0][0]==arr[2][2])&&(arr[2][2]=='O')))
{   display(arr);
   if(arr[2][2]=='X'){
    printf("Player 1 Won ");    
    break;}
    if(arr[2][2]=='O'){
    printf("Player 2 Won ");    
    break;}
}
if(((arr[1][1]==arr[0][2])&&(arr[1][1]==arr[2][0])&&(arr[1][1]=='X'))||((arr[1][1]==arr[0][2])&&(arr[1][1]==arr[2][0])&&(arr[1][1]=='O')))
{   display(arr);
   if(arr[1][1]=='X'){
    printf("Player 1 Won ");    
    break;}
    if(arr[1][1]=='O'){
    printf("Player 2 Won ");    
    break;}
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