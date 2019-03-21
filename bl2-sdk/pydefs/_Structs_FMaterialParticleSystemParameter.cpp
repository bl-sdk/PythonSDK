#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMaterialParticleSystemParameter()
{
    class_< FMaterialParticleSystemParameter >("FMaterialParticleSystemParameter", no_init)
        .def_readwrite("Name", &FMaterialParticleSystemParameter::Name)
        .def_readwrite("Value", &FMaterialParticleSystemParameter::Value)
  ;
}