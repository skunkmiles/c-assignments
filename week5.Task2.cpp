#include<iostream>
using namespace std;
 int main(){
    int occupancy[5][10];
    int vacant,occupied;

        for(int i=0;i<5;i++){

            for(int j=0;j<10;++j){
                cout<<occupancy[i][j]<<" ";
            }
        }
        //display the occupancy of the rooms
        cout<<"ROOM OCCUPANCY REPORT"<<endl;
        cout<<"1 =occupied, 0=vacant"<<endl;

        for(int i=0;i<5;i++){
        occupied =0;
        vacant =0;

        cout<<"\nFloor "<<i+1<<" ";

        for(int j=0;j<10;j++){
            cout<<occupancy[i][j]<<" ";
            if(occupancy[i][j] == 1){
                occupied++;
            } else {
                vacant++;
            }
        }
        cout<<"\nOccupied: "<<occupied<<" Vacant: "<<vacant<<endl;
    }

    return 0;
 }