#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponMemento()
{
    class_< FWeaponMemento >("FWeaponMemento", no_init)
        .def_readwrite("SerialNumber", &FWeaponMemento::SerialNumber)
        .def_readwrite("StoredAmmo", &FWeaponMemento::StoredAmmo)
  ;
}