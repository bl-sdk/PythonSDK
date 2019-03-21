#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurveTwoVectors()
{
    class_< FInterpCurveTwoVectors >("FInterpCurveTwoVectors", no_init)
        .def_readwrite("Points", &FInterpCurveTwoVectors::Points)
        .def_readwrite("InterpMethod", &FInterpCurveTwoVectors::InterpMethod)
  ;
}