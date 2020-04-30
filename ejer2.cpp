#include <iostream>
#include <vector>

int bubble_sotr(std::vector<int> si){
    int a=0;
    for (int k = 0; k < si.size(); k++)
		{
			for (int i = 0; i < si.size() - 1; i++){
				if (si[i] > si[i + 1])
				{
					int temp = si[i];
					si[i] = si[i + 1];
					si[i + 1] = temp;
					a++;
				}
			}
		}
    return a;
}
int ej2(){
    int n;
    int str;
    std::vector<int> v;

    std::cin>>n;
    while(n--){
        std::cin>>str;
        v.push_back(str);
    }
    return bubble_sotr(v);
}
int main(){
    int n;
    std::cin>>n;
    std::vector<int> a;
    while(n){
        int b =ej2();
        a.push_back(b);
        --n;
        
    }
    for(auto &i:a)
        std::cout<<"Optimal train swapping takes "<<i<<" swaps"<<std::endl;
    
    
    
    
}