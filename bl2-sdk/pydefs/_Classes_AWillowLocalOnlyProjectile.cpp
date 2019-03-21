#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowLocalOnlyProjectile()
{
    py::class_< AWillowLocalOnlyProjectile,  AWillowProjectile   >("AWillowLocalOnlyProjectile")
        .def("StaticClass", &AWillowLocalOnlyProjectile::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}