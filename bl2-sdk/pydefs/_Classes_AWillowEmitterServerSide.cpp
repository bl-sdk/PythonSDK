#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmitterServerSide(py::object m)
{
    py::class_< AWillowEmitterServerSide,  AWillowReplicatedEmitter   >(m, "AWillowEmitterServerSide")
        .def("StaticClass", &AWillowEmitterServerSide::StaticClass, py::return_value_policy::reference)
          ;
}