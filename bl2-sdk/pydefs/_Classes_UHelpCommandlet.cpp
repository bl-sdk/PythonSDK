#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHelpCommandlet(py::object m)
{
    py::class_< UHelpCommandlet,  UCommandlet   >(m, "UHelpCommandlet")
        .def("StaticClass", &UHelpCommandlet::StaticClass, py::return_value_policy::reference)
        .def("eventMain", &UHelpCommandlet::eventMain)
          ;
}