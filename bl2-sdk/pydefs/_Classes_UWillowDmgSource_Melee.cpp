#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Melee(py::module &m)
{
    py::class_< UWillowDmgSource_Melee,  UWillowDamageSource   >(m, "UWillowDmgSource_Melee")
          ;
}