#include <stdio.h>
#include <stdlib.h>

int main(){
        char Chess[8][8];
        int i,j;
        for(i=0;i<8;i++){
                for(j=0;j<8;j++){
                        Chess[i][j]=0;
                }
        }
        for(i=0;i<8;i++){
                Chess[1][i] = 'p';
                Chess[6][i] = 'p';
        }
        if(Chess[6][4] == 'p'){
                Chess[6][4] = 0;
        }
        else{
        }
        Chess[0][0]='R';
        Chess[0][1]='N';
        Chess[0][2]='B';
        Chess[0][3]='Q';
        Chess[0][4]='K';
        Chess[0][5]='B';
        Chess[0][6]='N';
        Chess[0][7]='R';

        Chess[7][0]='R';
        Chess[7][1]='N';
        Chess[7][2]='B';
        Chess[7][3]='Q';
        Chess[7][4]='K';
        Chess[7][5]='B';
        Chess[7][6]='N';
        Chess[7][7]='R';
        Chess[4][4]='p';
        for(i=0;i<8;i++){
                printf("\n%d ",8-i);
                for(j=0;j<8;j++){
                        printf("%c ", Chess[i][j]);
                }
        }
        printf("\n  a b c d e f g h");
        return 0;
}
