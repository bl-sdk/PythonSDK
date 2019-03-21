#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFishtailingInfo()
{
    class_< FFishtailingInfo >("FFishtailingInfo", no_init)
        .def_readwrite("ContactPoint", &FFishtailingInfo::ContactPoint)
        .def_readwrite("Impulse", &FFishtailingInfo::Impulse)
  ;
}