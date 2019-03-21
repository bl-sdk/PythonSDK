#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowPopulationOpportunityPoint()
{
    class_< AWillowPopulationOpportunityPoint, bases< APopulationOpportunityPoint >  , boost::noncopyable>("AWillowPopulationOpportunityPoint", no_init)
        .def_readwrite("MissionObjectiveBit", &AWillowPopulationOpportunityPoint::MissionObjectiveBit)
        .def_readwrite("AssociatedChallenge", &AWillowPopulationOpportunityPoint::AssociatedChallenge)
        .def_readwrite("NumberInChallengeGroup", &AWillowPopulationOpportunityPoint::NumberInChallengeGroup)
        .def("StaticClass", &AWillowPopulationOpportunityPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}