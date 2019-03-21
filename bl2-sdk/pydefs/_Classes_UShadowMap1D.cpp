#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShadowMap1D(py::object m)
{
    py::class_< UShadowMap1D,  UObject   >(m, "UShadowMap1D")
        .def_readonly("UnknownData00", &UShadowMap1D::UnknownData00)
        .def("StaticClass", &UShadowMap1D::StaticClass, py::return_value_policy::reference)
          ;
}