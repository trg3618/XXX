//
// Created by ziqiang tang on 2019-06-02.
//

#ifndef XXX_ARRAY1D_H
#define XXX_ARRAY1D_H

template <typename T>
class array1d{
private:
    std::vector<T> value_list;
    std::vector<bool> flag_list;
public:
    array1d(int N):value_list(N){}
    T Get(int i){
        return value_list[i];
    }
    T Set(int i,T &value){
        value_list[i] = value;
    }
};


#endif //XXX_ARRAY1D_H
