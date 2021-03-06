// TreeAmericanDecoupling.h


#ifndef TREE_AMERICAN_H
#define TREE_AMERICAN_H
/*
#if defined(_MSC_VER)
#pragma once
#endif
*/
#include "TreeProductsDecoupling.h"
#include "PayOffBridgeDecoupling.h"

class TreeAmerican : public TreeProduct
{

public:

	TreeAmerican(double FinalTime,
		const PayOffBridge& ThePayOff_);

	virtual TreeProduct* clone() const;
	virtual double FinalPayOff(double Spot) const;
	virtual double PreFinalValue(double Spot,
		double Time,
		double DiscountedFutureValue) const;
	virtual ~TreeAmerican(){}

private:

	PayOffBridge ThePayOff;

};

#endif

/*
*
* Copyright (c) 2002
* Mark Joshi
*
* Permission to use, copy, modify, distribute and sell this
* software for any purpose is hereby
* granted without fee, provided that the above copyright notice
* appear in all copies and that both that copyright notice and
* this permission notice appear in supporting documentation.
* Mark Joshi makes no representations about the
* suitability of this software for any purpose. It is provided
* "as is" without express or implied warranty.
*/

