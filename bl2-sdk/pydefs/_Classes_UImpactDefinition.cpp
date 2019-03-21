#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UImpactDefinition()
{
    py::class_< UImpactDefinition,  UGBXDefinition   >("UImpactDefinition")
        .def("StaticClass", &UImpactDefinition::StaticClass, py::return_value_policy::reference)
        .def("HandleRigidBodyImpact", &UImpactDefinition::HandleRigidBodyImpact)
        .staticmethod("StaticClass")
  ;
}