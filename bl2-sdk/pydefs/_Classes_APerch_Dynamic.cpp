#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APerch_Dynamic()
{
    py::class_< APerch_Dynamic,  APerch   >("APerch_Dynamic")
        .def("StaticClass", &APerch_Dynamic::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}