#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxGenericForceFieldCapsule(py::module &m)
{
    py::class_< ANxGenericForceFieldCapsule,  ANxGenericForceField   >(m, "ANxGenericForceFieldCapsule")
        .def_readwrite("RenderComponent", &ANxGenericForceFieldCapsule::RenderComponent)
        .def_readwrite("CapsuleHeight", &ANxGenericForceFieldCapsule::CapsuleHeight)
        .def_readwrite("CapsuleRadius", &ANxGenericForceFieldCapsule::CapsuleRadius)
        .def("StaticClass", &ANxGenericForceFieldCapsule::StaticClass, py::return_value_policy::reference)
          ;
}