#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNavMeshPathConstraintCacheDatum()
{
    class_< FNavMeshPathConstraintCacheDatum >("FNavMeshPathConstraintCacheDatum", no_init)
        .def_readwrite("ListIdx", &FNavMeshPathConstraintCacheDatum::ListIdx)
        .def_readonly("List", &FNavMeshPathConstraintCacheDatum::List)
  ;
}