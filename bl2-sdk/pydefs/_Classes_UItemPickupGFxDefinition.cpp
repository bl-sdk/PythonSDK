#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemPickupGFxDefinition()
{
    class_< UItemPickupGFxDefinition, bases< UGFxMovieDefinition >  , boost::noncopyable>("UItemPickupGFxDefinition", no_init)
        .def_readwrite("MatSrc", &UItemPickupGFxDefinition::MatSrc)
        .def_readwrite("Particle", &UItemPickupGFxDefinition::Particle)
        .def_readwrite("ParticleMatParamName", &UItemPickupGFxDefinition::ParticleMatParamName)
        .def_readwrite("MatTexParamName", &UItemPickupGFxDefinition::MatTexParamName)
        .def_readwrite("TallItemZOffsetPercentage", &UItemPickupGFxDefinition::TallItemZOffsetPercentage)
        .def("StaticClass", &UItemPickupGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}