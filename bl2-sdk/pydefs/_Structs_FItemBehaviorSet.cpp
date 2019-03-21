#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemBehaviorSet()
{
    class_< FItemBehaviorSet >("FItemBehaviorSet", no_init)
        .def_readwrite("OnUsed", &FItemBehaviorSet::OnUsed)
  ;
}