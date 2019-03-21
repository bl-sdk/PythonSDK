#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageTypeBySpeedStruct()
{
    class_< FDamageTypeBySpeedStruct >("FDamageTypeBySpeedStruct", no_init)
        .def_readwrite("Speed", &FDamageTypeBySpeedStruct::Speed)
        .def_readwrite("DamageType", &FDamageTypeBySpeedStruct::DamageType)
  ;
}