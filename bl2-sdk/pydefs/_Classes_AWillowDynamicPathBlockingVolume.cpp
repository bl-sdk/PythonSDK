#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowDynamicPathBlockingVolume()
{
    class_< AWillowDynamicPathBlockingVolume, bases< AVolume >  , boost::noncopyable>("AWillowDynamicPathBlockingVolume", no_init)
        .def_readwrite("VfTable_IIGBXNavMeshObstacle", &AWillowDynamicPathBlockingVolume::VfTable_IIGBXNavMeshObstacle)
        .def_readwrite("BlockedAllegiances", &AWillowDynamicPathBlockingVolume::BlockedAllegiances)
        .def("StaticClass", &AWillowDynamicPathBlockingVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &AWillowDynamicPathBlockingVolume::OnToggle)
        .staticmethod("StaticClass")
  ;
}