#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponMemento()
{
    py::class_< FWeaponMemento >("FWeaponMemento")
        .def_readwrite("SerialNumber", &FWeaponMemento::SerialNumber)
        .def_readwrite("StoredAmmo", &FWeaponMemento::StoredAmmo)
  ;
}