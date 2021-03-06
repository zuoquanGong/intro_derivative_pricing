//
//
//                      ParkMiller.h
//
//


//Edit file to reflect base class change.


#ifndef PARK_MILLER_H
#define PARK_MILLER_H

#include <Random2.h>
#include <vector>

class ParkMiller
{
public:

    ParkMiller(long Seed = 1);

    long GetOneRandomInteger();
    void SetSeed(long Seed);

    static unsigned long Max();
    static unsigned long Min();
	static double Mean();

private:

    long Seed;

};

class RandomParkMiller : public RandomBase
{
public:

    RandomParkMiller(unsigned long Dimensionality, unsigned long Seed=1);
    virtual RandomBase* clone() const;
    virtual void Skip(unsigned long numberOfPaths);
    virtual void SetSeed(unsigned long Seed);
    virtual void Reset();
    virtual void ResetDimensionality(unsigned long NewDimensionality);

    virtual void GetUniforms(MJArray& variates);
	virtual void GetUniforms(vector<double>& variates, double a = 0.0, double b = 1.0);

	//virtual void GetGaussians(MJArray& variates);
	//virtual void GetGaussians(vector<double>& variates, double m = 0.0, double s = 1.0);

private:

    ParkMiller InnerGenerator;
    unsigned long InitialSeed;
    double Reciprocal;

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
