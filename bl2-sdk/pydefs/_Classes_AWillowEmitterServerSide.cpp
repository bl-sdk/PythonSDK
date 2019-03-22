#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmitterServerSide(py::module &m)
{
    py::class_< AWillowEmitterServerSide,  AWillowReplicatedEmitter   >(m, "AWillowEmitterServerSide")
          ;
}