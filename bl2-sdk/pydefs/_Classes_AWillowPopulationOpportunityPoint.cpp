#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPopulationOpportunityPoint(py::module &m)
{
    py::class_< AWillowPopulationOpportunityPoint,  APopulationOpportunityPoint   >(m, "AWillowPopulationOpportunityPoint")
		.def_static("StaticClass", &AWillowPopulationOpportunityPoint::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MissionObjectiveBit", &AWillowPopulationOpportunityPoint::MissionObjectiveBit)
        .def_readwrite("AssociatedChallenge", &AWillowPopulationOpportunityPoint::AssociatedChallenge)
        .def_readwrite("NumberInChallengeGroup", &AWillowPopulationOpportunityPoint::NumberInChallengeGroup)
          ;
}