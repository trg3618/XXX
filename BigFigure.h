//
// Created by ziqiang tang on 2019-06-02.
//

#ifndef XXX_BIGFIGURE_H
#define XXX_BIGFIGURE_H

class BigFigure{
public:
    BigFigure operator+(BigFigure &x);
    BigFigure operator+(BigFigure &x);
    BigFigure operator*(BigFigure &x);
    BigFigure operator/(BigFigure &x);
    double GetDouble();
};
BigFigure sin(BigFigure &x);
BigFigure cos(BigFigure &x);
BigFigure tan(BigFigure &x);
BigFigure cot(BigFigure &x);
BigFigure csc(BigFigure &x);
BigFigure sec(BigFigure &x);
BigFigure exp(BigFigure &x);
BigFigure exp2(BigFigure &x);
BigFigure exp10(BigFigure &x);
BigFigure pow(BigFigure &x,BigFigure &y);
};


#endif //XXX_BIGFIGURE_H
