#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearboxGFxPlayParameters()
{
    class_< FGearboxGFxPlayParameters >("FGearboxGFxPlayParameters", no_init)
        .def_readwrite("Definition", &FGearboxGFxPlayParameters::Definition)
        .def_readwrite("OtherObject", &FGearboxGFxPlayParameters::OtherObject)
        .def_readwrite("PlayerOwner", &FGearboxGFxPlayParameters::PlayerOwner)
  ;
}