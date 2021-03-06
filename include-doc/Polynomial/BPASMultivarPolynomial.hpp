
#ifndef _BPAS_MULTIVAR_POLYNOMIAL_H_
#define _BPAS_MULTIVAR_POLYNOMIAL_H_


#include "BPASPolynomial.hpp"
#include <vector>


/**
 * An abstract class defining the interface of a multivariate polynomial over an arbitrary BPASRing.
 *
 * This class is automatically determined to be an integral domain, GCD domain, etc.
 * depending on the template specialization of Ring.
 */
template <class Ring>
class BPASMultivariatePolynomial : public virtual BPASPolynomial<Ring>
{
	// Monomials are the abelian free monoid generated by Symbols
	public:
		// virtual void setPolynomialRing(const std::vector<Symbol>& v) = 0;
		// virtual std::vector<Symbol> polynomialRing() = 0;


		/**
		 * Differentiate this polynomial, with respect to a particular
		 * variable, setting itself to its derivative.
		 *
		 * @param var, the variable to derive with respect to.
		 */
		virtual void differentiate(const Symbol& var) = 0;

		/**
		 * Differentiate this polynomial k times, with respect to a particular
		 * variable, setting itself to its derivative.
		 *
		 * @param var, the variable to derive with respect to.
		 * @param k, the number of times to differentiate.
		 */
		virtual void differentiate(const Symbol& var, int k) = 0;

		/**
		 * Differentiate this polynomial, with respect to a particular
		 * variable, setting itself to its derivative.
		 *
		 * @param var, the variable to derive with respect to.
		 *
		 * @return the derivative.
		 */
		virtual Derived derivative(const Symbol&) const = 0;

		/**
		 * Differentiate this polynomial k times, with respect to a particular
		 * variable, setting itself to its derivative.
		 *
		 * @param var, the variable to derive with respect to.
		 * @param k, the number of times to differentiate.
		 *
		 * @return the derivative.
		 */
		virtual Derived derivative(const Symbol&, int) const = 0;

		// TODO
		// virtual void integrate(const Symbol&) = 0;
		// virtual void integrate(const Symbol&, int) = 0;
		// virtual Derived integral(const Symbol&) const = 0;
		// virtual Derived integral(const Symbol&, int) const = 0;

		/**
		 * Evaluate this polynomial by substituting the input ring
		 * elements elems for the variables vars, such that
		 * vars[i] = elems[i].
		 *
		 * @param n, the size of the vars and elems arrays.
		 * @param vars, the variables to evaluate.
		 * @param elems, the ring elements to substitute for the varibales.
		 * @return the evaluation of this polynomial for the variables in vars.
		 */
		virtual Derived evaluate(int n, const Symbol* vars, const Ring* elems) const = 0;

		/**
		 * Evaluate this polynomial by substituting the input ring
		 * elements elems for the variables vars, such that
		 * vars[i] = elems[i].
		 *
		 * @param vars, the variables to evaluate.
		 * @param elems, the ring elements to substitute for the varibales.
		 * @return the evaluation of this polynomial for the variables in vars.
		 */
		virtual Derived evaluate(const std::vector<Symbol>& vars, const std::vector<Ring>& elems) const = 0;

		/**
		 * Get the number of variables in this multivariate polynomial
		 * which have positive degree.
		 *
		 * @return the number of variables.
		 */
		virtual int numberOfVariables() const = 0;

		/**
		 * Get the number of variables defined for the poylnomial ring of this
		 * polynomial, that is, in the ambient space of this polynomial.
		 *
		 * @return the number variables in the polynomial ring of this polynomial.
		 */
		virtual int numberOfRingVariables() const = 0;

		/**
		 * Get the partial degree of this polynomial with respect to
		 * the variable v.
		 *
		 * @return the partial degree w.r.t to variable v.
		 */
		virtual Integer degree(const Symbol& v) const = 0;

		// virtual unsigned int degree(const Symbol& v) const = 0;

		/**
		 * Get the coefficient of this polynomial with respect to the
		 * monomial defined by exponent vector exps of size n.
		 * The exponent vector should be defined over all variables in the
		 * polynomial ring.
		 *
		 * @param n, the size of the exponent vector
		 * @param exps, the exponent vector
		 */
		virtual Ring coefficient(int n, const int* exps) const = 0;

		/**
		 * Get the coefficient of this polynomial with respect to the
		 * monomial defined by exponent vector exps.
		 * The exponent vector should be defined over all variables in the
		 * polynomial ring.
		 *
		 * @param exps, the exponent vector
		 */
		virtual Ring coefficient(const std::vector<int>& exps) const = 0;


		/**
		 * Set the coefficient of this polynomial for the
		 * monomial defined by exponent vector exps, of size n, to r.
		 * The exponent vector should be defined over all variables in the
		 * polynomial ring.
		 *
		 * @param n, the size of the exponent vector
		 * @param exps, the exponent vector
		 * @param r, the ring element to set as coefficient.
		 */
		virtual void setCoefficient(int n, const int*, const Ring& r) = 0;

		/**
		 * Set the coefficient of this polynomial for the
		 * monomial defined by exponent vector exps to r.
		 * The exponent vector should be defined over all variables in the
		 * polynomial ring.
		 *
		 * @param exps, the exponent vector
		 * @param r, the ring element to set as coefficient.
		 */
		virtual void setCoefficient(const std::vector<int>& v, const Ring& r) = 0;

		/**
		 * Set the variables in the polynomial ring to xs.
		 * This can change be used to change the symbols of the variables
		 * as well as to increase or decrease the dimension of this polynomial ring.
		 * On a decrease, this polynomial may be invalidated if it has
		 * positive degree in a variable being removed.
		 *
		 * @param xs, the vector of new symbols for the polynomial ring.
		 */
		virtual void setRingVariables (const std::vector<Symbol>& xs) = 0;


		/**
		 * Get all the variables in the polynomial ring.
		 *
		 * @return a vector of all the variables in this polynomial's ring.
		 */
		virtual std::vector<Symbol> ringVariables() const = 0;

		/**
		 * Get all the variables in this polynomial with positive degree.
		 *
		 * @return a vector of all the variables in this polynomial with positive degree.
 		 */
		virtual std::vector<Symbol> variables() const = 0;

		// virtual Derived content(const std::vector<Symbol>& v) const = 0;
		// virtual Derived primitivePart(const std::vector<Symbol>& v) const = 0;
		// virtual Derived primitivePart(const std::vector<Symbol>& v, Derived& content) const = 0;
};




#endif
