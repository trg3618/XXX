//
// Created by ziqiang tang on 2019-06-02.
//

#ifndef XXX_DENSE_MATRIX_H
#define XXX_DENSE_MATRIX_H


template<typename T>
class dense_matrix : public matrix<T> {
private:
    baisdata::array2d <T> value_list;
public:
    dense_matrix static zero(int N,int M) {
        return dense_matrix<T>(N,M);
    }
    dense_matrix(int N, int M) : matrix(N, M), value_list(N, M) {}
    dense_matrix(int N, int M, T v,MatrixType t) : matrix(N, M) {}

};


#endif //XXX_DENSE_MATRIX_H
