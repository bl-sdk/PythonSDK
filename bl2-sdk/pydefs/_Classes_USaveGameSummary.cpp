#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USaveGameSummary(py::object m)
{
    py::class_< USaveGameSummary,  UObject   >(m, "USaveGameSummary")
        .def_readwrite("BaseLevel", &USaveGameSummary::BaseLevel)
        .def_readwrite("Description", &USaveGameSummary::Description)
        .def("StaticClass", &USaveGameSummary::StaticClass, py::return_value_policy::reference)
          ;
}