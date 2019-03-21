#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRagdollDeathImpulseStruct()
{
    class_< FRagdollDeathImpulseStruct >("FRagdollDeathImpulseStruct", no_init)
        .def_readwrite("Impulse", &FRagdollDeathImpulseStruct::Impulse)
        .def_readwrite("Offset", &FRagdollDeathImpulseStruct::Offset)
        .def_readwrite("BoneName", &FRagdollDeathImpulseStruct::BoneName)
  ;
}