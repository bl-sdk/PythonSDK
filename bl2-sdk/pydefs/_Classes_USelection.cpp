#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USelection(py::module &m)
{
    py::class_< USelection,  UObject   >(m, "USelection")
		.def_static("StaticClass", &USelection::StaticClass, py::return_value_policy::reference)
          ;
}