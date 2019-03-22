#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoldierInputContextSelector(py::module &m)
{
    py::class_< USoldierInputContextSelector,  UInputContextSelectorBase   >(m, "USoldierInputContextSelector")
        .def("SelectContext", &USoldierInputContextSelector::SelectContext)
          ;
}