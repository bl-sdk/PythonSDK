#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPickupGFxDefinition()
{
    py::class_< UItemPickupGFxDefinition,  UGFxMovieDefinition   >("UItemPickupGFxDefinition")
        .def_readwrite("MatSrc", &UItemPickupGFxDefinition::MatSrc)
        .def_readwrite("Particle", &UItemPickupGFxDefinition::Particle)
        .def_readwrite("ParticleMatParamName", &UItemPickupGFxDefinition::ParticleMatParamName)
        .def_readwrite("MatTexParamName", &UItemPickupGFxDefinition::MatTexParamName)
        .def_readwrite("TallItemZOffsetPercentage", &UItemPickupGFxDefinition::TallItemZOffsetPercentage)
        .def("StaticClass", &UItemPickupGFxDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}