#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <memory>

template<typename T>
void print( std::vector<T>& a)
{
  std::cout << "  size = " << a.size() << "  capacity = " << a.capacity() << std::endl;
  return;
}

int main() {

  std::vector< std::unique_ptr<std::string>> a{};
  std::vector< std::unique_ptr<std::string>> b{};
  b.reserve(1000);
  std::string temp{"hi"};
       
  for( int i = 0 ; i < 1000 ; i++)
  {
     std::unique_ptr<std::string> temp2{new std::string( "str " + std::to_string(i))};
     a.push_back (std::move(temp2));
     print(a);

  }

  for( int i = 0 ; i < 1000 ; i++)
  {
     std::unique_ptr<std::string> temp2{new std::string( "str " + std::to_string(i))};
     b.push_back (std::move(temp2));
     print(b);

  }
  
	      
    return 0;
}
