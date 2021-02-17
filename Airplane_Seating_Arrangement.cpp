/* THE FOLLOWING PROGRAM IS USED TO SELECT A SEAT IN AN AIRPLANE AND SHOWING THE DESIRED SEAT IN THE END. */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h> 
using namespace std;

int main(){
    
    char* seats[14][7];  
    char input[9];       
    int row;             
    int col;             
    char column[2];      
    bool x = true;       

    printf("\nEnter the ticket type(first, business, economy) you want to travel: ");
	scanf("%s[^\n]", input);
	
    if (!strcmp(input, "first")){
    }
    else{
        if(!strcmp(input, "business")){
        }
        else{
            if(!strcmp(input, "economy")){
            }
            else
            {
                printf("Invalid type is entered.\n");
                x = false;
            }
        }
    }

    if(x==true){
        printf("\nEnter the Row(1-13): ");
        scanf("%d", &row);
        
        if (row>13 || row<0)
        {
            printf("Invalid row is entered.\n");
            x = false;
        }
        else
        {
            if(row>=1 && row<=2 && (!strcmp(input, "first"))){
            }
            else
            {
                if (row>=3 && row<=7 && (!strcmp(input, "business"))){
                }
                else{
                    if(row>=8 && row<=13 && (!strcmp(input, "economy"))){
                    }
                    else
                    {
                        printf("The row entered is not for this certain class.\n");
                        x = false;
                    }
                }
            }    
        }
    }

    if(x==true){
        printf("\nEnter the Column(A-F): ");
        scanf("%s[^\n]", column);
        
        if (!strcmp(column, "A")){
            col = 1;
        }
        else{
            if (!strcmp(column, "B")){
                col = 2;
            }
            else{
                if (!strcmp(column, "C")){
                    col = 3;
                }
                else{
                    if (!strcmp(column, "D")){
                        col = 4;
                    }
                    else{
                        if (!strcmp(column, "E")){
                            col = 5;
                        }
                    else{
                            if (!strcmp(column, "F")){
                                col = 6;
                            }
                            else
                            {
                                printf("Invalid column is entered.\n");
                                x = false;
                            }                        
                        }
                    }                
                }            
            }
        }
    }
    
	if(x==true){
        for(int i = 0; i<14; i++){
            for(int a = 0; a<7; a++){ 
                switch(i){
                    case 0:
                        switch (a){
                        case 0:
                            seats[i][a]="       ";
                            break;
                        case 1:
                            seats[i][a]="A ";
                            break;
                        case 2:
                            seats[i][a]="B ";
                            break;
                        case 3:
                            seats[i][a]="C ";
                            break;
                        case 4:
                            seats[i][a]="D ";
                            break;
                        case 5:
                            seats[i][a]="E ";
                            break;
                        case 6:
                            seats[i][a]="F \n";
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        switch (a){
                            case 0:
                                switch (i)
                                {
                                case 1:
                                    seats[i][a] = "Row1   ";
                                    break;
                                case 2:
                                    seats[i][a] = "Row2   ";
                                    break;
                                case 3:
                                    seats[i][a] = "Row3   ";
                                    break;
                                case 4:
                                    seats[i][a] = "Row4   ";
                                    break;
                                case 5:
                                    seats[i][a] = "Row5   ";
                                    break;
                                case 6:
                                    seats[i][a] = "Row6   ";
                                    break;
                                case 7:
                                    seats[i][a] = "Row7   ";
                                    break;
                                case 8:
                                    seats[i][a] = "Row8   ";
                                    break;
                                case 9:
                                    seats[i][a] = "Row9   ";
                                    break;
                                case 10:
                                    seats[i][a] = "Row10  ";
                                    break;
                                case 11:
                                    seats[i][a] = "Row11  ";
                                    break;
                                case 12:
                                    seats[i][a] = "Row12  ";
                                    break;
                                case 13:
                                    seats[i][a] = "Row13  ";
                                    break;
                                default:
                                    break;
                                }
                            break;
                            case 6:
                                if (i==row && a==col)
                                {
                                    seats[i][a] = "X \n";    
                                }
                                else{
                                    seats[i][a] = "* \n";
                                }
                                break;
                            default:
                                if (i==row && a==col)
                                {
                                    seats[i][a] = "X ";    
                                }
                                else{
                                    seats[i][a] = "* ";
                                }
                            break;
                        }
                    break;
                }
            }
        }
    }

    if(x==true){
        for(int i = 0; i<14; i++){
            for(int a = 0; a<7; a++){ 
                printf("%s", seats[i][a]);
            }
        }
    }

    if (x==false)
    {
        printf("\nSeat reserving program failed due to an invalid input.\n");
    }
    else if(x==true){
        printf("\nSeat has been successfully reserved.\n");
    }
	return 0;    
}
