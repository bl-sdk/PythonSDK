#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxTornadoAngularForceFieldCapsule()
{
    py::class_< ANxTornadoAngularForceFieldCapsule,  ANxTornadoAngularForceField   >("ANxTornadoAngularForceFieldCapsule")
        .def_readwrite("RenderComponent", &ANxTornadoAngularForceFieldCapsule::RenderComponent)
        .def("StaticClass", &ANxTornadoAngularForceFieldCapsule::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}