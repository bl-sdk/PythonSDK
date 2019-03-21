#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageClassEventData()
{
    py::class_< FDamageClassEventData >("FDamageClassEventData")
        .def_readwrite("DamageClassName", &FDamageClassEventData::DamageClassName)
  ;
}