/**
 * \file DecorCastle.h
 *
 * \author Geoffrey Witherington-Perkins
 *
 * Class that implements the castle decoration
 */

#pragma once
#include "Item.h"


/**
 * Implements castle decoration
 */
class CDecorCastle :
	public CItem
{
public:
	CDecorCastle::CDecorCastle(CAquarium *aquarium);
	virtual ~CDecorCastle();

	std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node);

	/// Default constructor (disabled)
	CDecorCastle() = delete;

	/// Copy constructor (disabled)
	CDecorCastle(const CDecorCastle &) = delete;
};

