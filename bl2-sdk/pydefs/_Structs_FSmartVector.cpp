#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSmartVector()
{
    class_< FSmartVector >("FSmartVector", no_init)
        .def_readwrite("Vector", &FSmartVector::Vector)
        .def_readwrite("Flag", &FSmartVector::Flag)
  ;
}