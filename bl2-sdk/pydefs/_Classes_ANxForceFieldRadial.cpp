#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxForceFieldRadial(py::module &m)
{
    py::class_< ANxForceFieldRadial,  ANxForceField   >(m, "ANxForceFieldRadial")
		.def_static("StaticClass", &ANxForceFieldRadial::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Shape", &ANxForceFieldRadial::Shape)
        .def_readwrite("DrawComponent", &ANxForceFieldRadial::DrawComponent)
        .def_readwrite("ForceStrength", &ANxForceFieldRadial::ForceStrength)
        .def_readwrite("ForceRadius", &ANxForceFieldRadial::ForceRadius)
        .def_readwrite("SelfRotationStrength", &ANxForceFieldRadial::SelfRotationStrength)
        .def_readwrite("ForceFalloff", &ANxForceFieldRadial::ForceFalloff)
        .def_readwrite("Kernel", &ANxForceFieldRadial::Kernel)
        .def("DoInitRBPhys", &ANxForceFieldRadial::DoInitRBPhys)
          ;
}