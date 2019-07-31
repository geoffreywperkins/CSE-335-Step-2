/**
 * \file FishBeta.cpp
 *
 * \author Geoffrey Witherington-Perkins
 */

#include "stdafx.h"
#include <string>
#include "FishBeta.h"

using namespace std;


/// Fish filename 
const wstring FishBetaImageName = L"images/beta.png";

/// Max speed in X direction in pixels per second
const double MaxSpeedX = 150;
/// Max speed in Y direction in pixels per second
const double MaxSpeedY = 150;
/// Min speed in X direction in pixels per second
const double MinSpeedX = 100;
/// Min speed in Y direction in pixels per second
const double MinSpeedY = 100;


/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CFishBeta::CFishBeta(CAquarium *aquarium) :
	CFish(aquarium, FishBetaImageName)
{
	CFish::SetSpeed(MinSpeedX + ((double)rand() / RAND_MAX) * (MaxSpeedX - MinSpeedX),
		MinSpeedY + ((double)rand() / RAND_MAX) * (MaxSpeedY - MinSpeedY));
}


/**
 * Destructor
 */
CFishBeta::~CFishBeta()
{
}


/**
 * Save this beta fish to an XML node
 * \param node The node we are going to be a child of
 * \returns the XML node that the fish is being saved to
 */
std::shared_ptr<xmlnode::CXmlNode>
CFishBeta::XmlSave(const std::shared_ptr<xmlnode::CXmlNode> &node)
{
	auto itemNode = CFish::XmlSave(node);

	itemNode->SetAttribute(L"type", L"beta");

	return itemNode;
}