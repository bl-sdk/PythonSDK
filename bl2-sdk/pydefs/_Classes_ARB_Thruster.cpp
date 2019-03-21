#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_Thruster()
{
    py::class_< ARB_Thruster,  ARigidBodyBase   >("ARB_Thruster")
        .def_readwrite("ThrustStrength", &ARB_Thruster::ThrustStrength)
        .def("StaticClass", &ARB_Thruster::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ARB_Thruster::OnToggle)
        .staticmethod("StaticClass")
  ;
}