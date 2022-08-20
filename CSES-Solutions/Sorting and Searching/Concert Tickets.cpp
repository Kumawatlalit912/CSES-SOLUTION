// case#1
// 5 3
// 5 3 7 8 5
// 4 8 3
#include <bits/stdc++.h>
using namespace std;

int N, M, h, t;
multiset<int> prices;

int main(){
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++){
        scanf("%d", &h);
        prices.insert(-h);
    }
//     output
    
//     -8 -7 -5 -5 -3     ----->multiset values 
//      3
//      8
//      -1
    
    for(int i = 0; i < M; i++){
        scanf("%d", &t);
        if(prices.lower_bound(-t) == prices.end())
            printf("-1\n");
        else {
            printf("%d\n", -(*prices.lower_bound(-t)));
            prices.erase(prices.lower_bound(-t));
        }
    }
}
