#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEnemyBreadCrumbStruct()
{
    class_< FEnemyBreadCrumbStruct >("FEnemyBreadCrumbStruct", no_init)
        .def_readwrite("pos", &FEnemyBreadCrumbStruct::pos)
        .def_readwrite("CombatArea", &FEnemyBreadCrumbStruct::CombatArea)
  ;
}