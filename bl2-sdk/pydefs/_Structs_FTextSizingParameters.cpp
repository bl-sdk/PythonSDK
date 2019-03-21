#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTextSizingParameters()
{
    class_< FTextSizingParameters >("FTextSizingParameters", no_init)
        .def_readwrite("DrawX", &FTextSizingParameters::DrawX)
        .def_readwrite("DrawY", &FTextSizingParameters::DrawY)
        .def_readwrite("DrawXL", &FTextSizingParameters::DrawXL)
        .def_readwrite("DrawYL", &FTextSizingParameters::DrawYL)
        .def_readwrite("Scaling", &FTextSizingParameters::Scaling)
        .def_readwrite("DrawFont", &FTextSizingParameters::DrawFont)
        .def_readwrite("SpacingAdjust", &FTextSizingParameters::SpacingAdjust)
        .def_readwrite("ViewportHeight", &FTextSizingParameters::ViewportHeight)
  ;
}