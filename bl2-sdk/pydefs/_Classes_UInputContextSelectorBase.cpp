#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputContextSelectorBase(py::module &m)
{
    py::class_< UInputContextSelectorBase,  UObject   >(m, "UInputContextSelectorBase")
        .def("SelectContext", &UInputContextSelectorBase::SelectContext)
          ;
}