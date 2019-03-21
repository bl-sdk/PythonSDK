#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKCachedConvexDataElement()
{
    class_< FKCachedConvexDataElement >("FKCachedConvexDataElement", no_init)
        .def_readwrite("ConvexElementData", &FKCachedConvexDataElement::ConvexElementData)
  ;
}