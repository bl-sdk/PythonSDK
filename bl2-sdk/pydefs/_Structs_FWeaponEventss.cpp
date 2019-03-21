#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponEvents()
{
    py::class_< FWeaponEvents,  FEventsBase   >("FWeaponEvents")
  ;
}