#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageClassEventData(py::object m)
{
    py::class_< FDamageClassEventData >(m, "FDamageClassEventData")
        .def_readwrite("DamageClassName", &FDamageClassEventData::DamageClassName)
  ;
}