#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHelpCommandlet(py::module &m)
{
    py::class_< UHelpCommandlet,  UCommandlet   >(m, "UHelpCommandlet")
		.def_static("StaticClass", &UHelpCommandlet::StaticClass, py::return_value_policy::reference)
        .def("eventMain", &UHelpCommandlet::eventMain)
          ;
}