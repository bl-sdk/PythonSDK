#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowExperiencePipeline()
{
    class_< UWillowExperiencePipeline, bases< UObject >  , boost::noncopyable>("UWillowExperiencePipeline", no_init)
        .def("StaticClass", &UWillowExperiencePipeline::StaticClass, return_value_policy< reference_existing_object >())
        .def("AwardCombatExperienceToParty", &UWillowExperiencePipeline::AwardCombatExperienceToParty)
        .def("CalculateExperiencePointsForKill", &UWillowExperiencePipeline::CalculateExperiencePointsForKill)
        .staticmethod("StaticClass")
  ;
}