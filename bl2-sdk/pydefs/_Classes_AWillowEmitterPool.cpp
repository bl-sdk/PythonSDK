#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmitterPool()
{
    py::class_< AWillowEmitterPool,  AEmitterPool   >("AWillowEmitterPool")
        .def("StaticClass", &AWillowEmitterPool::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}