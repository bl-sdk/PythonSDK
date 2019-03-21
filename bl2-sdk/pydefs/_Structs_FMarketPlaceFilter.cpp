#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMarketPlaceFilter()
{
    py::class_< FMarketPlaceFilter >("FMarketPlaceFilter")
        .def_readwrite("Tag", &FMarketPlaceFilter::Tag)
        .def_readwrite("Caption", &FMarketPlaceFilter::Caption)
        .def_readwrite("Filter", &FMarketPlaceFilter::Filter)
  ;
}