#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProjectileClassEventData(py::module &m)
{
    py::class_< FProjectileClassEventData >(m, "FProjectileClassEventData")
        .def_readwrite("ProjectileClassName", &FProjectileClassEventData::ProjectileClassName)
  ;
}