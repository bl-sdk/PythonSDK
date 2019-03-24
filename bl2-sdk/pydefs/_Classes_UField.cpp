#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UField(py::module &m)
{
    py::class_< UField,  UObject   >(m, "UField")
		.def_static("StaticClass", &UField::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Next", &UField::Next)
          ;
}