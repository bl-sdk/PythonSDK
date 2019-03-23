#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface(py::module &m)
{
    py::class_< UInterface,  UObject   >(m, "UInterface")
		.def_static("StaticClass", &UObject::StaticClass, py::return_value_policy::reference)
          ;
}