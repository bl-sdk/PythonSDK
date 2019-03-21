#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClientAdjustment()
{
    py::class_< FClientAdjustment >("FClientAdjustment")
        .def_readwrite("TimeStamp", &FClientAdjustment::TimeStamp)
        .def_readwrite("newPhysics", &FClientAdjustment::newPhysics)
        .def_readwrite("NewLoc", &FClientAdjustment::NewLoc)
        .def_readwrite("NewVel", &FClientAdjustment::NewVel)
        .def_readwrite("NewBase", &FClientAdjustment::NewBase)
        .def_readwrite("NewFloor", &FClientAdjustment::NewFloor)
        .def_readwrite("bAckGoodMove", &FClientAdjustment::bAckGoodMove)
  ;
}