/**
 * \file FishBeta.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Class that implements a Beta Fish
 */

#pragma once
#include <memory>
#include "Fish.h"


 /**
  * Implements a Beta Fish
 */
class CFishBeta :
	public CFish
{
public:
	CFishBeta::CFishBeta(CAquarium *aquarium);
	virtual ~CFishBeta();

	/// Default constructor (disabled)
	CFishBeta() = delete;

	/// Copy constructor (disabled)
	CFishBeta(const CFishBeta &) = delete;

	virtual std::shared_ptr<xmlnode::CXmlNode>
		XmlSave(const std::shared_ptr<xmlnode::CXmlNode> &node) override;
};
