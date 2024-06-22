#include <iostream>

using namespace std;
int main(){

    //2D array
    //int packages [3][4] ; // 12 where we can store ints

    int packages [] [4] {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {3,4,5,6}
    };



    //Read data from a 2D array
    
    for(int  i{0} ; i < 3; ++ i){

        for(int  j{0}; j < 4 ; ++j){

            cout << packages[i][j] << "   ";
        }
        cout << endl;

    }
   


	//3D arrays are defined in the same way. We just use three sets of indexes
    // 3 lights per room, 5 rooms per house 7 houses per block

    int house_block [7] [5] [3] {
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
        },
        {
            {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
        },
        {
            { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
        },
        {
             {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
        },
        {
             {61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75} 
        },
        {
            {76,77,78},{79,80,81},{82,83,84},{85,86,87},{88,89,90}  
        },
        {
             {91,92,93},{94,95,96},{97,98,99},{100,101,102},{103,104,105} 
        }
    };


    for(int  i{0}; i < 7 ; ++i){

        for(int  j{0} ; j <5 ; ++j){

            for(int  k{0} ; k < 3 ; ++k){

                cout << house_block[i][j][k] << "     ";
            }
        }
    }
   
   cout <<"\n";
    

	//For 3d and really any multi dimensional array , you have to specify
	//the number of elements in []'s , only the left most is not mandatory.
	//Below is the example for 3D reproduced.Omitting the 5 or the 3 or both
	//will cause a compile error.
    
    int house_block1 [] [5] [3] {
        
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
        },
        {
            {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
        },
        {
            { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
        },
        {
             {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
        }
          
    };

	for (int  i {0} ; i < 4; ++i){
        
        for( int  j{0}; j <5 ; ++j){
            
			cout << "[";
            for( int  k{0}; k < 3 ; ++k){
                
                cout << house_block1[i][j][k] << " ";
            }
            cout <<"] " ;//Separate elements for good visualization
        }
        cout << endl;//Separate elements for good visualization
    }

    

	
	//If you put less elements than the amount specified in the declaration, the compiler
    //will automaticaly fill out those left out with 0 or '\0' is the array is of char.
    // Change the array to int house_block [] [5] [4], and because all inner arrays have 3,
    // elements, the fourth will be autofilled with 0.
    // Also remove some other elements, I chose the {4,5,6} array but you can add others 
    // when recording to make this a bit fun. The left out indexes will be auto filled with 
    // zeros
   
    int house_block2 [] [5] [4] { 	// Try to make the last dimension 5 and show
									//that the compiler appends 2 zeros
        {
            {1,2,3},{4},{7,8,9},{10,11,12},{13,14,15}  //The one element array will be autofilled
													// with zeros to complete 4 elements
        },
        {
            {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
        },
        {
            { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
        },
        {
             {46,47,48},{49,50,51},{52,53,54},{55,56,57}//,{58,59,60}  // The spots for {58,59,60
																	   // Will be autofilled with 0
        }
          
    };

    //Modify data
    house_block2[0][2][1] = 1021;
    
	cout << endl;
	cout << "Printing out 3d house_block array with defaulted elements : " << endl;
	
	for (int  i {0} ; i < 4; ++i){
        
        for( int  j{0}; j < 5 ; ++j){
            
			cout << "[";
            for( int  k{0}; k < 4 ; ++k){
                
                cout << house_block2[i][j][k] << " ";
            }
            cout <<"] " ;//Separate elements for good visualization
        }
        cout << endl;//Separate elements for good visualization
    }



   
    return 0;
}