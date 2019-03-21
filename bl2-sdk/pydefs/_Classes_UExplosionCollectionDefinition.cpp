#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExplosionCollectionDefinition()
{
    py::class_< UExplosionCollectionDefinition,  UGBXDefinition   >("UExplosionCollectionDefinition")
        .def_readwrite("Explosions", &UExplosionCollectionDefinition::Explosions)
        .def("StaticClass", &UExplosionCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetExplosion", &UExplosionCollectionDefinition::GetExplosion, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}