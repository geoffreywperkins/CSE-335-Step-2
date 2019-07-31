/**
 * \file FishBubbles.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Class that implements Bubbles the Fish
 */

#pragma once
#include <memory>
#include "Fish.h"


/**
 * Implements Bubbles the Fish
 */
class CFishBubbles :
	public CFish
{
public:
	CFishBubbles::CFishBubbles(CAquarium *aquarium);
	virtual ~CFishBubbles();

	std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node);

	/// Default constructor (disabled)
	CFishBubbles() = delete;

	/// Copy constructor (disabled)
	CFishBubbles(const CFishBubbles &) = delete;

};
