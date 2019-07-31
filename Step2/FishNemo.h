/**
 * \file FishNemo.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Class that implements a Nemo Fish
 */

#pragma once
#include <memory>
#include "Fish.h"


/**
 * Implements a Nemo Fish
 */
class CFishNemo :
	public CFish
{
public:
	CFishNemo::CFishNemo(CAquarium *aquarium);
	virtual ~CFishNemo();

	std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node);

	/// Default constructor (disabled)
	CFishNemo() = delete;

	///Copy constructor (disabled)
	CFishNemo(const CFishNemo &) = delete;

};
