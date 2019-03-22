#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USmokeTestCommandlet(py::module &m)
{
    py::class_< USmokeTestCommandlet,  UCommandlet   >(m, "USmokeTestCommandlet")
        .def("StaticClass", &USmokeTestCommandlet::StaticClass, py::return_value_policy::reference)
          ;
}