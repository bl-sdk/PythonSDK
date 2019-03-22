#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPsychoInputContextSelector(py::module &m)
{
    py::class_< UPsychoInputContextSelector,  UDefaultInputContextSelector   >(m, "UPsychoInputContextSelector")
        .def("StaticClass", &UPsychoInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UPsychoInputContextSelector::SelectContext)
          ;
}