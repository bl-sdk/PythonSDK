#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FASValue()
{
    class_< FASValue >("FASValue", no_init)
        .def_readwrite("Type", &FASValue::Type)
        .def_readwrite("N", &FASValue::N)
        .def_readwrite("S", &FASValue::S)
  ;
}