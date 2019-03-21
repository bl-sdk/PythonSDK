#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttachment()
{
    py::class_< FAttachment >("FAttachment")
        .def_readwrite("Component", &FAttachment::Component)
        .def_readwrite("BoneName", &FAttachment::BoneName)
        .def_readwrite("RelativeLocation", &FAttachment::RelativeLocation)
        .def_readwrite("RelativeRotation", &FAttachment::RelativeRotation)
        .def_readwrite("RelativeScale", &FAttachment::RelativeScale)
  ;
}