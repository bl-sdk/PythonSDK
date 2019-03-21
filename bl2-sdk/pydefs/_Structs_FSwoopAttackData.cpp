#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSwoopAttackData()
{
    py::class_< FSwoopAttackData >("FSwoopAttackData")
        .def_readwrite("Distance", &FSwoopAttackData::Distance)
  ;
}