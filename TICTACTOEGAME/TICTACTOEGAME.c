#include <stdio.h>
#include <stdlib.h>
//X=88 and X=79
int thechecker2(int d);

void the_table(void);
void the_areas(void);
int thechecker(int c);
int samechecker(int a, int b);
char areas[9]={'.','.','.','.','.','.','.','.','.'};
int i,dec,dec2,c,b,a,d,k,x,u,t,winstat,v,fullcount;
winstat=0;
int main(){
the_areas();
int tempdec=0;
int tempdec2=0;


    for(i=1;i<=9;i++){
        printf("Player1,Choose a Area to Place X:\n");
        int tempdec=dec-1;
        scanf("%d",&dec);
        areas[dec-1]='X';
        thechecker(tempdec);


        if (dec-1>8){
            printf("\n");
            printf("Area does not exist");
            exit(0);
        }



        if((areas[0]=='X' && areas[4] =='X' && areas[8]=='X') ||
        (areas[6]=='X' && areas[4] =='X' && areas[2]=='X') ||
        (areas[0]=='X' && areas[1] =='X' && areas[2]=='X') ||
        (areas[3]=='X' && areas[4] =='X' && areas[5]=='X') ||
        (areas[6]=='X' && areas[7] =='X' && areas[8]=='X') ||
        (areas[0]=='X' && areas[3] =='X' && areas[6]=='X') ||
        (areas[1]=='X' && areas[4] =='X' && areas[7]=='X') ||
        (areas[2]=='X' && areas[5] =='X' && areas[8]=='X'))
        {printf("Player 1 won!");
        winstat++;
        exit(0);}

        if(winstat==0){
        fullcount=0;
            for(v=0;v<9;v++){
                if(areas[v]=='X' || areas[v]=='O'){
                    fullcount++;
                    if(fullcount==9){
                        printf("DRAW!");
                        exit(0);
                        }

                }
            }

        }


        printf("Player2,Choose a Area to Place O:\n");
        int tempdec2=dec2-1;;
        scanf("%d",&dec2);
        areas[dec2-1]='O';
        thechecker2(tempdec2);

        if (dec2-1>8){
            printf("\n");
            printf("Area does not exist");
            exit(0);
        }
        samechecker(dec-1,dec2-1);
        the_table();



        if((areas[0]=='O' && areas[4] =='O' && areas[8]=='O') ||
        (areas[6]=='O' && areas[4] =='O' && areas[2]=='O') ||
        (areas[0]=='O' && areas[1] =='O' && areas[2]=='O') ||
        (areas[3]=='O' && areas[4] =='O' && areas[5]=='O') ||
        (areas[6]=='O' && areas[7] =='O' && areas[8]=='O') ||
        (areas[0]=='O' && areas[3] =='O' && areas[6]=='O') ||
        (areas[1]=='O' && areas[4] =='O' && areas[7]=='O') ||
        (areas[2]=='O' && areas[5] =='O' && areas[8]=='O'))
        {printf("Player 2 won!");
        return(0);}



}
}







void  the_table(void)
{
    printf("---- ---- ----\n");
    printf(" %c  | %c  | %c  |\n",areas[0],areas[1],areas[2]);
    printf("    |    |    |\n");
    printf("---- ---- ----\n");
    printf(" %c  | %c  | %c  |\n",areas[3],areas[4],areas[5]);
    printf("    |    |    |\n");
    printf("---- ---- ----\n");
    printf(" %c  | %c  | %c  |\n",areas[6],areas[7],areas[8]);
    printf("    |    |    |\n");
    printf("---- ---- ----\n");
}

void  the_areas(void)
{
    printf("---- ---- ----\n");
    printf(" 1  |  2 |  3 |\n");
    printf("    |    |    |\n");
    printf("---- ---- ----\n");
    printf(" 4  |  5 |  6 |\n");
    printf("    |    |    |\n");
    printf("---- ---- ----\n");
    printf(" 7  |  8 |  9 |\n");
    printf("    |    |    |\n");
    printf("---- ---- ----\n");
}

int thechecker(int c){
    if (c==dec-1){
        printf("Wrong input,Area is not empty!");
        exit(0);
    }
}
int samechecker(int a,int b){
    if (a==b){
        printf("Wrong input,Area is not empty!");
        exit(0);
    }
}

int thechecker2(int d){
    if (d==dec2-1){
        printf("Wrong input,Area is not empty!");
        exit(0);
        }
}


