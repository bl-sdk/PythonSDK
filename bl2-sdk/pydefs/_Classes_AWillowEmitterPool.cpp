#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmitterPool(py::module &m)
{
    py::class_< AWillowEmitterPool,  AEmitterPool   >(m, "AWillowEmitterPool")
          ;
}