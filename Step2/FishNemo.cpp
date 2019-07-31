/**
 * \file FishNemo.cpp
 *
 * \author Geoffrey Witherington-Perkins
 */

#include "stdafx.h"
#include <string>
#include "FishNemo.h"

using namespace std;

/// Fish filename 
const wstring FishNemoImageName = L"images/nemo.png";

/// Max speed in X direction in pixels per second
const double MaxSpeedX = 50;
/// Max speed in Y direction in pixels per second
const double MaxSpeedY = 50;
/// Min speed in X direction in pixels per second
const double MinSpeedX = 0;
/// Min speed in Y direction in pixels per second
const double MinSpeedY = 0;


/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CFishNemo::CFishNemo(CAquarium *aquarium) :
	CFish(aquarium, FishNemoImageName)
{
	CFish::SetSpeed(MinSpeedX + ((double)rand() / RAND_MAX) * (MaxSpeedX - MinSpeedX),
		MinSpeedY + ((double)rand() / RAND_MAX) * (MaxSpeedY - MinSpeedY));
}


/**
 * Destructor
 */
CFishNemo::~CFishNemo()
{
}


/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 * \returns the XML node that the fish is being saved to
 */
std::shared_ptr<xmlnode::CXmlNode>
CFishNemo::XmlSave(const std::shared_ptr<xmlnode::CXmlNode> &node)
{
	auto itemNode = CFish::XmlSave(node);

	itemNode->SetAttribute(L"type", L"nemo");

	return itemNode;
}
