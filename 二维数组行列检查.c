#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numofrow, numofline;   //�ֱ���������к� 
    int numoflr, numofrl;   //�ֱ���������Խ��� 
    int result = -1;      //-1:no winner; 1:x winner; 0:o winner
  
   //load
    for( i=0; i<size; i++ ) {
        for( j=0; j<size; j++ ) {
            scanf("%d",&board[i][j]);
        }
    }
  
    for( i=0; i<size; i++ ) {          //������� 
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
  
    numoflr = numofrl = 0;         //��������Խ��� 
    for( i=0; i<size; i++ ) {
        numoflr += board[i][i];
        numofrl += board[i][size-i-1];
    }
    if( numoflr == size || numofrl == size ) {
        result = 1;
    } else if ( numoflr == 0 || numofrl == 0 ) {  
        result = 0;
    }
     
    switch (result) {                    //����resultֵ������ 
        case -1: 
    printf("no winner\n");  break;
        case 0: 
    printf("o is winner\n");  break;
        case 1:
    printf("x is winner\n");  break;
    }
    return 0;
}
