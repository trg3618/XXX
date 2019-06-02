//
// Created by ziqiang tang on 2019-06-02.
//

#ifndef XXX_SPARSE_MATRIX_H
#define XXX_SPARSE_MATRIX_H


template<typename T>
class sparse_matrix : public matrix<T> {
private:
    std::vector <Element> value_list;
public:
    T GetValue(int i, int j)

    sparse_matrix static zero(int N,int M);

    sparse_matrix(int N, int M) : matrix(N, M) {}
    sparse_matrix(int N, int M, T v,MatrixType t) : matrix(N, M) {}

};

template<typename T> T sparse_matrix<T>::GetValue(int i, int j) {
    for (auto &t: value_list) {
        if (t.i == i && t.j == j) {
            return t.value;
        }
    }
}

template<typename T> sparse_matrix static sparse_matrix<T>::zero(int N,int M) {
    return sparse_matrix<T>(N,M);
}

#endif //XXX_SPARSE_MATRIX_H
