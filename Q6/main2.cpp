#include<vector>
#include<numeric>
#include<random>
#include<iostream>
#include<algorithm>
#include<set>


class Average //Functor
{
public:
	Average(double avg) : a{ avg } {}
	bool operator() (const int& x, const int& y) { return std::abs(x - a) < std::abs(y - a); }
	double a;
};

template < typename T>
void print(const T&); // Prints conteinar


int main()
{   
    std::cout <<"\n part A : " << std::endl;
    std::vector<int> vec1{1,2,3,4,5,4,3,2,1}; //main vector for a 
    //print vector
    std :: cout << "Original vector : ";
    print(vec1);

    vec1.erase(std::remove(vec1.begin(), vec1.end(), 2),vec1.end());//remove all element by value 2
    std :: cout << "Removed vector : ";
    print(vec1);

    std::cout <<"\n part B : " << std::endl;
    auto vecIt = vec1.begin();
	std::for_each(vec1.begin(),vec1.end(),[&vecIt](int &i){i = (*(vecIt++))*2;});
	std :: cout << "vector multiple by two: ";
	print(vec1);

    std::cout <<"\n part C : " << std::endl;
	double avg{ std::accumulate(vec1.begin(), vec1.end(), 0.) / vec1.size() }; // the average
	std::cout << "average = " << avg << std::endl;
	
	Average a{ avg };
	std::sort(vec1.begin(), vec1.end(), a); // Sorting numbers by difference with average
	std::cout << "Sorted vector = " ;
	print(vec1);

	std::cout <<"\n part D : " << std::endl;
	std::sort(vec1.begin() ,vec1.end(), std::less<>());
	vec1.erase(std::unique(vec1.begin(),vec1.end()),vec1.end());
	std :: cout << "Deleted vector: ";
	print(vec1);

    
	std::cout <<"\n part E :" << std::endl;
    std::vector<int> vec2{1,2,3,4,5,4,3,2,1};
	print(vec2);
	std::set<int> b{};
	b.insert(vec2.begin() , vec2.end()); // insert all vector element into set
	std::cout << "Original set :";
	print(b);
	std::cout << "Removed set :";
    auto upit=b.upper_bound(3);
    b.erase(upit , b.end());
	print(b);

	return 0;
}

template< typename T>
void print(const T& v)
{
	for (auto x : v)
		std::cout << x << ", ";
	
	std::cout << "\n";
}