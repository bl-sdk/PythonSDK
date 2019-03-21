#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleCurvePair()
{
    class_< FParticleCurvePair >("FParticleCurvePair", no_init)
        .def_readwrite("CurveName", &FParticleCurvePair::CurveName)
        .def_readwrite("CurveObject", &FParticleCurvePair::CurveObject)
  ;
}