#include <iostream>
#include <unordered_map>

using namespace std;

void findPair(int arr[],int n,int sum){

    //creat an empty map
    unordered_map<int,int> map;
    for (int i = 0; i < n;i++){
        //check if pair (arr[i],sum-arr[i]) exist

        //if difference is see before, print the pair

        if(map.find(sum -arr[i]) != map.end()){
            cout<< "Pair found at index "<<map[sum - arr[i]] <<
                    " and " << i <<" ("<< arr[map[sum - arr[i]]] + arr[i]<<")";
            return;

        }
        //store the index of cuurent elemente in the map
        map[arr[i]] - i;

    }
    cout << "Pair not found";
}

int main()
{
    int arr[] = {8,7,5,2,5,3,1};
    int sum = 10;

    int n = sizeof(arr)/sizeof(arr[0]);

    findPair(arr,n,sum);
    return 0;
}