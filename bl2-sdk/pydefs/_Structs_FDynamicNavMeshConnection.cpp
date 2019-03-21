#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDynamicNavMeshConnection()
{
    class_< FDynamicNavMeshConnection >("FDynamicNavMeshConnection", no_init)
        .def_readwrite("MaxConnectionDistance", &FDynamicNavMeshConnection::MaxConnectionDistance)
        .def_readwrite("ConnectedPoint", &FDynamicNavMeshConnection::ConnectedPoint)
  ;
}