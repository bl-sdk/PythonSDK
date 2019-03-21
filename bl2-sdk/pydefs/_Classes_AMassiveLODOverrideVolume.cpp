#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMassiveLODOverrideVolume()
{
    py::class_< AMassiveLODOverrideVolume,  AVolume   >("AMassiveLODOverrideVolume")
        .def("StaticClass", &AMassiveLODOverrideVolume::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}