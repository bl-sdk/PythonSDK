#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpFilter(py::module &m)
{
    py::class_< UInterpFilter,  UObject   >(m, "UInterpFilter")
		.def_static("StaticClass", &UInterpFilter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Caption", &UInterpFilter::Caption)
          ;
}