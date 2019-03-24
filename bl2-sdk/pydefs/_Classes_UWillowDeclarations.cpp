#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDeclarations(py::module &m)
{
    py::class_< UWillowDeclarations,  UObject   >(m, "UWillowDeclarations")
		.def_static("StaticClass", &UWillowDeclarations::StaticClass, py::return_value_policy::reference)
          ;
}