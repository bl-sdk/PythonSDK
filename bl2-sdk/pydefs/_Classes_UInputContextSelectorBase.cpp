#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputContextSelectorBase(py::object m)
{
    py::class_< UInputContextSelectorBase,  UObject   >(m, "UInputContextSelectorBase")
        .def("StaticClass", &UInputContextSelectorBase::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UInputContextSelectorBase::SelectContext)
          ;
}