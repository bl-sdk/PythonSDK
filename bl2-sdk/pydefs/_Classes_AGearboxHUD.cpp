#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxHUD(py::object m)
{
    py::class_< AGearboxHUD,  AHUD   >(m, "AGearboxHUD")
        .def("StaticClass", &AGearboxHUD::StaticClass, py::return_value_policy::reference)
          ;
}