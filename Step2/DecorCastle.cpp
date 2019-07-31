/**
 * \file DecorCastle.cpp
 *
 * \author Geoffrey Witherington-Perkins
 */

#include "stdafx.h"
#include <string>
#include "DecorCastle.h"

using namespace std;

/// Castle filename
const wstring DecorCastleImageName = L"images/castle.png";


/**
 * Constructor
 * \param aquarium The aquarium the castle is added to
 */
CDecorCastle::CDecorCastle(CAquarium * aquarium) :
	CItem(aquarium, DecorCastleImageName)
{
}

/**
 * Destructor
 */
CDecorCastle::~CDecorCastle()
{
}


/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 * \returns smart pointer to the XML node it just saved the caslte to
 */
std::shared_ptr<xmlnode::CXmlNode>
CDecorCastle::XmlSave(const std::shared_ptr<xmlnode::CXmlNode> &node)
{
	auto itemNode = CItem::XmlSave(node);

	itemNode->SetAttribute(L"type", L"castle");

	return itemNode;
}
