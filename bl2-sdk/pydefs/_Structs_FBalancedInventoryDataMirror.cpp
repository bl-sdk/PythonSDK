#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBalancedInventoryDataMirror()
{
    py::class_< FBalancedInventoryDataMirror >("FBalancedInventoryDataMirror")
        .def_readwrite("ObjectName", &FBalancedInventoryDataMirror::ObjectName)
        .def_readwrite("ObjectPath", &FBalancedInventoryDataMirror::ObjectPath)
  ;
}