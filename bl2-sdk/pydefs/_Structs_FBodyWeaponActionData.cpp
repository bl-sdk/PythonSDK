#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBodyWeaponActionData()
{
    class_< FBodyWeaponActionData >("FBodyWeaponActionData", no_init)
        .def_readwrite("Action", &FBodyWeaponActionData::Action)
        .def_readwrite("Expression", &FBodyWeaponActionData::Expression)
        .def_readwrite("Animations", &FBodyWeaponActionData::Animations)
  ;
}