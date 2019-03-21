#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingPersistent(py::object m)
{
    py::class_< ULevelStreamingPersistent,  ULevelStreaming   >(m, "ULevelStreamingPersistent")
        .def("StaticClass", &ULevelStreamingPersistent::StaticClass, py::return_value_policy::reference)
          ;
}