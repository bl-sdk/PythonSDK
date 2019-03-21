#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxGenericForceFieldBox()
{
    py::class_< ANxGenericForceFieldBox,  ANxGenericForceField   >("ANxGenericForceFieldBox")
        .def_readwrite("RenderComponent", &ANxGenericForceFieldBox::RenderComponent)
        .def_readwrite("BoxExtent", &ANxGenericForceFieldBox::BoxExtent)
        .def("StaticClass", &ANxGenericForceFieldBox::StaticClass, py::return_value_policy::reference)
        .def("DoInitRBPhys", &ANxGenericForceFieldBox::DoInitRBPhys)
        .staticmethod("StaticClass")
  ;
}