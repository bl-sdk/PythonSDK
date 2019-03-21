#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProjectileClassEventData()
{
    py::class_< FProjectileClassEventData >("FProjectileClassEventData")
        .def_readwrite("ProjectileClassName", &FProjectileClassEventData::ProjectileClassName)
  ;
}