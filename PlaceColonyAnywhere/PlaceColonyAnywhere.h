#pragma once

#include <Spore\BasicIncludes.h>
#include <Spore\Simulator\cSpaceToolData.h>
#include <Spore\Simulator\cPlaceColonyToolStrategy.h>
using namespace Simulator;
class PlaceColonyAnywhere
	:public Simulator::cPlaceColonyToolStrategy
{
public:
	PlaceColonyAnywhere();
	~PlaceColonyAnywhere();
	virtual bool WhileAiming(cSpaceToolData* pTool, const Vector3& aimPoint, bool showErrors);
};