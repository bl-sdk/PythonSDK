#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FImpactResponseParameters()
{
    class_< FImpactResponseParameters >("FImpactResponseParameters", no_init)
        .def_readwrite("ParticleParameters", &FImpactResponseParameters::ParticleParameters)
        .def_readwrite("FontParameterValues", &FImpactResponseParameters::FontParameterValues)
        .def_readwrite("ScalarParameterValues", &FImpactResponseParameters::ScalarParameterValues)
        .def_readwrite("TextureParameterValues", &FImpactResponseParameters::TextureParameterValues)
        .def_readwrite("VectorParameterValues", &FImpactResponseParameters::VectorParameterValues)
        .def_readwrite("RtpcParameterValues", &FImpactResponseParameters::RtpcParameterValues)
  ;
}