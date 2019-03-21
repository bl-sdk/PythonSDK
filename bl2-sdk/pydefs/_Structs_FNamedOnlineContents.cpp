#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedOnlineContent(py::object m)
{
    py::class_< FNamedOnlineContent,  FOnlineContent   >(m, "FNamedOnlineContent")
        .def_readwrite("NameInfo", &FNamedOnlineContent::NameInfo)
        .def_readwrite("NamedContentType", &FNamedOnlineContent::NamedContentType)
  ;
}