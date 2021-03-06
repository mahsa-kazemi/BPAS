
#ifndef _SMQP_SUPPORT_TEST_H_
#define _SMQP_SUPPORT_TEST_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "SMQP_Support.h"
#include <math.h>

/** 
 * Get the next degree_t for a polynomial given the previous term's degree_t
 * and a "step" to take. In the univariate case this is prev+step. 
 * In the multivatirate case we consider an integer of radix maxUniDeg with 
 * coefficients described our degrees_t. We step such that the returned value
 * is equal to prev + step in this radix maxUniDeg representation.
 * e.g: prev = [1,2,7], step = 5, maxUniDeg = 10. Then next is [1,3,2];
 */
degrees_t getNextDegrees (degrees_t prev, degree_t step, degree_t maxUniDeg, int nvar);

/** 
 * Build a random polynomial given the the number of variables, nvar,
 * the number of terms, nterms, an (exclusive) upper bound on the absolute value
 * of the cofficients and a sparsity factor. 
 *
 * The sparsity factor is such that the difference in degree_t between sucsessive terms 
 * in the generated polynomial is 1 <= diff < sparsity;
 *
 * NOTE: It is assumed that rand() has already been seeded.
 */
Node* buildRandomPoly(int nvar, int nterms, unsigned long int coefBound, degree_t sparsity, int includeNeg);

/****************
* Random Polynomial Algorithm with Maximum Degree
*****************/

/**
 * @param[in] lastDegs Previous degree
 * @param[in] step The distance between the previous and returned degree
 * @param[in] nvar The number of variables
 * \example if the lastDegs = (2 2 4) and step = 3 then output is (1 2 4), and
 *  the sequence of in/out-puts is -> (0 2 4) -> (0 0 4) -> (0 0 3) -> (0 0 2).
 */
degrees_t getNextMaxDegs(degrees_t lastDegs, degree_t step, int nvar);

/**
 * Random Polynomial Algorithm with MaxDegs
 * @param[in] nvar The number of variables
 * @param[in] maxDegs The Maximum degrees of the output polynomial
 * @param[in] sparsity
 * @param[in] coefBound
 * @param[in] includeNeg
 * \brief This algorithm generates a random polynomial where the maximum degree is maxDegs.
 */
Node* randomMaxDegsPoly(int nvar, degrees_t maxDegs, degree_t sparsity, unsigned long coefBound, int includeNeg);

/***************
* Random Triangular Set
***************/

/**
 * Convert the exponents of a polynomial
 * @param[in] inPoly The polynomial
 * @param[in] inNvar The number of variables of inPoly
 * @param[in] outNvar The number of variables of output polynomial.
 */
void convertExponentPoly(Node* inPoly, int inNvar, int outNvar);

/** Build a Random Triangular Set based on maxDegs
 * @param[in] T A pointer to the triangular set
 * @param[in] outNvar The number of variables of output polynomial
 * @param[in] maxDegs The Maximum degree of polynomials
 * @param[in] sparsity
 * @param[in] coefBound
 * @param[in] includeNeg
 * \brief Output is a Lazard or general triangular set (w.r.t the lazard_flag)
 * such that if lazard_flag != 0, then the output set is Lazard triangular set.
 */
void randomTriangularSet (Node** T, int outNvar,degrees_t maxDegs, degree_t sparsity, unsigned long coefBound, int includeNeg);


#ifdef __cplusplus
}
#endif

#endif
