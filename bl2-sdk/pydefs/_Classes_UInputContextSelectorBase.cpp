#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputContextSelectorBase(py::module &m)
{
    py::class_< UInputContextSelectorBase,  UObject   >(m, "UInputContextSelectorBase")
		.def_static("StaticClass", &UInputContextSelectorBase::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UInputContextSelectorBase::SelectContext)
          ;
}