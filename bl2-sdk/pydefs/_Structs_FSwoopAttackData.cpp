#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSwoopAttackData(py::module &m)
{
    py::class_< FSwoopAttackData >(m, "FSwoopAttackData")
        .def_readwrite("Distance", &FSwoopAttackData::Distance)
  ;
}