#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USaveGameSummary(py::module &m)
{
    py::class_< USaveGameSummary,  UObject   >(m, "USaveGameSummary")
		.def_static("StaticClass", &USaveGameSummary::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BaseLevel", &USaveGameSummary::BaseLevel)
        .def_readwrite("Description", &USaveGameSummary::Description)
          ;
}