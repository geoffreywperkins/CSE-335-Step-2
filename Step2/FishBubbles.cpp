/**
 * \file FishBubbles.cpp
 *
 * \author Geoffrey Witherington-Perkins
 */

#include "stdafx.h"
#include <string>
#include "FishBubbles.h"

using namespace std;

/// Fish filename
const wstring FishBubblesImageName = L"images/bubbles.png";

/// Max speed in X direction in pixels per second
const double MaxSpeedX = 100;
/// Max speed in Y direction in pixels per second
const double MaxSpeedY = 100;
/// Min speed in X direction in pixels per second
const double MinSpeedX = 50;
/// Min speed in Y direction in pixels per second
const double MinSpeedY = 50;


/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CFishBubbles::CFishBubbles(CAquarium *aquarium) :
	CFish(aquarium, FishBubblesImageName)
{
	CFish::SetSpeed(MinSpeedX + ((double)rand() / RAND_MAX) * (MaxSpeedX - MinSpeedX),
		MinSpeedY + ((double)rand() / RAND_MAX) * (MaxSpeedY - MinSpeedY));
}


/**
 * Destructor
 */
CFishBubbles::~CFishBubbles()
{
}


/**
 * Save this bubbles fish to an XML node
 * \param node The node we are going to be a child of
 * \returns the XML node that the fish is being saved to
 */
std::shared_ptr<xmlnode::CXmlNode>
CFishBubbles::XmlSave(const std::shared_ptr<xmlnode::CXmlNode> &node)
{
	auto itemNode = CFish::XmlSave(node);

	itemNode->SetAttribute(L"type", L"bubbles");

	return itemNode;
}