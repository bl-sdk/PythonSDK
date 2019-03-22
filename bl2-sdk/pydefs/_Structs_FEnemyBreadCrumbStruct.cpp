#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEnemyBreadCrumbStruct(py::module &m)
{
    py::class_< FEnemyBreadCrumbStruct >(m, "FEnemyBreadCrumbStruct")
        .def_readwrite("pos", &FEnemyBreadCrumbStruct::pos)
        .def_readwrite("CombatArea", &FEnemyBreadCrumbStruct::CombatArea)
  ;
}