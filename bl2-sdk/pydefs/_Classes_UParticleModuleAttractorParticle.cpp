#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorParticle()
{
    class_< UParticleModuleAttractorParticle, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleAttractorParticle", no_init)
        .def_readwrite("EmitterName", &UParticleModuleAttractorParticle::EmitterName)
        .def_readwrite("Range", &UParticleModuleAttractorParticle::Range)
        .def_readwrite("Strength", &UParticleModuleAttractorParticle::Strength)
        .def_readwrite("SelectionMethod", &UParticleModuleAttractorParticle::SelectionMethod)
        .def_readwrite("LastSelIndex", &UParticleModuleAttractorParticle::LastSelIndex)
        .def("StaticClass", &UParticleModuleAttractorParticle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}