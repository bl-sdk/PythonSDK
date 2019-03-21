#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecentExplosion(py::object m)
{
    py::class_< FRecentExplosion >(m, "FRecentExplosion")
        .def_readwrite("ExplosionInstigatorName", &FRecentExplosion::ExplosionInstigatorName)
        .def_readwrite("ExplosionLocation", &FRecentExplosion::ExplosionLocation)
        .def_readwrite("ExpirationTime", &FRecentExplosion::ExpirationTime)
  ;
}