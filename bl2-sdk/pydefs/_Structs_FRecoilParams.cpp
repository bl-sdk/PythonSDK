#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRecoilParams()
{
    class_< FRecoilParams >("FRecoilParams", no_init)
        .def_readwrite("X", &FRecoilParams::X)
        .def_readwrite("Y", &FRecoilParams::Y)
        .def_readwrite("Z", &FRecoilParams::Z)
        .def_readwrite("Padding", &FRecoilParams::Padding)
  ;
}