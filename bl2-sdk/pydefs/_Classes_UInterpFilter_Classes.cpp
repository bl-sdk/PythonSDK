#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpFilter_Classes(py::module &m)
{
    py::class_< UInterpFilter_Classes,  UObject   >(m, "UInterpFilter_Classes")
		.def_static("StaticClass", &UInterpFilter_Classes::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Caption", &UInterpFilter::Caption)
          ;
}