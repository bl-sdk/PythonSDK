#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UINounAttributeProvider()
{
    py::class_< UINounAttributeProvider,  UInterface   >("UINounAttributeProvider")
        .def("StaticClass", &UINounAttributeProvider::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}