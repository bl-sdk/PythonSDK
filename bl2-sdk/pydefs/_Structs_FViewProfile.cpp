#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FViewProfile()
{
    class_< FViewProfile >("FViewProfile", no_init)
        .def_readwrite("InPlayer", &FViewProfile::InPlayer)
        .def_readwrite("ViewNormal", &FViewProfile::ViewNormal)
        .def_readwrite("ViewLocation", &FViewProfile::ViewLocation)
        .def_readwrite("ViewRotation", &FViewProfile::ViewRotation)
        .def_readwrite("ViewNormalDotViewNormal", &FViewProfile::ViewNormalDotViewNormal)
        .def_readonly("UnknownData00", &FViewProfile::UnknownData00)
        .def_readwrite("ViewMatrix", &FViewProfile::ViewMatrix)
  ;
}