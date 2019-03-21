#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADebugCameraHUD()
{
    class_< ADebugCameraHUD, bases< AHUD >  , boost::noncopyable>("ADebugCameraHUD", no_init)
        .def("StaticClass", &ADebugCameraHUD::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPostRender", &ADebugCameraHUD::eventPostRender)
        .def("DisplayMaterials", &ADebugCameraHUD::DisplayMaterials)
        .def("eventPostBeginPlay", &ADebugCameraHUD::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}