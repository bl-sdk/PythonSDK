#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAssassinInputContextSelector()
{
    py::class_< UAssassinInputContextSelector,  UDefaultInputContextSelector   >("UAssassinInputContextSelector")
        .def("StaticClass", &UAssassinInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UAssassinInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}