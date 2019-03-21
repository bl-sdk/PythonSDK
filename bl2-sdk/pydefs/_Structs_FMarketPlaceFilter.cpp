#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMarketPlaceFilter()
{
    class_< FMarketPlaceFilter >("FMarketPlaceFilter", no_init)
        .def_readwrite("Tag", &FMarketPlaceFilter::Tag)
        .def_readwrite("Caption", &FMarketPlaceFilter::Caption)
        .def_readwrite("Filter", &FMarketPlaceFilter::Filter)
  ;
}