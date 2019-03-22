#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UImpactDefinition(py::module &m)
{
    py::class_< UImpactDefinition,  UGBXDefinition   >(m, "UImpactDefinition")
        .def("StaticClass", &UImpactDefinition::StaticClass, py::return_value_policy::reference)
        .def("HandleRigidBodyImpact", &UImpactDefinition::HandleRigidBodyImpact)
          ;
}