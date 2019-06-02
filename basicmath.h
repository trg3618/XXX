//
// Created by ziqiang tang on 2019-06-02.
//
// 1. for(auto &t : ... ) ...,  '&'lization

#ifndef XXX_HEAD_H
#define XXX_HEAD_H

namespace basicmatrix {
    enum MatrixType {
      DIAGONAL,
      UPPER_TRIANGLE,
      LOWER_TRIANGLE,
      UPPER_TRIANGLE_WO_DIAG,
      LOWER_TRIANGLE_WO_DIAG,
      BLOCK_DIAGONAL,
      BAND,
      RANDOM
    };


    matrix operator*(matrix &a, matrix &b);

    matrix operator+(matrix &a, matrix &b);

    matrix inv(matrix &a);
    enum SOLVE_RET_TYPE {
        NO_ERROR,
        OVER_FLOW,
        NOT_CONVERGE
    }
    SOLVE_RET_TYPE solve(matrix &a, matrix &b,matrix &x);
    matrix solve(matrix &a, matrix &b);
};

}

#endif //XXX_HEAD_H
