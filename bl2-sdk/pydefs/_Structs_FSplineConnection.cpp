#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSplineConnection()
{
    class_< FSplineConnection >("FSplineConnection", no_init)
        .def_readwrite("SplineComponent", &FSplineConnection::SplineComponent)
        .def_readwrite("ConnectTo", &FSplineConnection::ConnectTo)
  ;
}