#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingAlwaysLoaded(py::object m)
{
    py::class_< ULevelStreamingAlwaysLoaded,  ULevelStreaming   >(m, "ULevelStreamingAlwaysLoaded")
        .def("StaticClass", &ULevelStreamingAlwaysLoaded::StaticClass, py::return_value_policy::reference)
          ;
}