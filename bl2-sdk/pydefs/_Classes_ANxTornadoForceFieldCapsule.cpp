#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxTornadoForceFieldCapsule(py::module &m)
{
    py::class_< ANxTornadoForceFieldCapsule,  ANxTornadoForceField   >(m, "ANxTornadoForceFieldCapsule")
		.def_static("StaticClass", &ANxTornadoForceFieldCapsule::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RenderComponent", &ANxTornadoForceFieldCapsule::RenderComponent)
          ;
}