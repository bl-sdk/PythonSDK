#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmitterServerSide()
{
    py::class_< AWillowEmitterServerSide,  AWillowReplicatedEmitter   >("AWillowEmitterServerSide")
        .def("StaticClass", &AWillowEmitterServerSide::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}