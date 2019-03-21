#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimTag()
{
    class_< FAnimTag >("FAnimTag", no_init)
        .def_readwrite("Tag", &FAnimTag::Tag)
        .def_readwrite("Contains", &FAnimTag::Contains)
  ;
}