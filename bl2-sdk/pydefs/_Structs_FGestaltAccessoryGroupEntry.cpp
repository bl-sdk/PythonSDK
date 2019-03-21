#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryGroupEntry()
{
    class_< FGestaltAccessoryGroupEntry >("FGestaltAccessoryGroupEntry", no_init)
        .def_readwrite("GroupName", &FGestaltAccessoryGroupEntry::GroupName)
        .def_readwrite("GestaltAccessoryPartList", &FGestaltAccessoryGroupEntry::GestaltAccessoryPartList)
  ;
}