#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxTornadoForceFieldCapsule()
{
    py::class_< ANxTornadoForceFieldCapsule,  ANxTornadoForceField   >("ANxTornadoForceFieldCapsule")
        .def_readwrite("RenderComponent", &ANxTornadoForceFieldCapsule::RenderComponent)
        .def("StaticClass", &ANxTornadoForceFieldCapsule::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}