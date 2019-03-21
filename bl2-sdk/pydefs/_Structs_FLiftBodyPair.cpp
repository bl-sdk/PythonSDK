#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLiftBodyPair()
{
    py::class_< FLiftBodyPair >("FLiftBodyPair")
        .def_readwrite("BodyTag", &FLiftBodyPair::BodyTag)
        .def_readwrite("PhaseLockDef", &FLiftBodyPair::PhaseLockDef)
  ;
}