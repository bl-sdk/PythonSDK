#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxHUD()
{
    py::class_< AGearboxHUD,  AHUD   >("AGearboxHUD")
        .def("StaticClass", &AGearboxHUD::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}