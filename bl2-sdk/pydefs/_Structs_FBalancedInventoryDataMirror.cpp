#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBalancedInventoryDataMirror()
{
    class_< FBalancedInventoryDataMirror >("FBalancedInventoryDataMirror", no_init)
        .def_readwrite("ObjectName", &FBalancedInventoryDataMirror::ObjectName)
        .def_readwrite("ObjectPath", &FBalancedInventoryDataMirror::ObjectPath)
  ;
}