#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAssassinInputContextSelector(py::module &m)
{
    py::class_< UAssassinInputContextSelector,  UDefaultInputContextSelector   >(m, "UAssassinInputContextSelector")
		.def_static("StaticClass", &UAssassinInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UAssassinInputContextSelector::SelectContext)
          ;
}