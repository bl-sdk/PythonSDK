#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoldierInputContextSelector(py::object m)
{
    py::class_< USoldierInputContextSelector,  UInputContextSelectorBase   >(m, "USoldierInputContextSelector")
        .def("StaticClass", &USoldierInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &USoldierInputContextSelector::SelectContext)
          ;
}