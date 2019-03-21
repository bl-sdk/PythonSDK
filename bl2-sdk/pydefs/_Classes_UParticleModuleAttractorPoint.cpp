#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorPoint()
{
    class_< UParticleModuleAttractorPoint, bases< UParticleModuleAttractorBase >  , boost::noncopyable>("UParticleModuleAttractorPoint", no_init)
        .def_readwrite("Position", &UParticleModuleAttractorPoint::Position)
        .def_readwrite("Range", &UParticleModuleAttractorPoint::Range)
        .def_readwrite("Strength", &UParticleModuleAttractorPoint::Strength)
        .def("StaticClass", &UParticleModuleAttractorPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}