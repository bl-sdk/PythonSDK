#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMercenaryInputContextSelector()
{
    py::class_< UMercenaryInputContextSelector,  UDefaultInputContextSelector   >("UMercenaryInputContextSelector")
        .def("StaticClass", &UMercenaryInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UMercenaryInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}