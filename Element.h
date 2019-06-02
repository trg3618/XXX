//
// Created by ziqiang tang on 2019-06-02.
//

#ifndef XXX_ELEMENT_H
#define XXX_ELEMENT_H

struct Element{
    int i;
    int j;
    arma::cx_mat value;
};
template <typename  T>
struct Element {
    int i;
    int j;
    T value;
};
#endif //XXX_ELEMENT_H
