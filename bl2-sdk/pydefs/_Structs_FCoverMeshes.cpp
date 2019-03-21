#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverMeshes()
{
    class_< FCoverMeshes >("FCoverMeshes", no_init)
        .def_readwrite("Base", &FCoverMeshes::Base)
        .def_readwrite("LeanLeft", &FCoverMeshes::LeanLeft)
        .def_readwrite("LeanRight", &FCoverMeshes::LeanRight)
        .def_readwrite("LeanLeftPref", &FCoverMeshes::LeanLeftPref)
        .def_readwrite("LeanRightPref", &FCoverMeshes::LeanRightPref)
        .def_readwrite("Climb", &FCoverMeshes::Climb)
        .def_readwrite("Mantle", &FCoverMeshes::Mantle)
        .def_readwrite("SlipLeft", &FCoverMeshes::SlipLeft)
        .def_readwrite("SlipRight", &FCoverMeshes::SlipRight)
        .def_readwrite("SwatLeft", &FCoverMeshes::SwatLeft)
        .def_readwrite("SwatRight", &FCoverMeshes::SwatRight)
        .def_readwrite("PopUp", &FCoverMeshes::PopUp)
        .def_readwrite("PlayerOnly", &FCoverMeshes::PlayerOnly)
  ;
}