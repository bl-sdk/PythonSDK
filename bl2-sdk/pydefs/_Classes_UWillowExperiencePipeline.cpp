#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowExperiencePipeline()
{
    py::class_< UWillowExperiencePipeline,  UObject   >("UWillowExperiencePipeline")
        .def("StaticClass", &UWillowExperiencePipeline::StaticClass, py::return_value_policy::reference)
        .def("AwardCombatExperienceToParty", &UWillowExperiencePipeline::AwardCombatExperienceToParty)
        .def("CalculateExperiencePointsForKill", &UWillowExperiencePipeline::CalculateExperiencePointsForKill)
        .staticmethod("StaticClass")
  ;
}