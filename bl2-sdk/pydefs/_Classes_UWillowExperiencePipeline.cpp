#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowExperiencePipeline(py::module &m)
{
    py::class_< UWillowExperiencePipeline,  UObject   >(m, "UWillowExperiencePipeline")
        .def("AwardCombatExperienceToParty", &UWillowExperiencePipeline::AwardCombatExperienceToParty)
        .def("CalculateExperiencePointsForKill", &UWillowExperiencePipeline::CalculateExperiencePointsForKill)
          ;
}