#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_StatusEffect(py::module &m)
{
    py::class_< UWillowDmgSource_StatusEffect,  UWillowDamageSource   >(m, "UWillowDmgSource_StatusEffect")
          ;
}