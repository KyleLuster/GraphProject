#include <iostream>
using namespace std;

string verts[15] = {"Mohave","Coconino","Navajo","Apache","Greenlee","Cochise","Santa Cruz","Pima","Pinal","Graham","Gila","Yavapai","La Paz","Yuma","Maricopa"};

int edges[15][15] = {{0,14,0,0,0,0,0,0,0,0,0,14,9,0,0},
                     {14,0,9,0,0,0,0,0,0,0,17,9,0,0,0},
                     {0,9,0,5,0,0,0,0,0,20,13,0,0,0,0},
                     {0,0,5,0,17,0,0,0,0,19,0,0,0,0,0},
                     {0,0,0,17,0,16,0,0,0,4,0,0,0,0,0},
                     {0,0,0,0,16,0,8,9,0,12,0,0,0,0,0},
                     {0,0,0,0,0,8,0,6,0,0,0,0,0,0,0},
                     {0,0,0,0,0,9,6,0,7,12,0,0,0,23,10},
                     {0,0,0,0,0,0,0,7,0,13,0,0,0,0,6},
                     {0,0,20,19,4,1,0,12,13,0,7,0,0,0,0},
                     {0,17,13,0,0,0,0,0,5,7,0,18,0,0,8},
                     {14,9,0,0,0,0,0,0,0,0,18,0,15,0,9},
                     {9,0,0,0,0,0,0,0,0,0,0,15,0,11,15},
                     {0,0,0,0,0,0,0,23,0,0,0,0,11,0,18},
                     {0,0,0,0,0,0,0,10,6,0,8,9,15,18,0}  
                     };




void print() {
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      cout << edges[i][j] << " ";
    }
    cout << endl;
  }
}

void getNeighbors(int input) {
  for (int i = 0; i < 15; i++) {
    if (edges[input][i] != 0) {
      cout << verts[i] << endl;
    }
  }
  cout << " " << endl;
}

void getDistance(int start, int end) {
  int total = 0;
  int m = end;
  if(edges[start][m] > 0){
    cout<<edges[start][m]<<endl;
  }
  while(edges[start][m] == 0){
    if(m == 15){
      m = -1;
    }
    m+=1;
  if(edges[start][m] == 0){
    m+=1;
    }
  total+=edges[start][m];
  start = m;
  m = end;
  if(edges[start][m]>0){
    total+=edges[start][end];
    }
  }
  cout<<total<<endl;
}

int main() {

 print();
 cout<<" "<<endl;
 getNeighbors(2);
 cout<<" "<<endl;
 getDistance(7,8);

}
