#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoldierInputContextSelector()
{
    py::class_< USoldierInputContextSelector,  UInputContextSelectorBase   >("USoldierInputContextSelector")
        .def("StaticClass", &USoldierInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &USoldierInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}