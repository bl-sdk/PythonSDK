#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIMapSummary()
{
    py::class_< UUIMapSummary,  UUIResourceDataProvider   >("UUIMapSummary")
        .def_readwrite("MapName", &UUIMapSummary::MapName)
        .def_readwrite("ScreenshotPathName", &UUIMapSummary::ScreenshotPathName)
        .def_readwrite("DisplayName", &UUIMapSummary::DisplayName)
        .def_readwrite("Description", &UUIMapSummary::Description)
        .def("StaticClass", &UUIMapSummary::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}