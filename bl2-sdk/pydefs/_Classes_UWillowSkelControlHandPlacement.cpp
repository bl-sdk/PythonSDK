#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControlHandPlacement()
{
    class_< UWillowSkelControlHandPlacement, bases< USkelControlLimb >  , boost::noncopyable>("UWillowSkelControlHandPlacement", no_init)
        .def_readwrite("TargetRef", &UWillowSkelControlHandPlacement::TargetRef)
        .def_readwrite("TargetAttachmentName", &UWillowSkelControlHandPlacement::TargetAttachmentName)
        .def("StaticClass", &UWillowSkelControlHandPlacement::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}