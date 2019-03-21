#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingKismet(py::object m)
{
    py::class_< ULevelStreamingKismet,  ULevelStreaming   >(m, "ULevelStreamingKismet")
        .def("StaticClass", &ULevelStreamingKismet::StaticClass, py::return_value_policy::reference)
          ;
}