#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowLANGameSearch()
{
    py::class_< UWillowLANGameSearch,  UWillowOnlineGameSearch   >("UWillowLANGameSearch")
        .def("StaticClass", &UWillowLANGameSearch::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}