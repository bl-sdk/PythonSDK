#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorsSelectionData()
{
    class_< FBehaviorsSelectionData >("FBehaviorsSelectionData", no_init)
        .def_readwrite("Weight", &FBehaviorsSelectionData::Weight)
        .def_readwrite("Behaviors", &FBehaviorsSelectionData::Behaviors)
  ;
}