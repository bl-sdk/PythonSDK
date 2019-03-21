#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChallengesPanelDefinition()
{
    py::class_< UChallengesPanelDefinition,  UGBXDefinition   >("UChallengesPanelDefinition")
        .def("StaticClass", &UChallengesPanelDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}