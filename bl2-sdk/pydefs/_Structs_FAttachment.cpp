#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttachment()
{
    class_< FAttachment >("FAttachment", no_init)
        .def_readwrite("Component", &FAttachment::Component)
        .def_readwrite("BoneName", &FAttachment::BoneName)
        .def_readwrite("RelativeLocation", &FAttachment::RelativeLocation)
        .def_readwrite("RelativeRotation", &FAttachment::RelativeRotation)
        .def_readwrite("RelativeScale", &FAttachment::RelativeScale)
  ;
}