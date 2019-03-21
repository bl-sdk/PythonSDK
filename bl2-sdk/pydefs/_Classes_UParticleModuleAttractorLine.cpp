#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorLine()
{
    class_< UParticleModuleAttractorLine, bases< UParticleModuleAttractorBase >  , boost::noncopyable>("UParticleModuleAttractorLine", no_init)
        .def_readwrite("EndPoint0", &UParticleModuleAttractorLine::EndPoint0)
        .def_readwrite("EndPoint1", &UParticleModuleAttractorLine::EndPoint1)
        .def_readwrite("Range", &UParticleModuleAttractorLine::Range)
        .def_readwrite("Strength", &UParticleModuleAttractorLine::Strength)
        .def("StaticClass", &UParticleModuleAttractorLine::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}