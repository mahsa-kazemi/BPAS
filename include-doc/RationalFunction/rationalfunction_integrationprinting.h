#ifndef _RATIONALFUNCTION_INTEGRATIONPRINTING_H
#define _RATIONALFUNCTION_INTEGRATIONPRINTING_H


//template <class RealField>
//extern std::string fieldToFPS(RealField a);
template <class UnivariatePolynomialOverField, class Field>
extern void _printFormalIntegral(UnivariatePolynomialOverField &A, UnivariatePolynomialOverField &D, UnivariatePolynomialOverField &P, std::vector<UnivariatePolynomialOverField> &G, std::vector<UnivariatePolynomialOverField> &U, std::vector< SparseUnivariatePolynomial<UnivariatePolynomialOverField> > &S, bool prettyPrinting, bool floatingPointPrinting, bool vectorDotPrinting);
template <class UnivariatePolynomialOverField, class Field>
extern void _printIntegral(UnivariatePolynomialOverField A, UnivariatePolynomialOverField D, UnivariatePolynomialOverField P, std::vector<UnivariatePolynomialOverField> G, std::vector<Field> h, std::vector<UnivariatePolynomialOverField> H, std::vector<Field> k, std::vector<UnivariatePolynomialOverField> K1, std::vector<UnivariatePolynomialOverField> K2, bool prettyPrinting, bool floatingPointPrinting, bool vectorDotPrinting, std::string outputFormatting);

#endif
/* This file is part of the BPAS library http://www.bpaslib.org

    BPAS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    BPAS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with BPAS.  If not, see <http://www.gnu.org/licenses/>.

    Copyright:
        Mohammadali Asadi <masadi4@uwo.ca>
        Alexander Brandt <abrandt5@uwo.ca>
        Changbo Chen <changbo.chen@hotmail.com>
        Svyatoslav Covanov <svyatoslav.covanov@loria.fr>
        Farnam Mansouri <mansouri.farnam@gmail.com>
        Davood Mohajerani <mohajerani.d@gmail.com>
        Robert Moir <robert@moir.net>
        Marc Moreno Maza  <moreno@csd.uwo.ca>
        Delaram Talaashrafi <dtalaash@uwo.ca>
        Amha Tsegaye <atsegaye@uwo.ca>
        Linxiao Wang <lwang739@uwo.ca>
        Ning Xie <nxie6@csd.uwo.ca>
        Yuzhen Xie <yuzhenxie@yahoo.ca>

*/


