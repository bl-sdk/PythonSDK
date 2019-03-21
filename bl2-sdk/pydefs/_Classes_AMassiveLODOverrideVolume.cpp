#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMassiveLODOverrideVolume(py::object m)
{
    py::class_< AMassiveLODOverrideVolume,  AVolume   >(m, "AMassiveLODOverrideVolume")
        .def("StaticClass", &AMassiveLODOverrideVolume::StaticClass, py::return_value_policy::reference)
          ;
}