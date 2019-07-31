/**
 * \file Fish.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Base class for any fish in the aquarium. Derived from CItem
 */

#pragma once
#include "Item.h"

/**
 * Base class for a fish
 * This applies to all of the fish, but not the decor
 * items in the aquarium.
 */
class CFish :
	public CItem
{
public:
	virtual ~CFish();

	void Update(double elapsed);

	/// Default constructor (disabled)
	CFish() = delete;

	/// Copy constructor (disabled)
	CFish(const CFish &) = delete;

	virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;

	virtual void XmlLoad(const std::shared_ptr<xmlnode::CXmlNode>& node) override;

	/// Set the fish speed
	/// \param speedx Speed in X direction
	/// \param speedy Speed in Y direction
	void SetSpeed(double speedx, double speedy) { mSpeedX = speedx; mSpeedY = speedy; }

protected:
	CFish(CAquarium *aquarium, const std::wstring &filename);

private:
	/// Fish speed in the X direction
	double mSpeedX;

	/// Fish speed in the Y direction
	double mSpeedY;
};

