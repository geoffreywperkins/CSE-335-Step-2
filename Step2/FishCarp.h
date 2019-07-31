/**
 * \file FishCarp.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Class that implements a Carp Fish
 */

#pragma once
#include <memory>
#include "Item.h"


 /**
  * Implements a Carp Fish
 */
class CFishCarp :
	public CItem
{
public:
	CFishCarp::CFishCarp(CAquarium *aquarium);
	virtual ~CFishCarp();

	/// Default constructor (disabled)
	CFishCarp() = delete;

	/// Copy constructor (disabled)
	CFishCarp(const CFishCarp &) = delete;

	virtual void Draw(Gdiplus::Graphics *graphics);

	bool HitTest(int x, int y);

	/// function to signify if fish is a predator or not
	/// \returns true because carp is a predator
	bool IsPredator() { return true; };

};
