#include <stdio.h>

char matrix[3][3];  /* the tic tac toe matrix */


void matrix_init(){
    int i, j;
    for(i=0; i<3; i++)
      for(j=0; j<3; j++) matrix[i][j] =  ' ';
}
void disp_matrix(void)
{
  int t;

  for(t=0; t<3; t++) {
    printf(" %c | %c | %c ",matrix[t][0],
            matrix[t][1], matrix [t][2]);
    if(t!=2) printf("\n---|---|---\n");
  }
  printf("\n");
}
void get_player_1_move(void)
{
  int x, y;

  printf("PLAYER 1:Enter X,Y coordinates for your move: ");
  scanf("%d%*c%d", &x, &y);

  x--; y--;

  if(matrix[x][y]!= ' '){
    printf("Invalid move, try again.\n");
    get_player_1_move();
  }
  else matrix[x][y] = 'X';
}
void get_player_2_move(void)
{
  int x, y;

  printf("PLAYER 2: Enter X,Y coordinates for your move: ");
  scanf("%d%*c%d", &x, &y);

  x--; y--;

  if(matrix[x][y]!= ' '){
    printf("Invalid move, try again.\n");
    get_player_2_move();
  }
  else matrix[x][y] = 'O';
}
char check(void)
{
  int i;

  for(i=0; i<3; i++)  /* check rows */
    if(matrix[i][0]==matrix[i][1] &&
       matrix[i][0]==matrix[i][2]) return matrix[i][0];

  for(i=0; i<3; i++)  /* check columns */
    if(matrix[0][i]==matrix[1][i] &&
       matrix[0][i]==matrix[2][i]) return matrix[0][i];

  /* test diagonals */
  if(matrix[0][0]==matrix[1][1] &&
     matrix[1][1]==matrix[2][2])
       return matrix[0][0];

  if(matrix[0][2]==matrix[1][1] &&
     matrix[1][1]==matrix[2][0])
       return matrix[0][2];

  return ' ';
}

int main(){
     char done;
     printf("This is the game of Tic Tac Toe.\n");
     printf("TWO PLAYERS!\n");
     done =  ' ';
     matrix_init();
      disp_matrix();
    do
    {
      get_player_1_move();
      disp_matrix();
      done = check();
      if(done != ' ') break;
      get_player_2_move();
      done = check();
      disp_matrix();

      if(done != ' ') break;
    } while (done == ' ');

    if(done == 'X'){
        printf("X WINS");
    }else if(done == 'O'){
        printf("O WINS");
    }else{
        printf("DRAW");
    }
    
    return 0;
}