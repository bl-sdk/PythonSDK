#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDrunkenProjectile()
{
    py::class_< UIDrunkenProjectile,  UInterface   >("UIDrunkenProjectile")
        .def("StaticClass", &UIDrunkenProjectile::StaticClass, py::return_value_policy::reference)
        .def("SetDrunkenRandomNumberSeed", &UIDrunkenProjectile::SetDrunkenRandomNumberSeed)
        .staticmethod("StaticClass")
  ;
}