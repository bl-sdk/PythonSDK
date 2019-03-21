#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTaggedGFxMovie()
{
    class_< FTaggedGFxMovie >("FTaggedGFxMovie", no_init)
        .def_readwrite("Movie", &FTaggedGFxMovie::Movie)
        .def_readwrite("Tag", &FTaggedGFxMovie::Tag)
  ;
}