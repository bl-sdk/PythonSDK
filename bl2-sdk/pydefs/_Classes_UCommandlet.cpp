#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCommandlet(py::object m)
{
    py::class_< UCommandlet,  UObject   >(m, "UCommandlet")
        .def_readwrite("HelpDescription", &UCommandlet::HelpDescription)
        .def_readwrite("HelpUsage", &UCommandlet::HelpUsage)
        .def_readwrite("HelpWebLink", &UCommandlet::HelpWebLink)
        .def_readwrite("HelpParamNames", &UCommandlet::HelpParamNames)
        .def_readwrite("HelpParamDescriptions", &UCommandlet::HelpParamDescriptions)
        .def("StaticClass", &UCommandlet::StaticClass, py::return_value_policy::reference)
        .def("eventMain", &UCommandlet::eventMain)
          ;
}