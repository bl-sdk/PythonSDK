#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDefaultInputContextSelector()
{
    py::class_< UDefaultInputContextSelector,  UInputContextSelectorBase   >("UDefaultInputContextSelector")
        .def("StaticClass", &UDefaultInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UDefaultInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}