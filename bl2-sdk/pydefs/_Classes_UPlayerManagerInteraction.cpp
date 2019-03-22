#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerManagerInteraction(py::module &m)
{
    py::class_< UPlayerManagerInteraction,  UInteraction   >(m, "UPlayerManagerInteraction")
        .def("StaticClass", &UPlayerManagerInteraction::StaticClass, py::return_value_policy::reference)
          ;
}