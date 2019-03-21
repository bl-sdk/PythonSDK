#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDecal()
{
    py::class_< UActorFactoryDecal,  UActorFactory   >("UActorFactoryDecal")
        .def_readwrite("DecalMaterial", &UActorFactoryDecal::DecalMaterial)
        .def("StaticClass", &UActorFactoryDecal::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}