#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerManagerInteraction(py::module &m)
{
    py::class_< UPlayerManagerInteraction,  UInteraction   >(m, "UPlayerManagerInteraction")
		.def_static("StaticClass", &UPlayerManagerInteraction::StaticClass, py::return_value_policy::reference)
          ;
}