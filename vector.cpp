#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // vectorの変数をv
    vector<int> v = { 8, 3, 7, 4, 2, 9, 3 } ;
    // 要素数をsizeとする
    size_t size = v.size() ;

    // 変数minに0を代入する
    size_t min = 0 ;

    // size回のループを実行する
    // 変数iに0からsize-1までの整数を代入する
    for ( size_t index = 1 ; index != size ; ++index )
    {
        // 'v.at(index) < v.at(min)'ならばmin = index
        if ( v.at(index) < v.at(min) )
            min = index ;
    }

    // 一番小さい値を出力
    cout << v.at(min) ;
}