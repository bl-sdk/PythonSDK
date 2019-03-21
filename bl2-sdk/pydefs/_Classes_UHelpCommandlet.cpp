#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHelpCommandlet()
{
    py::class_< UHelpCommandlet,  UCommandlet   >("UHelpCommandlet")
        .def("StaticClass", &UHelpCommandlet::StaticClass, py::return_value_policy::reference)
        .def("eventMain", &UHelpCommandlet::eventMain)
        .staticmethod("StaticClass")
  ;
}