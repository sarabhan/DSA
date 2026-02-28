#include<iostream>
#include<vector>
using namespace std;

//THE BEST WAY TO PASS VECTOR TO FUNCTION AS INPUT
//IS TO PASS USING POINTERS
void func_by_reference(vector<int> &vec) 
{
    vec.push_back(42); // Modifies the original vector
    cout << "Inside function (by reference), size: " << vec.size() <<endl;
}
int main()
{
/*here 'hehe' is the name of the vector
basic vector syntax: 
    vector <*vector_type*> *vector_name*(size,initial elements of whole vector)
*/
vector<int> hehe; //this allows vector to be dynamic

//this gives fixed size to vector. currently, all elements are 0
vector<int> huha(10);
 
vector<int> huehue(10,3); //currently, all elements will be '3'
vector <int> copy_of_huehue(huehue); //creates copy of another vector

vector<int> v = {1,2,3}; //defined a complete vector

huha.push_back(2); //add element at last
huha.emplace_back(3); //faster than push back
huha.pop_back(); //remove last ele

cout<< "here is the size & capacity of vector"<<endl;
cout << v.size() <<endl; //no.of.eles in vect
cout << v.capacity()<<endl; //memory space allocated to vect

//bound checking is done to check if the index extered is out of range. 
int i = 0;
cout<< "here is the eles of vector"<<endl;
cout<<v[2]<<endl;        // fast, NO bounds check. used in competetive programming. 
cout<<v.at(i)<<endl;     // slower, bounds-checked to prevent errors
cout<<v.front()<<endl;   // first element
cout<<v.back()<<endl;    // last element

v.reserve(1000); //reserves space for vector to prevent repeated allocation
//for loops in vect
cout<< "here is eles of vector using for loop"<<endl;
for (i=0; i<v.size(); i++)
{
    cout << v[i]<<endl;
}
cout<< "here is eles of vector using range"<<endl;
for (int x:v)
{
    cout<<x<<endl;
}
cout<< "here is eles of vector using pointers"<<endl;
for (int &x:v)
{
    cout<<x<<endl;
    x+=10;
}
v.clear();       // remove all elements
v.resize(5);     // size = 5
v.resize(5, 7);  // new elements = 7

//THE BEST WAY TO PASS VECTOR TO FUNCTION AS INPUT
//IS TO PASS USING POINTERS
vector<int> original_vec = {1, 2, 3};
func_by_reference(original_vec);
cout << "Inside main (after calling by reference), size: " << original_vec.size() << std::endl; 
// Output size in main will be 4
return 0;


return 0;
}