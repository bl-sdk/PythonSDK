#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReferencePoint()
{
    class_< FReferencePoint >("FReferencePoint", no_init)
        .def_readwrite("Type", &FReferencePoint::Type)
        .def_readwrite("Name", &FReferencePoint::Name)
  ;
}