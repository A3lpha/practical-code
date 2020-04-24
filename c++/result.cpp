#include <iostream>
#include <fstream>
using namespace std;
for(int level=0; level<LEVELS; level++)
 { 
for(int row=0; row<ROWS; row++) { 
for(int col=0; col<COLS; col++) { 
if (col==0||col==3) { 
cabins[level][row][col] = (row<5) ? 'B' : 'W'; 
} else { 
cabins[level][row][col] = 'I'; 
} 
} 
} 
} 
for(int level=0; level<LEVELS; level++) { 
cout << "--------------- LEVEL " << (level + 1) << " --------------------------" << endl; 
cout << '+'; 
for(int col=0; col<COLS; col++) { cout << '\t' << (col+1); } 
cout << endl; 
for(int row=0; row<ROWS; row++) { 
cout << (row + 1); 
for(int col=0; col<COLS; col++) { 
cout << '\t' << cabins[level][row][col]; 
} 
cout << endl; 
} 
cout << endl; 
}
system ("pause");
return 0;
}

