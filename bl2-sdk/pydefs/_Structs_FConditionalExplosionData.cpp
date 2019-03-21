#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalExplosionData(py::object m)
{
    py::class_< FConditionalExplosionData >(m, "FConditionalExplosionData")
        .def_readwrite("Expression", &FConditionalExplosionData::Expression)
        .def_readwrite("Explosion", &FConditionalExplosionData::Explosion)
  ;
}