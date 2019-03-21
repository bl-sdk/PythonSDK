#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APathBlockingVolume(py::object m)
{
    py::class_< APathBlockingVolume,  AVolume   >(m, "APathBlockingVolume")
        .def("StaticClass", &APathBlockingVolume::StaticClass, py::return_value_policy::reference)
          ;
}