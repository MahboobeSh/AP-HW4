#include<vector>
#include<numeric>
#include<random>
#include<iostream>
#include<algorithm>
#include<set>
#include<functional>


template < typename T>
void print(const T&); // Prints conteinar
int number();
int randomQ();


int main()
{   


	std::vector<int> a(50); //creating  a vector with  size of 50
	std::cout << " a is :";
	print (a);
	std::cout << "\n\n ";

	std::vector<int> b(50);
    std::generate(b.begin(),b.end(),  []() mutable { return randomQ(); }); //fill the vector with random number
	std::set<int> temp;
	temp.insert(b.begin(), b.end());//insert vector numbers into set
	b.resize(0);                   //delete the vector numbers
	std::copy(temp.begin(), temp.end(), std::back_inserter(b)); // insert set numbers into vector
	b.resize(50);                  /// resize the vector to 50
 
	std::cout << " b is :";
	print (b);
	std::cout << "\n\n ";

	std::vector<int> c(50);      
	std::generate(c.begin(), c.end(), []() mutable { return number(); });  //fill the vector with 1 to 50 number
	std::random_shuffle(c.begin() , c.end());                           //suffle the vector to  be random
	std::cout << "  c is :";
	print (c);
	std::cout << "\n\n ";
     
	 auto cIt = c.begin();
	 auto bIt = b.begin();
	
	std::for_each(a.begin(),a.end(),[&cIt , &bIt](int &i){i = std::pow(*(cIt++),2) - std::pow(*(bIt++),2);}); // a = c^2 - b^2
	std::cout << " a is :";
	print (a);
	std::cout << "\n\n ";



	
	return 0;
}

template< typename T>
void print(const T& v)
{
	for (auto x : v)
		std::cout << x << ", ";
	
	std::cout << "\n";
}

int randomQ()
{
	std::random_device rd;     // only used once to initialise (seed) engine
	std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
	std::uniform_int_distribution<int> uni(1, 50); // guaranteed unbiased
	auto random_integer = uni(rng);
	return random_integer;
}

int number(){
	static int a = 1;
    return a++;
}