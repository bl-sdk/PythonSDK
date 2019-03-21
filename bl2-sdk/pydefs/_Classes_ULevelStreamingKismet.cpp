#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingKismet()
{
    py::class_< ULevelStreamingKismet,  ULevelStreaming   >("ULevelStreamingKismet")
        .def("StaticClass", &ULevelStreamingKismet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}