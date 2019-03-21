#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxTornadoAngularForceFieldCapsule(py::object m)
{
    py::class_< ANxTornadoAngularForceFieldCapsule,  ANxTornadoAngularForceField   >(m, "ANxTornadoAngularForceFieldCapsule")
        .def_readwrite("RenderComponent", &ANxTornadoAngularForceFieldCapsule::RenderComponent)
        .def("StaticClass", &ANxTornadoAngularForceFieldCapsule::StaticClass, py::return_value_policy::reference)
          ;
}