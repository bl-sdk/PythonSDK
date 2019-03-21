#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerChallengeListDefinition()
{
    py::class_< UPlayerChallengeListDefinition,  UGBXDefinition   >("UPlayerChallengeListDefinition")
        .def_readwrite("PlayerChallenges", &UPlayerChallengeListDefinition::PlayerChallenges)
        .def("StaticClass", &UPlayerChallengeListDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}