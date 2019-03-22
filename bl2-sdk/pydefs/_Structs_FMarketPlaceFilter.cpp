#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMarketPlaceFilter(py::module &m)
{
    py::class_< FMarketPlaceFilter >(m, "FMarketPlaceFilter")
        .def_readwrite("Tag", &FMarketPlaceFilter::Tag)
        .def_readwrite("Caption", &FMarketPlaceFilter::Caption)
        .def_readwrite("Filter", &FMarketPlaceFilter::Filter)
  ;
}