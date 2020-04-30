#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>
std::string successor(std::string ow){
    std::vector <std::vector<int>> a;
    std::vector<int> b;
    std::vector<int> c;
    for (const char &i:ow){
        
        b.push_back(int(i));
        c.push_back(int(i));
        std::sort (b.begin(), b.end());
    }
    std::vector<int >d = b;
    std::reverse (d.begin(), d.end());
    do {
    a.push_back(b);
    if(c==b){
         std::next_permutation(b.begin(), b.end());
        
        for (auto const& value : b)
        {
            char v=char(value);
        std::cout << v;
        } 
        return ("");
        }
    else if (c==d){
         return "Sin sucesor";
        }
  } while ( std::next_permutation(b.begin(), b.end()) );

  
  
}
int main()
{
  std::string in; 
  std::vector<std::string> mi;
  do{
      
      std::cin>>in;
      mi.push_back(in);
      
      
  }while(in!="#");
  
  for (auto & a:mi){
      std::string si;
      si=successor(a);
      std::cout<<si<<std::endl;
      
  }
  
}