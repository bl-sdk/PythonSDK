#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_F_ModifyHealthParams()
{
    class_< F_ModifyHealthParams >("F_ModifyHealthParams", no_init)
        .def_readwrite("DamageAmount", &F_ModifyHealthParams::DamageAmount)
        .def_readwrite("EventInstigator", &F_ModifyHealthParams::EventInstigator)
        .def_readwrite("HitLocation", &F_ModifyHealthParams::HitLocation)
        .def_readwrite("Momentum", &F_ModifyHealthParams::Momentum)
        .def_readwrite("DamageType", &F_ModifyHealthParams::DamageType)
        .def_readwrite("DamageTypeDefinition", &F_ModifyHealthParams::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &F_ModifyHealthParams::ImpactDefinition)
  ;
}