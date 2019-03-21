#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVectorParticleSystemParameter()
{
    class_< FVectorParticleSystemParameter >("FVectorParticleSystemParameter", no_init)
        .def_readwrite("Name", &FVectorParticleSystemParameter::Name)
        .def_readwrite("Value", &FVectorParticleSystemParameter::Value)
        .def_readwrite("VectorScale", &FVectorParticleSystemParameter::VectorScale)
  ;
}