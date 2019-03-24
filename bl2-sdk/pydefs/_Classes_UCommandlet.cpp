#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCommandlet(py::module &m)
{
    py::class_< UCommandlet,  UObject   >(m, "UCommandlet")
		.def_static("StaticClass", &UCommandlet::StaticClass, py::return_value_policy::reference)
        .def_readwrite("HelpDescription", &UCommandlet::HelpDescription)
        .def_readwrite("HelpUsage", &UCommandlet::HelpUsage)
        .def_readwrite("HelpWebLink", &UCommandlet::HelpWebLink)
        .def_readwrite("HelpParamNames", &UCommandlet::HelpParamNames)
        .def_readwrite("HelpParamDescriptions", &UCommandlet::HelpParamDescriptions)
        .def("eventMain", &UCommandlet::eventMain)
          ;
}