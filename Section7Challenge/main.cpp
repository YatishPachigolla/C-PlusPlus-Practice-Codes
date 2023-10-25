#include<iostream>
#include<vector>
using namespace std; 

int main(){
    
    //empty vectors of unkonwn size 
    vector<int>vector1;
    vector<int>vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout<<"The elements in the vector1 are\n" << vector1.at(0)<<"\n"<<vector1.at(1) << endl;
    cout<<"The size of vector1 is "<< vector1.size()<<endl;
    
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout<<"\nThe elements in the vector2 are\n" << vector2.at(0)<<"\n"<<vector2.at(1)<<endl;
    cout<<"The size of vector2 is "<<vector2.size()<<endl;
    
    
    /*
vector<vector<int>> vector_2d;
     //{
        //{1,2},
      //  {2,3}  You have to initiate the vector with zeros explicitly and then place elements... something fishy...
    //};
    //add vector1 to 1st row of vector_2d
    vector_2d.at(0).at(0) = vector1.at(0);
    cout<<vector_2d.at(0).at(0)<<endl;
    vector_2d.at(0).at(1) = vector1.at(1);
    //add vector1 to 2nd row of vector_2d
    vector_2d.at(1).at(0) = vector2.at(0);
    vector_2d.at(1).at(1) = vector2.at(1);
    
    cout<<vector_2d.at(0).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    */
    
    
    vector<vector<int>>vector_2d; //*********VERY IMP*********since it is an empty vector, we have to pushback but not assign... 
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "After adding vector 1 and vector 2 into vector_2d, we have the vector_2d as "<< endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    
    vector1.at(0) = 1000;
    
    
    cout << "After changing the element in vector1, we have the vector_2d as "<< endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    
    cout << "After changing the element in vector1, we have the vector1 as "<< endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}