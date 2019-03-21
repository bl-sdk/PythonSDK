#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputContextSelectorBase()
{
    py::class_< UInputContextSelectorBase,  UObject   >("UInputContextSelectorBase")
        .def("StaticClass", &UInputContextSelectorBase::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UInputContextSelectorBase::SelectContext)
        .staticmethod("StaticClass")
  ;
}