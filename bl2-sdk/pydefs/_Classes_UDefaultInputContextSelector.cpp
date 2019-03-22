#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDefaultInputContextSelector(py::module &m)
{
    py::class_< UDefaultInputContextSelector,  UInputContextSelectorBase   >(m, "UDefaultInputContextSelector")
        .def("SelectContext", &UDefaultInputContextSelector::SelectContext)
          ;
}