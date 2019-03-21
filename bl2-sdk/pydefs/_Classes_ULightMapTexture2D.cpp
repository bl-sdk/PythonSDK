#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightMapTexture2D(py::object m)
{
    py::class_< ULightMapTexture2D,  UTexture2D   >(m, "ULightMapTexture2D")
        .def_readonly("UnknownData00", &ULightMapTexture2D::UnknownData00)
        .def("StaticClass", &ULightMapTexture2D::StaticClass, py::return_value_policy::reference)
          ;
}