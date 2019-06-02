//
// Created by ziqiang tang on 2019-06-02.
//

#ifndef XXX_BLOCK_SPARSE_MAT_H
#define XXX_BLOCK_SPARSE_MAT_H

class Block_sparse_mat{
private:

    std::vector<Element> value_list;
public:

    aram::cx_mat GetValue(int i,int j);

};



#endif //XXX_BLOCK_SPARSE_MAT_H
