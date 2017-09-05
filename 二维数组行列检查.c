#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numofrow, numofline;   //分别代表行与列和 
    int numoflr, numofrl;   //分别代表正反对角线 
    int result = -1;      //-1:no winner; 1:x winner; 0:o winner
  
   //load
    for( i=0; i<size; i++ ) {
        for( j=0; j<size; j++ ) {
            scanf("%d",&board[i][j]);
        }
    }
  
    for( i=0; i<size; i++ ) {          //检查行列 
        numofrow = numofline = 0;
        for( j=0; j<size; j++ ) {
            numofrow += board[i][j];
            numofline += board[j][i];
        }
        if ( numofrow == size || numofline == size ) {
            result = 1;
            break;
        } else if (numofrow == 0 || numofline == 0 ) {
            result = 0;
            break;
        }
    }
  
    numoflr = numofrl = 0;         //检查两个对角线 
    for( i=0; i<size; i++ ) {
        numoflr += board[i][i];
        numofrl += board[i][size-i-1];
    }
    if( numoflr == size || numofrl == size ) {
        result = 1;
    } else if ( numoflr == 0 || numofrl == 0 ) {  
        result = 0;
    }
     
    switch (result) {                    //根据result值输出结果 
        case -1: 
    printf("no winner\n");  break;
        case 0: 
    printf("o is winner\n");  break;
        case 1:
    printf("x is winner\n");  break;
    }
    return 0;
}
