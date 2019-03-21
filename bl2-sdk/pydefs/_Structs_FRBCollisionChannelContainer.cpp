#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRBCollisionChannelContainer()
{
    py::class_< FRBCollisionChannelContainer >("FRBCollisionChannelContainer")
  ;
}