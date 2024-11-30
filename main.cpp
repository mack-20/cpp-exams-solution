#include <iostream>

using namespace std;

class Fraction{
protected:
    int numerator = 0, denominator = 1, whole_number = 0;
public:
    Fraction(){}
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }

    int getNumerator(){
        return numerator;
    }

    int getDenominator(){
        return denominator;
    }

    int getWholeNumber(){
        return whole_number;
    }

    Fraction operator + (Fraction op2){
        int op2_numerator = op2.getNumerator();
        int op2_denominator = op2.getDenominator();

        int r_numerator = (this->numerator * op2_denominator) + (op2_numerator * this->denominator);
        int r_denominator = this->denominator * op2_denominator;

        Fraction result(r_numerator, r_denominator);
        return result;
    }

    Fraction operator * (Fraction op2){
        int op2_numerator = op2.getNumerator();
        int op2_denominator = op2.getDenominator();

        int r_numerator = this->numerator * op2_numerator;
        int r_denominator = this->denominator * op2_denominator;

        Fraction result(r_numerator, r_denominator);
        return result;
    }

    float toDecimal(){
        float result;
        if(whole_number == 0){
            result = float(numerator)/float(denominator);
        }
        else if(whole_number > 0){
            numerator += (denominator*whole_number);
            result = float(numerator)/float(denominator);
        }
        else{
            // do nothing
        }

    }

    virtual void showFraction(){
        cout << numerator << "/" << denominator << endl;
    }

};


class ProperFraction : public Fraction{
public:
    ProperFraction(int numerator, int denominator){
        if(numerator < denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
    }
};


class ImproperFraction : public Fraction{
private:
    bool mixed;
public:
    ImproperFraction(int whole_number, int numerator, int denominator){
        if(whole_number > 0 && numerator < denominator){
            this->whole_number = whole_number;
            this->denominator = denominator;
            this->numerator = numerator;
        }
        this->toImpropeFraction();
    }

    ImproperFraction(int numerator, int denominator){
        if(numerator > denominator){
            this->denominator = denominator;
            this->numerator = numerator;
        }
    }

    void toMixedFraction(){
        if(whole_number == 0){
            int quotient, remainder;
            quotient = numerator/denominator;
            remainder = numerator % denominator;

            // set values
            this->whole_number = quotient;
            this->numerator = remainder;
        }
    }

    void toImpropeFraction(){
        this->numerator += (denominator*whole_number);
        this->whole_number = 0;
        this->mixed = false;
    }

    void showFraction(){
        if(whole_number > 0){
            cout << whole_number << " " << numerator << "/" << denominator << endl;
        }
        else{
            cout << numerator << "/" << denominator << endl;
        }
    }

};


int main(){
    // II.a.
    ProperFraction a_frac1(1,2);
    ProperFraction a_frac2(1,2);

    Fraction a_sum = a_frac1 + a_frac2;

    //II.b.
    ImproperFraction b_frac1(2,3,4);
    ImproperFraction b_frac2(5,3);

    Fraction b_sum = b_frac1 + b_frac2;

    //II.c.
    ImproperFraction c_frac1(5,3);
    ProperFraction c_frac2(1,2);

    Fraction c_product = c_frac1 * c_frac2;

    //II.d.
    ImproperFraction d_frac1(2,3,4);
    ImproperFraction d_frac2(5,3);

    Fraction d_product = d_frac1 * d_frac2;

    // display results from a to d
    cout << "a. ";
    a_sum.showFraction();

    cout << "b. ";
    b_sum.showFraction();

    cout << "c. ";
    c_product.showFraction();

    cout << "d. ";
    d_product.showFraction();

    //II.f
    ProperFraction f_frac1(1,2);
    float f_frac1_decimal = f_frac1.toDecimal();

    //II.g
    ImproperFraction g_frac1(5,3);
    float g_frac1_decimal = g_frac1.toDecimal();

    //II.h
    ImproperFraction h_frac1(2,3,4);
    float h_frac1_decimal = h_frac1.toDecimal();

    // display results from f to h
    cout << "f. ";
    cout << f_frac1_decimal << endl;

    cout << "g. ";
    cout << g_frac1_decimal << endl;

    cout << "h. ";
    cout << h_frac1_decimal << endl;


    return 0;
}
