#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMatrix()
{
    class_< FMatrix >("FMatrix", no_init)
        .def_readwrite("XPlane", &FMatrix::XPlane)
        .def_readwrite("YPlane", &FMatrix::YPlane)
        .def_readwrite("ZPlane", &FMatrix::ZPlane)
        .def_readwrite("WPlane", &FMatrix::WPlane)
  ;
}