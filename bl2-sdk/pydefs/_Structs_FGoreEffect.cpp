#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGoreEffect()
{
    class_< FGoreEffect >("FGoreEffect", no_init)
        .def_readwrite("HitRegion", &FGoreEffect::HitRegion)
        .def_readwrite("GoreDataIndex", &FGoreEffect::GoreDataIndex)
        .def_readwrite("InstigatedBy", &FGoreEffect::InstigatedBy)
        .def_readwrite("HitLocation", &FGoreEffect::HitLocation)
        .def_readwrite("Momentum", &FGoreEffect::Momentum)
  ;
}