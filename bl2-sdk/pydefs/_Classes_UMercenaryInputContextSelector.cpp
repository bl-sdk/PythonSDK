#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMercenaryInputContextSelector(py::module &m)
{
    py::class_< UMercenaryInputContextSelector,  UDefaultInputContextSelector   >(m, "UMercenaryInputContextSelector")
        .def("SelectContext", &UMercenaryInputContextSelector::SelectContext)
          ;
}