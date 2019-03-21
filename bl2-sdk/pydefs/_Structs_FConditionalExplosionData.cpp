#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConditionalExplosionData()
{
    class_< FConditionalExplosionData >("FConditionalExplosionData", no_init)
        .def_readwrite("Expression", &FConditionalExplosionData::Expression)
        .def_readwrite("Explosion", &FConditionalExplosionData::Explosion)
  ;
}