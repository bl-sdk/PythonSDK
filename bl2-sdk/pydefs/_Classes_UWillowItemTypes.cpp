#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowItemTypes(py::module &m)
{
    py::class_< UWillowItemTypes,  UObject   >(m, "UWillowItemTypes")
		.def_static("StaticClass", &UWillowItemTypes::StaticClass, py::return_value_policy::reference)
          ;
}