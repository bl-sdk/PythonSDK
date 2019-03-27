#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPickupGFxDefinition(py::module &m)
{
    py::class_< UItemPickupGFxDefinition,  UGFxMovieDefinition   >(m, "UItemPickupGFxDefinition")
		.def_static("StaticClass", &UItemPickupGFxDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MatSrc", &UItemPickupGFxDefinition::MatSrc)
        .def_readwrite("Particle", &UItemPickupGFxDefinition::Particle)
        .def_readwrite("ParticleMatParamName", &UItemPickupGFxDefinition::ParticleMatParamName)
        .def_readwrite("MatTexParamName", &UItemPickupGFxDefinition::MatTexParamName)
        .def_readwrite("TallItemZOffsetPercentage", &UItemPickupGFxDefinition::TallItemZOffsetPercentage)
          ;
}