#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIPlayerMaster()
{
    class_< UIPlayerMaster, bases< UInterface >  , boost::noncopyable>("UIPlayerMaster", no_init)
        .def("StaticClass", &UIPlayerMaster::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetPlayerMasterPlayerController", &UIPlayerMaster::GetPlayerMasterPlayerController, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}