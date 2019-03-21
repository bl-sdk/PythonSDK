#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATargetPoint(py::object m)
{
    py::class_< ATargetPoint,  AKeypoint   >(m, "ATargetPoint")
        .def_readwrite("SpawnRefCount", &ATargetPoint::SpawnRefCount)
        .def("StaticClass", &ATargetPoint::StaticClass, py::return_value_policy::reference)
          ;
}