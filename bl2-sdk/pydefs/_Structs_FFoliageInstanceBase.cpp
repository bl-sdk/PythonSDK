#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFoliageInstanceBase()
{
    class_< FFoliageInstanceBase >("FFoliageInstanceBase", no_init)
        .def_readwrite("Location", &FFoliageInstanceBase::Location)
        .def_readwrite("XAxis", &FFoliageInstanceBase::XAxis)
        .def_readwrite("YAxis", &FFoliageInstanceBase::YAxis)
        .def_readwrite("ZAxis", &FFoliageInstanceBase::ZAxis)
        .def_readwrite("DistanceFactorSquared", &FFoliageInstanceBase::DistanceFactorSquared)
  ;
}