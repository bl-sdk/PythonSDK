#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltLODModel()
{
    class_< FGestaltLODModel >("FGestaltLODModel", no_init)
        .def_readwrite("GestaltFragments", &FGestaltLODModel::GestaltFragments)
  ;
}