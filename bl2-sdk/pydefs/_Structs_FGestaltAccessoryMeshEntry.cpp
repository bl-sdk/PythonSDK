#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryMeshEntry()
{
    class_< FGestaltAccessoryMeshEntry >("FGestaltAccessoryMeshEntry", no_init)
        .def_readwrite("MeshName", &FGestaltAccessoryMeshEntry::MeshName)
        .def_readwrite("GestaltAccessoryGroupList", &FGestaltAccessoryMeshEntry::GestaltAccessoryGroupList)
  ;
}