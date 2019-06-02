//
// Created by ziqiang tang on 2019-06-02.
//

#include "Block_sparse_mat.h"


aram::cx_mat Block_sparse_mat::GetValue(int i,int j){
    for(auto &t:value_list){
        if(t.i == i && t.j == j){
            return t.value;
        }
    }
    return arma::cx_mat::zero;
}